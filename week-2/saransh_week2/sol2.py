i = str(input("enter the string: "))
p = 0
for j in i:
    if j == ' ':
        p = p + 1
print("number of spaces in the string:", p)