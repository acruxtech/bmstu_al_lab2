#include <iostream>


int main() {
    int x { 0 };
    int y { 0 };
    int z { 0 };

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    if (x % 2 == 1 && y % 2 == 1) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;

    if ((x < 20 && y >= 20) || (x >= 20 && y < 20)) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;

    if (x == 0 || y == 0) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;

    if (x < 0 && y < 0 && z < 0) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;

    if (int(x % 5 == 0) + int(y % 5 == 0) + int(z % 5 == 0) == 1) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;

    if (x > 100 || y > 100 || z > 100) std::cout << "condition is true" << std::endl;
    else std::cout << "condition is false" << std::endl;

    return 0;
}