#include <iostream>

template <typename T>
void swaps(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Testing swaps with different data types

    // int
    int x = 5, y = 10;
    swaps(x, y);
    std::cout << "Swapped integers: x = " << x << ", y = " << y << std::endl;

    // float
    float p = 3.14, q = 2.71;
    swaps(p, q);
    std::cout << "Swapped floats: p = " << p << ", q = " << q << std::endl;

    // char
    char c1 = 'A', c2 = 'B';
    swaps(c1, c2);
    std::cout << "Swapped chars: c1 = " << c1 << ", c2 = " << c2 << std::endl;

    // double
    double d1 = 1.234, d2 = 5.678;
    swaps(d1, d2);
    std::cout << "Swapped doubles: d1 = " << d1 << ", d2 = " << d2 << std::endl;

    return 0;
}

