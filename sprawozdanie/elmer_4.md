## Konfiguracja materiału
Kolejny krok to ustawienie danych materiału:
```cpp
Model
    Material
        Add...
        General
            Density 1
        Navier-Stokes
            Viscosity 1
        Apply to bodies:
            [x] Body 1
        Ok
```
Ustawiliśmy *gęstość*, oraz *lepkość* cieczy na 1. Takiego samego ustawienia użyjemy później w programie w **C++**.
<p align="center">![elmer07](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer07.png?raw=true)</p>
***