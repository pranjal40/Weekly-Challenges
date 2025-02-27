num=int(input("Enter a number:"))
x=num
y=0
while (num!=0):
    z=num%10
    y=y*10+z
    num=num/10
if (x==y): 
    print("True")
else: 
    print("False")