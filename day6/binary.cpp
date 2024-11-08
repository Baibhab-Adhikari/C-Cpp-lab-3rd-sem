#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    Complex(float r = 0, float i = 0) : real(r), imaginary(i) {}

    Complex operator+(const Complex &other) const
    {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() const
    {
        cout << real << " + " << imaginary << "j" << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 3.5);

    Complex c3 = c1 + c2;

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    cout << "c1 + c2 = ";
    c3.display();

    return 0;
}
