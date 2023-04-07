nth_term = int(input("Last number: "))
n1 = int(input("1st term: "))
n2 = int(input("2nd term: "))
n3, ns = 0, 0

if n1 % 2 == 0:
    ns = ns + n1
if n2 % 2 == 0:
    ns = ns + n2

while n3 < nth_term:
    n3 = n1 + n2
    n1 = n2
    n2 = n3

    if n3 % 2 == 0:
        ns = ns + n3

print(f'Sum is: {ns}.')
