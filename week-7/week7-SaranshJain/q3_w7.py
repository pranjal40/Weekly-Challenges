'''Problem 3:  Sum Finder

Write a program that input of an array of 
numbers from the user and a number. The program prints the two numbers
 present in the array which add up to the number input by the user.
Assumptions:-
The array contains the two numbers whose sum results to the input number.
There exists only one such pair in the array whose sum equals the input number.
No two numbers are repeated in the array.
Set the array size of your choice(should be atleast 4).
Examples:
Example 1:
Enter an array of five numbers:-
2
3
4
5
8
Enter the number for which the sum is to be found: 9

Output:
4, 5

Example 2:
Enter an array of four numbers:-
9
5
13
11
12
Enter the number for which the sum is to be found: 25

Output:
12, 13
'''

arr = []
start = 0
end = 0

n = int(input("enter number of values you want to give"))
for i in range(0,n):
    print(f"enter {i+1} number")
    r = int(input())
    arr.append(r)
    r = 0
x = int (input('enter sum'))
for start in arr:
    for end in range(len(arr)-1,-1,-1):
        if start + arr[end] == x:
            print(start, arr[end])
        
    



