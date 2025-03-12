height=int(input("Enter the desired height:"))
for i in range(height+1):
    for j in range(height+1):
        if (j>=4-i):
            print("*",end="")
        else:
            print(" ",end="")
    print("\n",end="")