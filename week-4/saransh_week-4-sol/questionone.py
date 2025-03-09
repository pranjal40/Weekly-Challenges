pizza  = int(150)
burger = int(80)
hotdog = int(50)
i = int(input("Enter "))
q = int(input('Enter quantity'))
if i == 1:
    total = pizza * q
    print("Total price is ", total)
elif i == 2:
    total = burger * q
    print("Total price is ", total)
elif i == 3:
    total = hotdog * q
    print("Total price is ", total)
else:
    print("Invalid input")
    total = 0
    
if total > 200:
    print("You got 10% discount")
    print("Total price after discount is ", total - total * 0.1)        