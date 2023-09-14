def dis(OgPrice, discount):
    return round(OgPrice * ((100 - discount) / 100), 2)


# using challenge's examples
print(dis(1500, 50))
print(dis(89, 20))
print(dis(100, 75))

# for testing other numbers
OgPrice = float(input("Original price: "))
Discount = float(input("Discount: "))

print(f"Discounted price: {dis(OgPrice, Discount)}.")
