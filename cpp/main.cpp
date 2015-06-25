#include "vi_flow.hpp"

double mi = 1.; // viscosity factor
double Q = -20; // pressure gradient

// grid placement
double x_min = 0;
double x_max = 10;
double y_min = -1;
double y_max = 1;

// grid step
double dx = 0.01;
double dy = 0.01;

// obstackle placement
imn::Point a = {2.3, -1};
imn::Point b = {2.7, -1};
imn::Point c = {2.3, 0};
imn::Point d = {2.7, 0};

// vorticity function
double vor(double x, double y){ return (Q/(2.*mi)) * (2 * y - y_min - y_max); }

// flux function
double flu(double x, double y){ return (Q/(2.*mi)) * ((y*y*y)/3. - (y*y)*0.5*(y_min+y_max) + y_min*y_max*y); }

int main(){
    std::ofstream file;

    imn::Wall w1, w2, w3,w4;
    w1 = {a, c, imn::Wall::LEFT};
    w2 = {b, d, imn::Wall::RIGHT};
    w3 = {c, d, imn::Wall::UP};
    w4 = {a, b, imn::Wall::DOWN};
    std::vector<imn::Wall*> walls = {&w1, &w2, &w3, &w4};

    imn::ns_obstacle(x_min, x_max, y_min, y_max, dx, dy, flu, vor, walls, file, 1e-7, 2200);

    return 0;
}
