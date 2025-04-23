'''Problem 3: Kaprekar Number
Write a program that takes input of a number from the user and checks if the input number is a Kaprekar number. To check for a Kaprekar number:

Calculate the square of the number.
Split the square into two equal halves, if the square has even number of digits. If the square has odd number of digits, give the number on the right one extra digit.
Calculate the sum of the two halves.
If the sum of the two halves is equal to the input number, it is a Kaprekar number.

Examples:
Example 1:
Enter a number : 45

45 squared = 2025 => 20 and 25
20+25= 45

Output:
45 is a Kaprekar number.

Example 2:
Enter a number : 20

20 squared = 400 => 4 and 00
4 + 00 = 4

Output:
20 is not a Kaprekar number'''
class kaprekar:
    def f(self,n):
        sq = n**2
        p = sq
        i = 0 
        r = 0
        s= 0
        while (p>0):
            p = p//10
            i = i+1
        if i%2==0:
            r = sq%(10**(i/2))
            s = (sq-r)/10**(i/2)
        else:
            r  = sq%(10**(i-(i//2)))
            s = (sq-r)/10**(i-(i//2))
        if r+s ==n:
            print(f'yes {n} is an kaprekar number')
        else:
            print(f'no {n} is not an kaprekar number try another')
n = int(input('enter number'))
c = kaprekar()
c.f(n)