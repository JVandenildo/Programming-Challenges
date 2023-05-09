def DiscountFinder(OgPrice, discount):
    return OgPrice * ((100 - discount)/100)

OgPrice = float(input("Original price: "))
Discount = float(input("Discount: "))

print(f'Discounted price: {DiscountFinder(OgPrice, Discount)}.')