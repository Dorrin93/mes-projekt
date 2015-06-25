## Ciecz nielepka

Zajmiemy się teraz zagadnieniem tak zwanej *"suchej wody"* - cieczy nielepkiej. Jako że nie jest to główne interesujące nas zagadnienie, do tematu podejdziemy bardzo skrótowo. Gdy pomijamy lepkość należy pamiętać, że w takim wypadku opisujemy nieistniejący twór doskonały, nie rzeczywistą ciecz, jak chociażby wodę.  
Wróćmy do naszego równania wyjściowego, opuszczając wyraz zawierający $$f_{lepk}$$:

<p align="center">$$\frac{\partial \nu}{\partial t}+(\nu\cdot\nabla)\nu =-\frac{\nabla p}{\rho}-\nabla\varphi$$ </p>

Równaniu temu możemy nadać nieco inną postać, korzystając z następującej tożsamości analizy wektorowej:

<p align="center">$$(\nu\cdot\nabla)\nu=(\nabla\times\nu)\times\nu+\frac{1}{2}\nabla(\nu\cdot\nu)$$</p>

Jeżeli teraz zdefiniuje się nowe pole wektorowe $$\zeta$$ jako *rotację* $$\nu$$:

<p align="center">$$\zeta=\nabla\times\nu$$</p>

to tą tożsamość wektorową można zapisać w postaci

<p align="center">$$(\nu\cdot\nabla)\nu=\zeta\times\nu+\frac{1}{2}\nabla\nu^2$$</p>

i po wstawieniu do naszego równania wyjściowego przybierze ono postać

<p align="center">$$\frac{\partial\nu}{\partial t}+\zeta\times\nu+\frac{1}{2}\nabla\nu^2=-\frac{\nabla p}{\rho}-\nabla\varphi$$</p>

Oczywiście jest ono równoważne równaniu wyjściowemu. Pole wektorowe $$\zeta$$ nazywamy **wirowością**, lub gęstością wirów. Jeżeli jest ona wszędzie równa zero, to mówimy, że przepływ jest *bezwirowy*.  
Jeżeli interesuje nas jedynie pole prędkości, to można z naszych równań wyeliminować ciśnienie. Biorąc rotację po obu stronach ostatniego wyprowadzonego przez nas równania, oraz pamiętając, że gęstość $$\rho$$ jest stała i rotacja każdego gradientu jest równa zeru, a ponadto korzystając z wyprowadzonego przez nas wcześniej równania $$\nabla\cdot\nu=0$$ otrzymujemy:

<p align="center">$$\frac{\partial\zeta}{\partial t}+\nabla\times(\zeta\times\nu)=0  (1)$$</p>

Równanie to wraz z równaniami

<p align="center">$$\zeta=\nabla\times\nu  (2)$$</p>

<p align="center">$$\nabla\cdot\nu=0$$</p>

opisuje w zupełności pole prędkości $$\nu$$, czyli jeżeli znamy $$\zeta$$ w jakiejś chwili, to znamy rotację wektora prędkości, a ponieważ wiemy, że dywergencja wektora prędkości jest równa zeru, dla danej sytuacji fizycznej mamy już wszystko, co jest potrzebne do określenia prędkości $$\nu$$ w każdym punkcie. Następnie, gdy znamy już prędkość $$\nu$$, równanie $$(1)$$ wyznacza nam szybkość zmian $$\zeta$$, z której można dostać nową wirowość $$\zeta$$ dla chwili następnej. Korzystając z równania $$(2)$$ znajdujemy nową prędkość $$\nu$$ i tak dalej. Widać, że znajomość tych równań pozwala na rozwiązanie zagadnienia przepływu. Zauważmy jednak, że równania te dają jedynie pole prędkośći; straciliśmy całą informację dotyczącą ciśnienia.  
Zwróćmy uwagę na jeszcze jedną ważną konsekwencję tych równań. Jeżeli wszędzie i w każdej chwili $$t$$ wektor $$\zeta=0$$, to $$\partial\zeta / \partial t$$ także znika tak, że $$\zeta$$ w dalszym ciągu jest wszędzie równe zeru w chwili $$t+\Delta t$$. Mamy więc jedno rozwiązanie naszego równania: przepływ jest trwale bezwirowy. Jeżeli w takim przepływie na początku wirowość była równa zeru, to będzie ona równą zeru w dowolnej chwili w przyszłości. Równania jakie wtedy należy rozwiązać, sprowadzają się do następujących:

<p align="center">$$\nabla\cdot\nu=0, \nabla\times\nu=0$$</p>

Co ciekawe, są to równania analogiczne do równań pól elektrostatycznych lub magnetycznych w przestrzeni swobodnej. 
  
Moglibyśmy teraz przejść do definiowania równań numerycznych, jednak posuniemy się krok dalej - przejdziemy do równań zawierających w sobie lepkość.
***