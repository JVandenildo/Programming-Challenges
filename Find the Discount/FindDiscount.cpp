#include <iostream>

double dis(double OgPrice, double discount)
{
    return OgPrice * ((100 - discount) / 100);
}

/*int main()
{
    double OgPrice, discount;
    std::cout << "Original price: ";
    std::cin >> OgPrice;
    std::cout << "Discount: ";
    std::cin >> discount;

    std::cout << "Discounted price: " << dis(OgPrice, discount) << ".\n";

    return 0;
}*/