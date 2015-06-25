#<p align="center">Wstęp teoretyczny</p>

Zanim przejdziemy do konkretów, musimy dowiedzieć się, czym w teorii jest przepływ, jakimi równaniami go opisać, oraz jak je rozwiązać.

Przepływ najlepiej można określić jako **ruch cieczy**. Aby go opisać, trzeba podać własności tej cieczy w każdym punkcie - na przykład woda porusza się w różnych kierunakch z różnymi prędkościami. Tak więc jedną z tych cech są **trzy składowe prędkości** w każdym punkcie i w każdej chwili. Jeżeli będziemy potrafili znaleźć równania, które określają prędkość, to będziemy wiedzieć, jak ciecz przez cały czas się porusza.  
Jednakże prędkość nie jest jedyną zmieniającą się od punktu do punku własnością, która daną ciecz charakteryzuje. Może to być również **zmiana ciśnienia**, **gęstości**,  czy  **temperatury**, a  dodatkowo ciecz może być przewodnikiem elektrycznym więc charakteryzować ją może **gęstość prądu**, czy **pole magnetyczne**.
 Liczba pól zależy więc od tego, z jak skomplikowanym zagadnieniem mamy do czynienia.

Zajmiemy się sytuacją, w której nie ma pola magnetycznego ani przewodnictwa, nie będziemy się również martwić o temperaturę, gdyż założymy, że gęstość i ciśnienie określą ją jedoznacznie w każdym punkcie. Pójdziemy nawet krok dalej i założymy, że **gęstość jest stała**, co oznacza, że **ciecz jest zupełnie nieściśliwa**. Isotne jest to, że martwić się o zmiany gęstosći nie musimy tylko wtedy, prędkości przepływu są dużo mniejsze od prędkości fali dźwiękowej w danej cieczy.

Ogólną teorię cieczy zacząć trzeba od *równania stanu*, które w danej cieczy wiąże **ciśnienie z gęstością**. W naszym przypadku równaniem stanu jest po prostu warunek

<p align="center">$$\rho = const$$</p>

Następny związek wyraża **zasadę zachowania materii** - jeżeli z jakiegoś punktu materia wypływa, to jej ilość jaka pozostaje  w tym punkcie musi maleć. Jeżeli prędkość cieczy wynosi $$\nu$$, to masa, która w jednostce czasu przepływa przez jednostkową powierzchnię, jest równa składowej $$\rho\nu$$, normalnej do tej powierzchni. *Dywergencja* (źródłowość) takiej wielkości jest równa prędkości malenia gęstości. Stąd równanie

<p align="center">$$\nabla\cdot(\rho\nu)=-\frac{\partial \rho}{\partial t}$$</p>

wyrażające zasadę zachowania masy dla cieczy jest **hydrodynamicznym równaniem ciągłości**. W naszym przypadku (ciecz nieściśliwa) $$\rho$$ jest jest pewną stałą i równanie ciągłości przechodzi w proste równanie  

<p align="center">$$\nabla\cdot\nu=0$$</p>

Prędkość płynu ma tu więc dywergencję równą zero.  
Kolene równanie otrzymamy z prawa Newtona, które określa jak zmienia się prędkość na skutek działania sił. Masa pewnego elementu objętości cieczy, pomnożona przez przez jego przyspieszenie musi być równa sile działającej na ten element (II prawo Newtona). Biorąc element o objętości jednostkowej i oznaczając siłę na jednostkę objętości (*gęstość siły*) przez $$f$$, mamy  

<p align="center">$$\rho\cdot(przyspieszenie)=f$$</p>

Gęstość siły przedstawimy w postaci trzech wyrazów:
* pochodząca od ciśnienia siła na jednostkę objętości: $$-\nabla p$$
* gęstość siły od sił zachowawczych (na przykład siła ciężkości) $$\varphi$$: $$-\rho\nabla\varphi$$
* gęstość sił od naprężeń ścinających (**lepkości**): $$f_{lepk}$$

Nasze równanie ruchu ma zatem postać

<p align="center">$$\rho\cdot (przyspieszenie)=-\nabla p-\rho\nabla\varphi+f_{lepk}(*)$$</p>

Jedyne czego nam brakuje do zapisania tego równania w postaci jawnej jest wyrażenie na przyspieszenie. Normalnie można by przypuszczać, że będzie to po prostu $$\partial\nu / \partial t$$. Tak jednak nie jest. Pochodna ta jest równa szybkości, z jaką prędkość $$\nu (x, y, z, t)$$ zmienia się w *pewnym ustalonym punkcie* przestrzeni. Tymczasem my musimy wiedzieć, jak zmienia się prędkość *poszczególnej cząstki* cieczy.  
Jeżeli $$\nu (x, y, z, t)$$ jest prędkością cząstki płynu, która w chwili $$t$$ znajduje się w punkcie $$(x, y, z)$$, to prędkość tej samej cząstki w chwili $$t + \Delta t$$ dana jest przez $$\nu (x+\Delta x, y + \Delta y, z + \Delta z, t + \Delta t)$$, przy czym  

<p align="center">$$\Delta x = v_x\Delta t$$</p>
<p align="center">$$\Delta y = v_y \Delta t$$</p>
<p align="center">$$\Delta z = v_z \Delta t$$</p>

Z definicji pochodnych cząstkowych mamy z dokładnością do wyrazów pierwszego rzędu

<p align="center">$$\nu (x+v_x\Delta t, y +v_y \Delta t, z + v_z\Delta t, t + \Delta t)=\nu (x, y, z, t)+\frac{\partial \nu}{\partial x}v_x\Delta t+\frac{\partial \nu}{\partial y}v_y\Delta t+\frac{\partial \nu}{\partial z}v_z\Delta t+\frac{\partial \nu}{\partial t} \Delta t$$</p>

Przyspieszenie $$\Delta\nu / \Delta t$$ jest więc równe

<p align="center">$$v_x \frac{\partial \nu}{\partial x}+v_y \frac{\partial \nu}{\partial y}+v_z \frac{\partial \nu}{\partial z}+ \frac{\partial \nu}{\partial t}$$</p>

Można to zapisać - traktując operator $$\nabla$$ jako wektor - jako

<p align="center">$$(\nu\cdot\nabla)\nu+\frac{\partial \nu}{\partial t}$$</p>

Warto zauważyć, że przyspieszenie może być różne od zera nawet wtedy, gdy $$\partial \nu / \partial t = 0$$, a więc wtedy, gdy prędkość *w danym punkcie* się nie zmienia (ruch obrotowy).  
Reszta teorii to matematyka. Wstawiamy ostatni wynik do równania $$(*)$$, dzielimy je obustronnie przez $$\rho$$ i dostajemy wzór ostateczny:

<p align="center">$$\frac{\partial \nu}{\partial t}+(\nu\cdot\nabla)\nu =-\frac{\nabla p}{\rho}-\nabla\varphi+\frac{f_{lepk}}{\rho}$$ </p>

Wzór ten będzie wzorem wyjściowym do dalszych rozważań.
***