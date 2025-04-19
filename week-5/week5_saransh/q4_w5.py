n = int(input("enter the number"))
for i in range (n):
    for k in range (n-i):
        print(" ",end="")
    for j in range (2*i-1):
        print("#", end = "")
    print("")