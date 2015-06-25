## Ciecz lepka i liczba Reynoldsa

Zajmiemy się teraz rzeczywistym przepływem cieczy. We wstępnie stwierdziliśmy, że prawa ruchu cieczy są dane równaniem:
  
<p align="center">$$\frac{\partial \nu}{\partial t}+(\nu\cdot\nabla)\nu =-\frac{\nabla p}{\rho}-\nabla\varphi+\frac{f_{lepk}}{\rho}$$ </p>

Przyjmując przybliżenie "suchej wody" opuśliliśmy ostatni wyraz, pomijając przez to zjawiska **lepkie**. Czyniliśmy też dodatkowe założenie, uznając ciecz za nieściśliwą; wówczas mieliśmy dodatkowe równianie

<p align="center">$$\nabla\cdot\nu=0$$</p>

To ostatnie założenie jest całkiem dobre, szczególnie gdy prędkość przepływu jest dużo mniejsza niż prędkość dźwięku. Z drugiej strony w cieczy rzeczywistej praktycznie nigdy nie można pominąć tarcia wewnętrznego, zwanego lepkością; większość ciekawych zjawisk dotyczących przepływu jest w jakiś sposób związana z lepkością.  
Po przeprowadzeniu wielu eksperymentów dotyczących przepływów, okazało się, że we wszystkich przypadkach *prędkość ciecz na powierzni ciała stałego jest dokładnie równa zeru*. Należy więc przyjąć, że we wszystkich zwykłych cieczach drobiny będące w bezpośrednim sąsiedztwie ciała stałego mają prędkość względem powierzchni równą zeru. W poprzednio przyjętej przez nas charakterystyce moglibyśmy założyć, że jeżeli do cieczy przyłożymy naprężenie ścinające - nawet jak najmniejsze - to ustąpi ona pod tym naciskiem i zacznie płynąć. W sytuacji statycznej faktycznie nie ma naprężeń ścinania, ale zanim zostanie ona osiągnięta (czyli dopóki działają siły powodujące ruch cieczy) mogą występować siły ścinające. *Lekość* opisuje właśnie te siły ścinania, które istnieją w poruszającej się cieczy.  
Przypuśćmy, że mamy dwie płaskie płytki, zrobione z jakiegoś ciała stałego, a pomiędzy nimi wodę i że jedną z tych płytek utrzymujemy w spoczynku, podczas gdy drugą przesuwamy równolegle do niej z niewielką prędkością $$v_0$$. Jeżeli zmierzymy siłę, jaka jest potrzebna do potrzebna do podtrzymania ruchu górnej płytki, to przekonamy się, że siła ta jest proporcjonalna do pola powierzchni płytki i do stosunku $$v_0/d$$, gdzie $$d$$ jest odległością pomiędzy płytkami. A zatem naprężenie ścinania, $$F/A$$, jest proporcjonalne do $$v_0/d$$:  
<p align="center">$$\frac{F}{A}=\eta\frac{v_0}{d}$$</p>

Stałą proporcjonalności $$\eta$$ nazwywamy **współczynnikiem lepkości**.   
Jeżeli mamy jakąś bardziej złożoną sytuację, to zawsze można rozważyć małą, płaską i prostokątną "komórkę" w wodzie, o ściankach równoległych do przepływu. Siła ścinania dana działająca na tę komórkę jest dana przez

<p align="center">$$\frac{\Delta F}{\Delta A}=\eta\frac{\Delta v_x}{\Delta y}=\eta\frac{\partial v_x}{\partial y}$$</p>

Pochodna $$\textstyle\partial v_x / \partial y$$ jest *szybkością zmian* odkształcenia ścinania, tak więc dla cieczy naprężenie ścinania jest proporcjonalne do szybkości zmian odkształcenia ścinania. W przypadku ogólnym piszemy

<p align="center">$$S_{xy}=\eta(\frac{\partial v_y}{\partial x}+\frac{\partial v_x}{\partial y})$$</p>

***  

Skoro mamy już pewne pojęcie na temat tego, czym jest lepkość, chcielibyśmy określić siłę lepkości na jednostkę objętości $$\textstyle f_{lepk}$$, abyśmy mogli wstawić ją do równania wyjściowego i otrzymać równanie ruchu cieczy rzeczywistej. Siła, jaka działa na mały, sześcienny element cieczy, dana jest wypadkową sił działających na wszystkie sześć ścianek. Biorąc dwie z tych sił jednocześnie, otrzymamy ich różnice, które zależą od pochodnych naprężeń, więc od drugich pochodnych prędkości. Prowadzi nas to z powrotem do równania wektorowego. Składowa siły lepkości na jednostkę objętości w kierunku współrzędnej prostokątnej $$x_i$$ wynosi

<p align="center">$$(f_{lepk})_i =\sum\limits_{j=1}^3 \frac{\partial S_{ij}}{\partial x_j}=\eta\sum\limits_{j=1}^3 \frac{\partial}{\partial x_j}[\eta(\frac{\partial v_i}{\partial x_j}+\frac{\partial v_j}{\partial x_i})]$$</p>

Zmiana współczynników lepkości wraz z położeniem zwykle nie jest znaczna i można ją pominąć. Wówczas siła lepkości na jednostkę objętości zawiera tylko drugie pochodne prędkości. Otrzymujemy:

<p align="ceter">$$f_{lepk}=\eta\nabla^2\nu$$</p>

Wstawiając to do naszego równania wyjściowego otrzymujemy

<p align="center">$$\rho[\frac{\partial \nu}{\partial t}+(\nu\cdot\nabla)\nu]=-\nabla p-\rho\nabla\varphi+\eta\nabla^2\nu$$</p>

Jeżeli wprowadzimy, tak jak poprzednio, przepis na wirowość $$\textstyle\zeta=\nabla\times\nu$$, to nasze rówanie ostatecznie przybierze postać **stacjonarnego równania Naviera-Stokesa**  

<p align="center">$$\frac{\partial\zeta}{\partial t}+\nabla\times(\zeta\times\nu)=\frac{\eta}{\rho}\nabla^2\zeta$$</p>

Co ciekawe, jeżeli pominiemy wyraz $$\textstyle\nabla\times(\zeta\times\nu)$$, to otrzymamy **rówanie dyfuzji**.
***
Jeżeli chcielibyśmy teraz zastosować nasz wzór do realnego zgadnienia (typu przepływ nieściśliwy wokół walca o średnicy $$\textstyle L$$ i stałej prędkości $$\textstyle V$$ na dużych odległściach), nasz wzór przybrałby postać

<p align="center">$$\frac{\partial\zeta}{\partial t}+\nabla\times(\zeta\times\nu)=\frac{\eta}{\rho VL}\nabla^2\zeta$$</p>

Wszystkie stałe możemy zebrać w jeden czynnik, który nazywamy **liczbą Reynoldsa**:

<p align="center">$$\operatorname{Re}=\frac{\rho}{\eta}VL$$</p>

Tak więc nasz wzór ostatecznie:

<p align="center">$$\frac{\partial\zeta}{\partial t}+\nabla\times(\zeta\times\nu)=\frac{1}{\operatorname{Re}}\nabla^2\zeta$$</p>

Dla każdych dwóch sytuacji, które mają tę samą liczbę Reynoldsa, przpeływy będą wyglądać tak samo. Jest to podstawowe twierdzenie, ponieważ z niego wynika, że można określić, jak powietrze będzie opływało skrzydło samolotu, nie potrzebując budować tego samolotu i wypróbowywać go. Zamiast tego można zbudować model samolotu i zrobić pomiary przy prędkości, która daje tę samą liczbę Reynoldsa. Pamiętamy jednak, że możemy tak zrobić tylko przy założeniu, że ściśliwość można pominąć. W przeciwnym wypadku pojawia się nowa wielkość - prędkość dźwięku, a różne sytuacje będą odpowiadać sobie tylko wtedy, gdy stosunek $$V$$ do prędkości dźwięku będzie jednakowy.  
Liczba ta pozwala również określić stateczność ruchu płynu. Dla pewnych niskich wartości przepływ jest **laminarny (bezwirowy)**. Po jej zwiększeniu dochodzimy do **przepływu  przejściowego (częściowo turbulentnego)**. Dla dużych wartości mamy **przepływ turbulentny (burzliwy)**. Wartości te oczywiście różnią się zarówno dla typów cieczy, jak i układów w którym ciecze się znajdują.
***