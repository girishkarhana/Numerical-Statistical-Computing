#include<iostream>
#include<cmath>
using namespace std;

double equ(double x) {
    return x*x*x*x - x - 10;
}

int main() {
    double xr, xi, fa, fb, fx, a, b, p;
    cout << "Enter the first initial point : ";
    cin >> a;
    cout << "Enter the second initial point : ";
    cin >> b;
    cout << "Decimal place : ";
    cin >> p;

    cout << "Initial points : " << a << ", " << b << endl;

    for(int i = 0; i <= 10; i++) {
        fa = round(equ(a) * pow(10, p)) / pow(10, p);
        fb = round(equ(b) * pow(10, p)) / pow(10, p);

        xr = b - fb * (b - a) / (fb - fa);
        xi = round(xr * pow(10, p)) / pow(10, p);
        fx = round(equ(xi) * pow(10, p)) / pow(10, p);

        cout << "Iteration " << i + 1 << " : " << xi
             << "  a = " << a << ", b = " << b
             << "  f(a) = " << fa << ", f(b) = " << fb << ", f(xi) = " << fx << endl;

        a = b;
        b = xi;
    }

    return 0;
}
