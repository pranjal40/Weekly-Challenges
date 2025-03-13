num=int(input("Enter a number:"))
k=0
while 1<k<10:
    m=num%10
    k=k+m
    num=num/10
if (k==1):
    print(int(k),"is a magic number")
else :
    print(int(k),"is not a magic")