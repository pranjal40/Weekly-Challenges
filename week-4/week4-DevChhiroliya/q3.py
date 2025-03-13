lower_bounding=int(input("Enter the lower bounding number:"))
upper_bounding=int(input("Enter the upper bounding number:"))
print("Prime numbers between",lower_bounding,"and",upper_bounding,"are:")
for i in range(lower_bounding,upper_bounding+1):
    if i>1:
        for j in range(2,i):
            if i%j==0:

                break
        else:
            print(i)