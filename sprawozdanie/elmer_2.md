## Konfiguracja siatki
<p align="justify">  Mając zdefiniowaną figurę możemy przejść do środowiska **Elmer**. Po uruchomieniu `ElmerGUI` wita nas takie oto okno:</p>
<p align="center">![elmer01](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer01.png?raw=true) </p>
<p align="justify">Pierwsze co należy zrobić, to wybrać plik siatki:
```cpp
File
    Open
```
Po czym wybieramy nasz plik **in2d**.</p>
<p align="center">![elmer02](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer02.png?raw=true)</p>
<p align="justify">Jak widać, nasza siatka niezbyt dobrze pokrywa figurę. Aby zwiększyć gęstość i tym samym dokładność obliczeń używamy menu mesh:
```cpp
Mesh
    Configure
        Max H: 0.07
        Apply
            
Mesh
    Remesh
```
Operacja i wynik:</p>
<p align="center">
![elmer03](https://github.com/Dorrin93/mes-projekt/blob/master/sprawozdanie/elmer03_04.png?raw=true)  
***