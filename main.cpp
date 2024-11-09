#include <iostream>

long sumSilnia(int amount) {
    long wynik = 1;

    for (int i = 1; i <= amount; i++) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> n;

    std::cout << "Silnia " << n << "! = " << sumSilnia(n) << std::endl;

    return 0;
}