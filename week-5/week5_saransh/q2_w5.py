'''Problem 2:Series show
Write a program that displays "n" number of terms of the following series where "n" is input by the user.

S = 2/7 - 5/11 + 8/15 - 11/19 + 14/23 - ...upto n terms

Examples:

Example 1:
Enter number of terms: 5

S = 2/7 - 5/11 + 8/15 - 11/19 + 14/23 


Example 2:
Enter number of terms: 7

S = 2/7 - 5/11 + 8/15 - 11/19 + 14/23 - 17/27 + 20/31 
'''
n = int(input("enter the number :"))
for i in range (n): 
    print ((((-1)**i)*(2)+(3*i))/(7+4*i), end = ",")
    
    
    
