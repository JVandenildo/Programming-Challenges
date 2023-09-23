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
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    std::cout << QuadraticRoot(a, b, c) << ".\n";

    return 0;
}*/