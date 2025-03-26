sen=str(input("Enter a string:"))
len=len(sen)
print("Words:")
for i in range(len):
    if(sen[i]==" "):
        print("\n",end="")
    else:
        print(sen[i],end="")
    