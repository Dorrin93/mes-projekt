## Pisanie programu z użyciem biblioteki vi_flow

<p align="justify">Na potrzeby projektu skorzystałem z zaimplementowanej przeze mnie biblioteki numerycznej **vi_flow**, napisanej na podstawie czwartch laboratoriów z *Inżynierskich metod numerycznych*.  
Cały kod dostępny jest w folderze cpp, oraz na moim [repozytorium](https://github.com/Dorrin93/imn-libs).</p>
```cpp
#include "vi_flow.hpp"

double mi = 1.;
double Q = -20;

double x_min = 0;
double x_max = 10;
double y_min = -1;
double y_max = 1;

double dx = 0.01;
double dy = 0.01;

imn::Point a = {2.3, -1};
imn::Point b = {2.7, -1};
imn::Point c = {2.3, 0};
imn::Point d = {2.7, 0};

double vor(double x, double y){ 
    return (Q/(2.*mi)) * (2 * y - y_min - y_max); 
}

double flu(double x, double y){ 
    return (Q/(2.*mi)) * ((y*y*y)/3. - (y*y)*0.5*(y_min+y_max) + y_min*y_max*y); 
}

int main(){
    std::ofstream file;

    imn::Wall w1, w2, w3,w4;
    w1 = {a, c, imn::Wall::LEFT};
    w2 = {b, d, imn::Wall::RIGHT};
    w3 = {c, d, imn::Wall::UP};
    w4 = {a, b, imn::Wall::DOWN};
    std::vector<imn::Wall*> walls = {&w1, &w2, &w3, &w4};
    imn::ns_obstacle(x_min, x_max, y_min, y_max, dx, dy, flu, vor, walls, file, 1e-7, 2200);

    return 0;
} 
```  
  
<p align="justify">Tak wygląda przykładowy plik *main*, który pozwoli nam uzyskać (miejmy nadzieję) wyniki jak najbardziej zbliżone do tych z **Elmera**. Przeanalizujmy kod:  </p>
1)
```cpp
#include "vi_flow.hpp"
```
<p align="justify">Typowe dla **C++** dołączenie nagłówka znajdującego się w tym samym folderze, w tym przypadku nagłówek naszej biblioteki.</p>
2)
```cpp
double mi = 1.;
double Q = -20;
```
Ustawienie współczynnika lepkości $$\mu$$ na 1.  
Ustawienie gradientu ciśnienia $$Q = \frac{\partial P}{\partial x}$$ na -20.
  
3)  
```cpp
double x_min = 0;
double x_max = 10;
double y_min = -1;
double y_max = 1;

double dx = 0.01;
double dy = 0.01;

imn::Point a = {2.3, -1};
imn::Point b = {2.7, -1};
imn::Point c = {2.3, 0};
imn::Point d = {2.7, 0};
```
<p align="justify">Ustawnienie parametrów siatki i przeszkody. Te same wartości widzieliśmy w **Elmerze**, z tą różnicą, że tu musimy podać kroki przestrzenne, $$dx$$ oraz $$dy$$, które są wyjątkowo istotne dla naszych obliczeń - od nich zależy między innymi rozmiar siatki, oraz dokładność wyniku. Definiujemy tu również punkty budujące przeszkodę, które są prostymi strukturami zawierającymi dwie zmienne.</p>
4)  
```cpp
double vor(double x, double y){ 
    return (Q/(2.*mi)) * (2 * y - y_min - y_max); 
}

double flu(double x, double y){ 
    return (Q/(2.*mi)) * ((y*y*y)/3. - (y*y)*0.5*(y_min+y_max) + y_min*y_max*y); 
}
```  
<p align="justify">Definicje wcześniej opisanych funkcji wirowości, oraz przepływu. Należy je zdefinować, gdyż implementacja schematu pobiera te dwa wskaźniki na funkcje.</p>
5)
```cpp
std::ofstream file;

imn::Wall w1, w2, w3,w4;
w1 = {a, c, imn::Wall::LEFT};
w2 = {b, d, imn::Wall::RIGHT};
w3 = {c, d, imn::Wall::UP};
w4 = {a, b, imn::Wall::DOWN};
std::vector<imn::Wall*> walls = {&w1, &w2, &w3, &w4};
```
<p align="justify">Strumień wyjściowy pliku będzie służył do zapisu wyników. Jeżeli chcemy mieć nazwę inną niż domyślną, należy go otworzyć i podać nazwę. Można też pozostawić go zamkniętym, wtedy zostanie nadana domyślna nazwa. Jeżeli sami otwieramy plik, należy pamiętać o tym, by go zamknąć i zmodyfikować skrypt gnuplota.  
Ostatnim krokiem przed wywołaniem funkcji jest zdefiniowanie ściań składających się na przeszkodę. Obrałem tu nieco inny sposób ich budowy, niż widzieliśmy to w plikach typu **in2d**. Ściana taka składa się z dwóch punktów i oznaczenia brzegu. Na przykład, jako że punkt `a` i `c` mają taką samą wartość $$x$$, która jest mniejsza niż w przypadku `b` i `d`, czyni ją lewą ścianą.
<font color="red">Bardzo ważne! Wartość współrzędnej $$x$$ pierwszego podanego punktu **musi** być mniejsza bądź równa niż współrzędna drugiego punktu. To samo tyczy się współrzędnej $$y$$.</font></p>
Ze wskaźników do tych ścian budujemy następnie wektor, który przekażemy do funckcji.
  
6)
```cpp
imn::ns_obstacle(x_min, x_max, y_min, y_max, dx, dy, flu, vor, walls, file, 1e-7, 2200);
```
Właściwe wywołanie funkcji która dokona obliczeń. Argumenty kolejno:
* Minmalna wartość na OX
* Maksymalna wartość na OX
* Minmalna wartość na OY
* Maksymalna wartość na OY
* Krok x
* Krok y
* Funkcja strumienia (wskaźnik na funkcję)
* Funkcja wirowości (wskaźnik na funkcję)
* Wektor ścian przeszkody (referencja)
* Strumień wyjściowy pliku (referencja)  

Argumenty mające wartości domyślne (więc nie jest konieczne ich podanie):
* Dokładność obliczeń (domyślnie 1e-7)
* Ilość początkowych iteracji (domyślnie 500)
* Położenie przeszkody - spód to fałsz, góra to prawda. Domyślnie fałsz.

<p align="justify">Metodą doświadczalną doszedłem do tego, ża dla takiego kształtu siatki obliczeniowej, warunek zbieżności nie działa dokładnie tak, jakbym sobie tego życzył, więc wymusiłem 2200 iteracji. Dla wyższych wartości schemat się załamywał, wypluwając wartości `nan` jako wyniki.</p>
***