'''Problem 3:Vowel-end counter

Write a program that takes a string as input from the user and prints the number of words, ending with a vowel.

Examples:

Example 1:
Enter a string: Hello world, I am a machine.
Number of words ending with a vowel: 4

Example 2:
Enter a string: Hello friend. Today is a wonderful day, to travel with you!
Number of words ending with a vowel: 4
'''
str1 = str(input("enter the string :"))

words= str1.split(" ")
lst = []
for word in words:
    for i in word :
        if i== lst[-1]:
            continue
        lst.append(i)
    print(i,end = '')
    
