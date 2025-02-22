a = int(input("enter the first number: "))
r = int(input("enter the common ratio : "))
n = int(input("enter the number of termas to be printed : "))
n1 = int(input("enter the number of terms to be summed : "))
temp = a
for i in range(n):
    print(temp)
    temp *= r
sum = 0
for i in range(n1):
    sum += a
    a *= r
print ("sum upto nth term", sum)
