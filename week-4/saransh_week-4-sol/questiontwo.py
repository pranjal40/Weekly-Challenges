a = int(input("Enter the amount to withdraw (multiples of 100): "))

if a % 100 != 0:
    print("Invalid amount! Please enter a multiple of 100.")
    exit()

i = j = k = 0  

while a >= 500:
    i += 1
    a -= 500

while a >= 200:
    j += 1
    a -= 200

while a >= 100:
    k += 1
    a -= 100

print("Withdrawal Successful! You will receive:")
print("₹500 notes:", i)
print("₹200 notes:", j)
print("₹100 notes:", k)