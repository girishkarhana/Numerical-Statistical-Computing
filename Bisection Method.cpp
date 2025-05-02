#include<iostream>
#include<cmath>
using namespace std;

double equ(double x) {
    return x*x*x*x - x - 10;
}

int main() {
    double a, b, xr, xi, fa, fb, fx, p;
    cout << "Enter the first initial point (a): ";
    cin >> a;
    cout << "Enter the second initial point (b): ";
    cin >> b;
    cout << "Decimal place: ";
    cin >> p;

    cout << "Initial points: a = " << a << ", b = " << b << endl;

    for(int i = 0; i <= 10; i++) {
        fa = round(equ(a) * pow(10, p)) / pow(10, p);
        fb = round(equ(b) * pow(10, p)) / pow(10, p);

        xr = (a + b) / 2;
        xi = round(xr * pow(10, p)) / pow(10, p);
        fx = round(equ(xi) * pow(10, p)) / pow(10, p);

        cout << "Iteration " << i + 1 << " : xi = " << xi
             << "  a = " << a << ", b = " << b
             << "  f(a) = " << fa << ", f(b) = " << fb << ", f(xi) = " << fx << endl;

        if (fa * fx < 0) {
            b = xi;
        } else {
            a = xi;
        }
    }

    return 0;
}
