'''Problem 4: Pattern Printer

Write a program that takes user input for the height of a pyramid and prints the desired pyramid of numbers.

Example 1:
Enter the desired height of pyramid: 4
                1
            2 3 4
         5 6 7 8 9
10 11 12 13 14 15 16

Example 2:
Enter the desired height of pyramid: 3
            1
        2 3 4
     5 6 7 8 9 
'''
n = int(input('enter number of rows'))

for i in range (n):
    for j in range (n-i):
        print(' ',end = "")
    for k in range ((2*i) + 1):
        print((i*i)+k+1,end = "")
    print("\n")

    

