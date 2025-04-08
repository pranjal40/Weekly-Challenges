'''Problem 1: Decimal to Binary
Write a program that takes user input for a number and prints its binary equivalent. 
Google to know how we convert a number from decimal number system to binary number system and then make a code out of it on your device. 
DONT SEARCH UP OR LOOK AT THE ACTUAL CODE FOR THIS.

Examples:

Example 1:
Enter a number: 11
Binary equivalent of 11 is 1011.

Example 2:
Enter a number: 26
Binary equivalent of 26 is 11010.'''
n= int(input("enter number here :"))
p = str(n%2)
q = n//2
while (q>0):
    
    p += str(q%2)
    q = q//2
    
p = p[::-1]
print(p)

    




