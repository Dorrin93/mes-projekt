# <p align="center">Przepływ a _Elmer_</p>

<p align="justify">**Elmer** jest otwartoźródłowym pakietem obliczeniowym. Jest zdecydowanie mniejszy niż **Abaqus**, jednak dzęki temu łatwiej nie utunąć w natłoku dostępnych opcji.  
Środowisko posiada zarówno tryb tekstowy, jak i wersję GUI. Dostępne jest na systemach Windows i Linux (**Debian i Ubuntu**, na mniej popularnych dystrybucjach trzeba skompilować kod samemu).
**Elmer** umożliwia rozwiązywanie następujących typów zagadnień: </p>
* Równanie Naviera-Stokesa (przepływy)
* Elastyczność liniowa
* Elektrostatyka
* Aktualizacja siatki obliczeniowej
* Równania rozkładu ciepła
* Równanie Helmholtza-Smoluchowskiego (potencjał elektrokinetyczny)

<p align="justify">Zajmiemy się **równaniem Naviera-Stokesa**.  
Najpierw jednak należy zdefiniować geometrię. W naszym przypdaku najłatwiej będzie to zrobić tworząc plik tekstowy w fomacie **in2d**. Tworzymy więc w ulubionym edytorze dowolny plik tego typu, na przykład *example.in2d* :</p>  
```
# plik in2d zaczynamy słowem kluczowym splinecurves2dv2
splinecurves2dv2
# współczynnik rafinacji, najlepiej zostawić domyślny
20

#punkty
points
1 0 -1.0
2 10.0 -1.0
3 10.0 1.0
4 0.0 1.0

5 2.3 -1.0
6 2.3 0.0
7 2.7 0.0
8 2.7 -1.0

#segmenty
segments
1 0 2 1 5 -bc=3
1 0 2 5 6 -bc=3
1 0 2 6 7 -bc=3
1 0 2 7 8 -bc=3
1 0 2 8 2 -bc=3
1 0 2 2 3 -bc=2
1 0 2 3 4 -bc=3
1 0 2 4 1 -bc=1
```

<p align="justify">Punkty będą definiować geometrię, jednak same w sobie nic nie znaczą. Składnia punktu:  </p>
```
numer wartość-OX wartosć-OY
  1        0        -1.0
```
<p align="justify">Istotne jest to, że nasza siatka znajduje się w przestrzeni kartezjańskiej, więc nie musimy zaczynać od punktu $$(0,0)$$, co ma dość istotny wpływ na obliczenia.  
Pierwsze cztery punkty definiują granice siatki. Kolejne cztery  - graniczne punkty przeszkody. Kolejność jest nieistotna, warto jendak utrzymywać tu porządek. Jak widać, nasza siatka ma zakres $$x \in [0, 10]$$, $$y \in [-1, 1]$$, przeszkoda zaś $$x \in [2.3, 2.7]$$, $$y \in [-1, 0]$$.   
Następnie należy zdefiniować segmenty:  </p>
```
coś cośtam coś innego punkt1 punt2 warunek-brzegowy
```
