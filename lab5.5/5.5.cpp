#include <iostream>
#include <cmath>

double pow(double x, int n, int depth = 0) {
    std::cout << "Recursion depth: " << depth << ", calculating pow(" << x << ", " << n << ")\n";

    if (n == 0)
        return 1;
    else if (n < 0)
        return 1 / pow(x, abs(n), depth + 1);
    else
        return x * pow(x, n - 1, depth + 1);
}

int main() {
    double x;
    int n;

    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    double result = pow(x, n);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
