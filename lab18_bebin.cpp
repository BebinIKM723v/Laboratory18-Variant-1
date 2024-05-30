#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    Complex& operator=(const Complex& other) {
        if (this == &other) return *this;
        real = other.real;
        imag = other.imag;
        return *this;
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    bool operator==(const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }

    bool operator<(const Complex& other) const {
        return (real < other.real) || (real == other.real && imag < other.imag);
    }

    bool operator>(const Complex& other) const {
        return (real > other.real) || (real == other.real && imag > other.imag);
    }

    void print() const {
        std::cout << "(" << real << ", " << imag << "i)" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Ukrainian");
    Complex a(3.0, 4.0);
    Complex b(1.0, 2.0);

    Complex c = a - b;
    c.print(); 

    if (a == b) {
        std::cout << "a дорiвнює b" << std::endl;
    }
    else {
        std::cout << "a не дорiвнює b" << std::endl;
    }

    if (a < b) {
        std::cout << "a менше за b" << std::endl;
    }
    else {
        std::cout << "a не менше за b" << std::endl;
    }

    if (a > b) {
        std::cout << "a бiльше за b" << std::endl;
    }
    else {
        std::cout << "a не бiльше за b" << std::endl;
    }

    Complex d;
    d = a;
    d.print();

    return 0;
}
