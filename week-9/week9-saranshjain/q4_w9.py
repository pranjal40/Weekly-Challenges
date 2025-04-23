'''Write a program that takes user input for the height(must be an odd number from 3 to 99) of a horizontal hourglass and prints the desired pattern of stars.

Example:
Enter the desired height of hourglass: 7

Output:
*      *
**    **
***  ***
********
***  ***
**    **
*      *'''
num = int(input("Enter an odd number: "))

if num % 2 == 0:
    raise ValueError("The number is not odd!")
else:
    print("The number is odd")
    
for i in range(num - num//2):
    for j in range (i):
        print('*',end = '')
    for j in range (num-2*i):
        print(' ',end = '')
    for j in range(i):
        print('*',end = '')
    print('\n')
for i in range(num - num//2,0,-1):
    for j in range (i):
        print('*',end = '')
    for j in range (num-2*i):
        print(' ',end = '')
    for j in range(i):
        print('*',end = '')
    print('\n')


    

    

