#<p align="center"> Przepływ a _C++_</p>

<p align="justify">**C++** (choć treść tego akapitu można równie dobrze odnieść równieć do **C**) dzięki dość niskopoziomowym operacjom (wskaźniki), oraz kompilacji bezpośrednio pod środowisko docelowe pozwala na uzyskanie prędkości obliczeń niemożliwej dla innych języków ogólnego przeznaczenia, co czyni go dobrym wyborem gdy chcemy zaimplementować wymagające pod względem obliczeniowym algorytmy.</p>
<p align="justify">W przeciwieństwie do **Elmera**, w **C++** nie będziemy rozwiązywać równania Naviera-Stokesa poprzez podanie prędkości dla każdej osi. Zamiast tego rozwiążemy ten problem przy użyciu (teoretycznie) dwuwymiarowych funkcji strumienia, oraz wirowości, przybliżając wyniki na siatce przy pomocy metody różnic skończonych.</p>
Funkcja wirowości:  
<p align="center">$$\zeta_0(x,y)={Q\over{2\mu}}(2y-y_{min}-y_{max})$$</p>
Funkcja przepływu:
<p align="center">$$\psi_0(x,y)={Q\over{2\mu}}({y^3\over3}-{y^2\over2}(y_{min}+y_{max})+y_{min}y_{max}y)$$</p>
Gdzie
* $$Q$$ - gradient ciśnienia (u nas -20)
* $$\mu$$ - współczynnik lepkości
* $$y$$ - aktualna wartość zmiennej $$y$$ po ktrórej iterujemy
* $$y_{min}$$ i $$y_{max}$$ - odpowiednio położenie górnego i dolnego końca rury

Skoro znamy już podstawy, możemy przystąpić do pisania programu.
***
