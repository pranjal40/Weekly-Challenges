first_term=int(input("Enter the first term:"))
common_ratio=int(input("Enter the common ratio:"))
n=int(input("Enter the number of terms to be printed:"))#n=no.of terms of series
k=int(input("Enter the number of terms to be summed up:"))#k=no.of terms to sum
a=first_term
r=common_ratio
value=a
gp=[a]
print("GP:",a)
for i in range(n-1):
    value*=r
    print(value)
    gp.append(value)
sum=0
for i in range(k):
    sum+=gp[i]
print("Sum upto",k,"th term:",sum)    