'''Write a program that takes user input for the height of a hourglass and prints the desired hourglass of stars.

Examples:

Example 1:
Enter the desired height of hourglass: 5

Output:

   #####
    ###
     #
    ###
   #####


Example 2:
Enter the desired height of hourglass: 7

Output:
#######
   #####
      ###
    #
      ###
   #####
#######'''
h = int(input("Enter the desired height : "))


for i in range(0, h):
    
    s = i * 2
    
    hashes = h * 2 - 1 - i * 4
    
    if hashes <= 0:
        break
    
    print(" " * s + "#" * hashes)

start = i - 1 if hashes <= 0 else i - 2
for j in range(start, -1, -1):
    s = j * 2
    hashes = h * 2 - 1 - j * 4
    print(" " * s + "#" * hashes)