print("Welcome")
withdraw=int(input("Enters the amount to withdraw:"))
fivehun=int(withdraw/500)
k=withdraw-fivehun*500
twohun=int(k/200)
l=k-twohun*200
onehun=int(l/100)
if (withdraw%100==0):
    print("Withdrawl Successful! You will receive:\n₹500 notes:",fivehun)
    print("₹200 notes:",twohun,"\n₹100 notes:",onehun)
else:
    print("Invalid amount! Please enter a multiple of 100.")    