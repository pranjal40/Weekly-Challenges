
'''Problem 2: Print the pattern:

You are given an integer n, which represents the number of rows. Write a program to print the following pattern:

Example:
    when n = 4:
              1
           2 1 2
        3 2 1 2 3
     4 3 2 1 2 3 4 
'''
class Pattern:
    def pyramid(self, n):
        for i in range(1, n + 1):
            for j in range(n - i):
                print("  ", end="")
            for k in range(i, 0, -1):
                print(k, end=" ")
            for l in range(2, i + 1):
                print(l, end=" ")

            print('\n') 

#p = Pattern()
#p.pyramid(4)


