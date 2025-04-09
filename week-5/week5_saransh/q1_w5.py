#Problem 1: Special Number
'''Write a program that takes user input for a number and checks if the input number is a special number or not.
A special number is a number which is equal to the sum of factorials of its individual digits.
(145 is a special number because 1! + 4! + 5! = 145)

Examples:

Example 1:
Enter a number: 243
243 is not a special number.

Example 2:
Enter a number: 145
145 is a special number. '''
def fact(n):
    if n == 0 :
        return 1
    else:
        return n*fact(n-1)
    
num = int(input("enter a number"))
p = num
q = num
sum =0
while (q>=1):
    p = q%10
    q = q//10
    
    sum+= fact(p)
if sum == num:
    print(f"{num} is a magic number")
else:
    print(f"since {num} is not equal to {sum} it is not a magic number ")