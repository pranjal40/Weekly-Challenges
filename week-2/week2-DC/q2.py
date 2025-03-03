sen=str(input("Enter the string:"))
len=len(sen)
count=0
for i in range(len):
    if (sen[i]==" "):
        count+=1
print("Number of spaces in the string:",count)        