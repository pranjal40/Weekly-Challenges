sen=str(input("Enter a string:"))
len=len(sen)
for i in range(len):
    rev_sen[i]=sen[len-i-1]
print(rev_sen)