# Celsius to Fahrenheit Converter

# You are making a Celsius to Fahrenheit converter
# Write a function to take the Celsius value as an argument
# and return the corresponding Fahrenheit value

# Fahrenheit =  9/5 * celsius + 32

celsius = int(input("Celsius:"))


def conv(celsius):
    return (9/5) * celsius + 32


fahrenheit = conv(celsius)
print(fahrenheit)
