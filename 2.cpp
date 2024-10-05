#include <iostream>
#include <cmath>


int main() {
    using byte = unsigned char;

    int a { 1 };
    int b { 2 };
    int c { 3 };
    int d { 4 };

    std::pair<byte, byte> positionA(a, b);
    std::pair<byte, byte> positionB(c, d);

    // На поле positionA расположена ладья. Условие, при котором она угрожает полю positionB
    if (positionA.first == positionB.first || positionA.second == positionB.second) std::cout << "Ладья угрожает" << std::endl;
    else std::cout << "Ладья не угрожает" << std::endl;

    // На поле positionA расположен слон. Условие, при котором он угрожает полю positionB
    if (positionA.first - positionA.second == positionB.first - positionB.second) std::cout << "Слон угрожает" << std::endl;
    else std::cout << "Слон не угрожает" << std::endl;

    // На поле positionA расположен король. Условие, при котором он может одним ходом попасть на поле positionB
    if (
        std::abs(positionA.first - positionB.first) <= 1 && 
        std::abs(positionB.first - positionB.second) <= 1
    ) std::cout << "Король может" << std::endl;
    else std::cout << "Король не может" << std::endl;

    // На поле positionA расположен ферзь. Записать условие, при котором он угрожает полю positionB
    if (
        (positionA.first == positionB.first || positionA.second == positionB.second) ||
        (positionA.first - positionA.second == positionB.first - positionB.second)
    ) std::cout << "Ферзь угрожает" << std::endl;
    else std::cout << "Ферзь не угрожает" << std::endl;

    // На поле positionA расположена белая пешка. Условие, при котором она может одним ходом попасть на поле positionB 
    if (
        (positionB.second - positionA.second <= 2 && positionA.first == positionB.first) ||
        (std::abs(positionB.first - positionA.first) == 1 && positionB.second - positionA.second == 1)
    ) std::cout << "Пешка может попасть" << std::endl;
    else std::cout << "Пешка не может попасть" << std::endl;

    return 0;
}