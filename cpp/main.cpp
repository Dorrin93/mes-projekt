#include "vi_flow.hpp"

// vorticity function
double vor(double x, double y){ return -0.5 * (2 * y); }

// flux function
double flu(double x, double y){ return -0.5 * ((y*y*y)/3. - y*0.5*0.5); }

int main(){
    std::ofstream file;

    imn::Point a,b,c,d;
    a = {-0.1, -0.5};
    b = {0.1, -0.5};
    c = {-0.1, 0};
    d = {0.1, 0};
    imn::Wall w1, w2, w3,w4;
    w1 = {a, c, imn::Wall::LEFT};
    w2 = {b, d, imn::Wall::RIGHT};
    w3 = {c, d, imn::Wall::UP};
    w4 = {a, b, imn::Wall::DOWN};
    std::vector<imn::Wall*> walls = {&w1, &w2, &w3, &w4};
    imn::ns_obstacle(-1, 2, -0.5, 0.5, 0.01, 0.01, flu, vor, walls, file);

    return 0;
}
