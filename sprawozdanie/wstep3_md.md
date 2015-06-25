## Metoda różnic skończonych i numeryczna implementacja RNS
**Współczynnik lepkości oznaczamy $$\eta$$ albo $$\mu$$.**
***
Metoda różnic skończonych jest jedną z najstarszych metod numerycznych. Metoda ta bazuje na przekształcaniu pochodnych cząstkowych w równania różnic cząstkowych, opisujące proces fizyczny za pomocą równań algebraicznych, innymi słowy przybliża pochodne funkcji poprzez różnice w zdyskretyzowanej przestrzeni. Można ją wyprowadzić bezpośrednio z ilorazu różnicowego, albo rozwinięć w szereg Taylora.  
Przykład: pochodna centralna drugiego rzędu $$\textstyle\partial^2 f / \partial x^2$$:  

Rozwinięcie prawostronne:  
<p align="center">$$f(x_0+h)=f(x_0)+f^\prime(x_0)h+f^{(2)}(x_0)\frac{h^2}{2}$$</p>

Rozwinięcie lewostronne:
<p align="center">$$f(x_0-h)=f(x_0)-f^\prime(x_0)h+f^{(2)}(x_0)\frac{h^2}{2}$$</p>

Po dodaniu stronami:

<p align="center">$$f(x_0+h)+f(x_0-h)=2f(x_0)+f^{(2)}(x_0)h^2$$</p>

Stąd wyprowadzamy $$\textstyle f^{(2)}(x_0)$$:

<p align="center">$$f^{(2)}(x_0) = \frac{f(x_0+h)+f(x_0-h)-2f(x_0)}{h^2}$$</p>

I to wszytsko. Jak widać, metoda ta jest dość prosta, a jednocześnie przydatna do poruszania przybliżania wartości w jednorodnej siatce o kroku $$h$$.
***
Chcielibyśmy rozwiązać rówanie Naviera-Stokesa numerycznie. Oczywiście, przy obecnej jego postaci wiele nie zdziałamy:

<p align="center">$$\frac{\eta}{\rho}\nabla^2\zeta=\frac{\partial\zeta}{\partial t}+\nabla\times(\zeta\times\nu)$$</p>

Interesuje nas przepływ bezwirowy, eliminujemy więc czynnik $$\textstyle \frac{\partial\zeta}{\partial t}$$. Ponad to użyjemy **równania Laplace'a**:

<p align="center">$$\nabla\times\nu=\zeta=\nabla^2\psi=\frac{\partial v}{\partial x}-\frac{\partial u}{\partial y}=0$$</p>

Gdzie $$\textstyle u$$ jest składową poziomą prędkości a $$\textstyle v$$ jest składową pionową prędkości, zaś funkcję $$\psi$$ nazywamy **funkcją przepływu**.  
Idąc dalej, mnożymy równanie obustronnie przez $$\rho$$ i wstawiamy wyprowadzone wartości:

<p align="center">$$\eta\nabla^2\zeta=\rho(\frac{\partial\psi}{\partial y}\frac{\partial\zeta}{\partial x}-\frac{\partial\psi}{\partial x}\frac{\partial\zeta}{\partial y})$$</p>

Mając to równanie, oraz wiedząc, że:

<p align="center">$$\zeta=\nabla^2\psi$$</p>
<p align="center">$$u(x,y)=\frac{\partial \psi(x,y)}{\partial y}, v(x,y)=-\frac{\partial \psi(x,y)}{\partial x}$$</p>

Jedyne czego nam brakuje to metody przybliżania wartości - z metody różnic skończonych - oraz ogólnego przepisu relaksacyjnego (obrazki pochodzą z wykładu Profesora B. Szafrana):

***