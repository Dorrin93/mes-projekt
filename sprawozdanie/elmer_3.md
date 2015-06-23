## Konfiguracja Równania
<p align="justify">Teraz możemy przystąpić do definiowania modelu. Na początku warto wyświetlić podstawową konfigurację:
```cpp
Model
    Setup
```
Nie musimy tu jednak niczego zmieniać.</p>
<p align="center">![elmer05](elmer05.png)</p>
<p align="justify">Następnie dodajemy równanie Naviera-Stokesa jako aktywne:  
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
</p>
<p align="justify">Ustawiamy w ten sposób równanie na aktywne, aplikujemy je do geometrii. Zmieniamy również typ badania zbieżności tak, by dla naszego przypadku dawał lepsze wyniki, oraz zwiększamy ilość iteracji w nadziei na zwiększenie doładności. Odbija się to oczywiście na czasie symulacji, lecz nie zwiększa go tyle, by stało się to nieopłacalne.  
Po lewej ustawienia równania, po prawej ustawienia solvera:</p>
<p align="center">![elmer06](elmer06.png)</p>
==========================