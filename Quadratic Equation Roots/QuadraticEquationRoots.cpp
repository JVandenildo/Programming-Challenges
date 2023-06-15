#include <iostream>
#include <math.h>
using namespace std;

int QuadraticRoot(double a, double b, double c)
{
    double discriminant = pow(b, 2) - (4 * a * c);
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    // double x2 = (-b - sqrt(discriminant))/(2*a);

    return x1;
}

/*int main()
{
    double a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << QuadraticRoot(a, b, c) << ".\n";

    return 0;
}*/