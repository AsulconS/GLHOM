#include <iostream>

#include "../include/glhom.hpp"

int main()
{
    hom::Vec3 u = {4, 8, 10};
    hom::Vec3 v = {3, 2, 1};

    hom::Vec3 r = u + v;
    hom::Vec3 s = -r;
    float jeje = -s * s;

    std::cout << '[' << u.x << ' ' << u.y << ' ' << u.z << ']' << std::endl;
    std::cout << '[' << v.r << ' ' << v.g << ' ' << v.b << ']' << std::endl;
    std::cout << '[' << r.s << ' ' << r.t << ' ' << r.p << ']' << std::endl;
    std::cout << '[' << s.x << ' ' << s.g << ' ' << s.p << ']' << std::endl;
    std::cout << "PP = " << (jeje) << std::endl;

    return 0;
}
