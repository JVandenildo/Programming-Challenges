#include <iostream>
using namespace std;

double DiscountFinder(double OgPrice, double discount)
{
    return OgPrice * ((100 - discount) / 100);
}

/*int main()
{
    double OgPrice, discount;
    cout << "Original price: ";
    cin >> OgPrice;
    cout << "Discount: ";
    cin >> discount;

    cout << "Discounted price: " << DiscountFinder(OgPrice, discount) << ".\n";

    return 0;
}*/