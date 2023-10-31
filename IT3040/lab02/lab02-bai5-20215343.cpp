#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 

using namespace std;

struct Complex {
    double real;
    double imag;
};
/*
Nguyen Duy Dat - 20215343
*/
Complex operator + (Complex a, Complex b) { // Toán tử + cho phép cộng 2 số phức
    return {a.real + b.real, a.imag + b.imag};
}

Complex operator - (Complex a, Complex b) { // Toán tử - cho phép trừ 2 số phức
    return {a.real - b.real, a.imag - b.imag};
}

Complex operator * (Complex a, Complex b) { // Toán tử * cho phép nhân 2 số phức
    return {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
}

Complex operator / (Complex a, Complex b) { // Toán tử / cho phép chia 2 số phức
    return {(a.real * b.real + a.imag * b.imag) / (b.real * b.real + b.imag * b.imag), (a.imag * b.real - a.real * b.imag) / (b.real * b.real + b.imag * b.imag)};
}

ostream& operator << (ostream& out, const Complex &a) { // Toán tử << cho phép in số phức ra màn hình
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;
    /*
    Nguyen Duy Dat - 20215343
    */
    Complex a{real_a, img_a};
    Complex b{real_b, img_b};
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}