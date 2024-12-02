#include <iostream>
#include <cmath>

int recursionDepth = 0;
int maxRecursionDepth = 0;

double positivePower(double x, int n) {
    recursionDepth++;
    if (recursionDepth > maxRecursionDepth) {
        maxRecursionDepth = recursionDepth;
    }

    double result;
    if (n == 0) {
        result = 1;
    }
    else {
        result = x * positivePower(x, n - 1);
    }

    recursionDepth--;
    return result;
}

double power(double x, int n) {
    if (n < 0) {
        return 1 / positivePower(x, -n);
    }
    return positivePower(x, n);
}


int getMaxRecursionDepth() {
    return maxRecursionDepth;
}

int main() {
    double x;
    int n;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;

    double result = power(x, n);
    std::cout << "Result: " << result << std::endl;
    std::cout << "Max recursion depth: " << getMaxRecursionDepth() << std::endl;

    return 0;
}
