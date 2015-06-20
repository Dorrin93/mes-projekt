# Przepływ a _Elmer_

**Elmer** jest otwartoźródłowym pakietem obliczeniowym. Jest zdecydowanie mniejszy niż **Abaqus**, jednak dzęki temu łatwiej nie utunąć w natłoku dostępnych opcji.  
Środowisko posiada zarówno tryb tekstowy, jak i wersję GUI. Dostępne jest na systemach Windows i Linux (**Debian i Ubuntu**, na mniej popularnych dystrybucjach trzeba skompilować kod samemu).  
**Elmer** umożliwia rozwiązywanie następujących typów zagadnień:  
* Równanie Naviera-Stokesa (przepływy)
* Elastyczność liniowa
* Elektrostatyka
* Aktualizacja siatki obliczeniowej
* Równania rozkładu ciepła
* Równanie Helmholtza-Smoluchowskiego (potencjał elektrokinetyczny)

Zajmiemy się **równaniem Naviera-Stokesa**.  
Najpierw jednak należy zdefiniować geometrię. W naszym przypdaku najłatwiej będzie to zrobić tworząc plik tekstowy w fomacie **in2d**. Tworzymy więc w ulubionym edytorze dowolny plik tego typu, na przykład *example.in2d*:
