#include "Perlin3D.hpp"
#include <iostream>

int main() {
    Perlin3D::IMAGETEST();
    std::cout << Perlin3D::generatePerlin(3 * 0.01, 5 * 0.01, 3.1 * 0.01) << std::endl;
}
