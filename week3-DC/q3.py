num=int(input("Enter a number:"))
x=0
y=0
while (y==0) :
    y=num%10
    x=x+y
    num=num/10
print("Sum:",x)