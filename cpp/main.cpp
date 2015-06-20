#include "vi_flow.hpp"

double mi = 1.; // viscosity factor
double Q = -20; // pressure gradient

// vorticity function
double vor(double x, double y){ return (Q/(2.*mi)) * (2 * y); }

// flux function
double flu(double x, double y){ return (Q/(2.*mi)) * ((y*y*y)/3. - y); }

int main(){
    std::ofstream file;

    imn::Point a,b,c,d;
    a = {2.3, -1};
    b = {2.7, -1};
    c = {2.3, 0.0};
    d = {2.7, 0.0};
    imn::Wall w1, w2, w3,w4;
    w1 = {a, c, imn::Wall::LEFT};
    w2 = {b, d, imn::Wall::RIGHT};
    w3 = {c, d, imn::Wall::UP};
    w4 = {a, b, imn::Wall::DOWN};
    std::vector<imn::Wall*> walls = {&w1, &w2, &w3, &w4};
    imn::ns_obstacle(0, 10, -1, 1, 0.01, 0.01, flu, vor, walls, file, 1e-7, 2100);

    return 0;
}
