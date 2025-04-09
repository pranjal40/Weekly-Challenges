'''Write a program that takes input of a 
number in Roman Number System and prints it in 
Decimal Number System as a natural number.
'''
r = input('enter roman number')
total = 0

roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
valid = {'I', 'V', 'X', 'L', 'C', 'D', 'M'}
lst = []
for i in r:
    if i not in valid:
        raise ValueError(f"invalid input")
for i in range(len(r)):
    current = roman[r[i]]
    if i + 1 < len(r) and roman[r[i]] < roman[r[i + 1]]:
        total -= current
    else:
        total += current
print(total)

    
