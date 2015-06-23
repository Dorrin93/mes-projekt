## Warunki brzegowe
<p align="justify"> Ostatnim krokiem przed uruchomieniem symulacji jest ustawienie na odpowiednio zdefinowane wcześniej segmenty warunków brzegowych.</p>
1) Źródło strumienia  
```cpp
Model  
    Boundary condition
        Add...
        Navier-Stokes
            Velocity 1 Variable Coordinate 2; Real MATC "-10*(tx+1.0)*(tx-1.0)"
            Velocity 2 0.0
        Apply to boundaries:
            [x] Boundary 1
        Ok
```
2) Ujście strumienia
```cpp
Model
    Boundary condition
        Add...
        Navier-Stokes
            Velocity 2 0.0
        Apply to boundaries:
            [x] Boundary 2
        Ok
```
3) Ściana górna i dolna, oraz przeszkoda
```cpp
Model
    Boundary Conditions
        Add...
        Navier-Stokes
            Noslip wall Bc [x]
        Apply to boundaries:
            [x] Boundary 3
```
Menu w przypadku 1 i 3:
<p align="center">![elmer08](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer08.png?raw=true)


![elmer09](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer09.png?raw=true)</p>
<p align="justify">Przypadki 2 i 3 są dość oczywiste. W przypadku 2 niwelujemy przepływ wzdłuż osi OY, pozostawiając przepływ wzdłuż OX do obliczenia przez symulator. W przypadku 3 z kolei ustawiamy ściany bez poślizgu, czyli innymi słowy ograniczenia dla rury przez którą będzie płynąć ciecz.  
W przypadku 1 najpierw wybieramy zmienną, od której uzależnimy początkową wartość przepływu - `Variable Coordinate 2` odpowiada zmiennej `y`. Następnie piszemy równanie ze zmienną `y`, która w kodzie oznaczona jest poprzez `tx`. Właściwa postać równania to  </p>
<p align="center">$$u_0(y) = {Q \over 2\mu}(y-y_{min})(y-y_{max}) $$  </p>
gdzie 
* za $$Q$$ będące gradientem ciśnienia przyjmujemy -20 (tak samo zrobimy w **C++**)
* za $$\mu$$ wcześniej przyjęliśmy 1 (współczynnik lepkości)
* za $$y_{min}$$ i $$y_{max}$$ przyjmujemy odpowiednio  -1 oraz 1.

Przed uruchomieniem symulacji należy zapisać projekt. Robimy to poprzez 
```cpp
File
    Save project...
```
<p align="justify"><font color="red">**Bardzo ważne! Po każdej zmianie, przed uruchomieniem symulacji należy zapisać projekt. Symulator działa tylko na ostatnio zapisanym projekcie, ignorując niezapisane zmiany!**</font>  

Teraz jedyne co nam pozostaje to przeprowadenie symulacji.</p>
<style>img[alt=elmer08] {width: 700px}</style>
***