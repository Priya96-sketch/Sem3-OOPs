#include <iostream>
using namespace std;

class Complex {
    public:
   float real;
    float imag;
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    //Operator overoading
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    
    Complex operator - (const Complex& obj1) {
        Complex temp1;
        temp1.real = real -  obj1.real;
        temp1.imag = imag - obj1.imag;
        return temp1;
    }
    Complex operator * (const Complex& obj) {
        Complex temp2;
        temp2.real = real * obj.real;
        temp2.imag = imag * obj.imag;
        return temp2;
    }
    
    
     void output() {
    
            cout << "Output Complex number: " << real << "+" << imag << "i"<<endl;
    }
};

int main() {
    Complex complex1, complex2, r1,r2,r3;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

    r1 = complex1 + complex2;
    r2 = complex1 - complex2;
    r3 = complex1 * complex2;
    r1.output();
    r2.output();
    r3.output();
    
    return 0;
}
