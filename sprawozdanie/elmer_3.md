## Konfiguracja Równania
Teraz możemy przystąpić do definiowania modelu. Na początku warto wyświetlić podstawową konfigurację:
```cpp
Model
    Setup
```
Nie musimy tu jednak niczego zmieniać.
<p align="center">![elmer05](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer05.png?raw=true)</p>
Następnie dodajemy równanie Naviera-Stokesa jako aktywne:  
```cpp
Model  
    Equasion  
        Add...
        Navier-Stokes
            Active [x]
        Apply to bodies: 
            [x] Body 1
        Edit Solver Settings
            Nonlinear system
                Max iterations 40
                Measure [Norm]
            Steady state
                Measure [Norm]
            Apply
        Ok
```
Ustawiamy w ten sposób równanie na aktywne, aplikujemy je do geometrii. Zmieniamy również typ badania zbieżności tak, by dla naszego przypadku dawał lepsze wyniki, oraz zwiększamy ilość iteracji w nadziei na zwiększenie doładności. Odbija się to oczywiście na czasie symulacji, lecz nie zwiększa go tyle, by stało się to nieopłacalne.  
Po lewej ustawienia równania, po prawej ustawienia solvera:
<p align="center">![elmer06](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer06.png?raw=true)</p>
***