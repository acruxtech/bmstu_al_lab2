#include <iostream>


long long int product_of_range(int start, int end) {
    long long int product = 1;
    for (int i = start; i <= end; i++) {
        product *= i;
    }
    return product;
}


int main() {
    std::cout << "Первый пункт: " << product_of_range(8, 15) << std::endl;

    int a { 0 };
    int b { 0 };

    std::cout << "\nВведите а (для второго пункта): ";
    std::cin >> a;
    std::cout << product_of_range(a, 20);

    std::cout << "\nВведите b (для третьего пункта): ";
    std::cin >> b;
    std::cout << product_of_range(1, b);

    std::cout << "\nВведите a и b (для четвертого пункта): ";
    std::cin >> a >> b;
    std::cout << product_of_range(a, b) << std::endl;

}