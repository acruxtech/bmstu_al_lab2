#include <iostream>


void print_multiplication_table(int n) {
    for (int i = 1; i < 10; i++) {
        std::cout << i << " x " << n << " = " << i * n << std::endl;
    }
}


int main() {
    print_multiplication_table(7);

    int n { 0 };
    std::cout << "\nВведите N: ";
    std::cin >> n;

    print_multiplication_table(n);
}