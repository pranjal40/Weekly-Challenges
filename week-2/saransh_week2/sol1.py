i = int(input("enter the number of days afer the due date: "))
if i <= 7:
    fine =fine +(5 * i)
elif i > 7 :
    fine = 35 + 10 * (i - 7)
print("fine before penalty:", fine)
if fine > 100:
    fine = fine + (.1)*(fine)
print("fine after penalty",fine)