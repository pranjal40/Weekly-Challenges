a = int(input("enter number :"))
p = a 
s = 0
while (p>=1):
    s += p%10
    p = p//10
print(s)
    