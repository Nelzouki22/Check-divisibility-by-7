#include <iostream>

bool isDivisibleBy7(int N) {
    return (N % 7 == 0);
}

int main() {
    int N;

    std::cout << "Enter a number: ";
    std::cin >> N;

    if (isDivisibleBy7(N)) {
        std::cout << N << " is divisible by 7." << std::endl;
    }
    else {
        std::cout << N << " is not divisible by 7." << std::endl;
    }

    return 0;
}
