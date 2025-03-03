print("Welcome Everybody\nWhat would you like to order\n1.pizza=150\n2.burger=80\n3.Hotdog=50")
print("If you order more than 200 rupees than 10% discount avail in total amount")
pizza=150
burger=80
hotdog=50
k=int(input("Press the key to order:"))
if(k==1):
    order=int(input("How many pizza you want to buy?"))
    total=order*pizza
    if(total<200):
        print("Total Amount:",total)
    else:
        print("Total Amount:",total*0.9)    
elif(k==2):
    order=int(input("How many burger you want to buy?"))
    total=order*burger
    if(total<200):
        print("Total Amount:",total)
    else:
        print("Total Amount:",total*0.9)
elif(k==3):
    order=int(input("How many hotdog you want to buy?"))
    total=order*hotdog
    if(total<200):
        print("Total Amount:",total)
    else:
        print("Total Amount:",total*0.9)    
else:
    print("Wrong Input") 
print("ThankYou for Visiting Us")           