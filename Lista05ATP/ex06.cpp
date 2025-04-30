#include <iostream>

bool ehPalindromo(int num) {
    if (num < 0) {
        return false; // Números negativos não são palíndromos
    }

    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        num /= 10;
    }

    return reversedNum == originalNum;
}

int main() {
    int num;
    std::cout << "Digite um número: ";
    std::cin >> num;

    if (ehPalindromo(num)) {
        std::cout << num << " é um palíndromo." << std::endl;
    } else {
        std::cout << num << " não é um palíndromo." << std::endl;
    }

    return 0;
}