'''    Problem 3: Character in string

Write a program that takes a special character as input from the user and inserts the input character at the specified location in the string. 
The special character should only be input at approporiate positions, not between the letters of a word. Display the final string,
 making sure each special character is followed by a single whitespace. The next letter after a fullstop(.) or an exclamation mark(!) must also be made capital. 
 If a character is already present at the specified location, replace it with the new one and make appropriate changes as mention above.

Examples:

Example 1:
Enter a string: Hello world I am a machine.
Enter special character to be inserted: ,
Enter position in the string: 12

Output:
Hello world, I am a machine.

Example 2:
Enter a string: Hello friend! today    is a wonderful day, to travel with you!
Enter special character to be inserted: .
Enter position in the string: 13

Output:
Hello friend. Today is a wonderful day, to travel with you!

Example 3:
Enter a string: Hello world I am a machine.
Enter special character to be inserted: -
Enter position in the string: 10

Output:
Insertion of special characters not allowed in between letters of a word!     '''
str1 = input("Enter string: ")
char = input("Enter special character to be inserted: ")
pos = int(input("Enter position in the string: "))


if pos > 0 and pos < len(str1) and str1[pos - 1].isalnum() and str1[pos].isalnum():
    print("No special characters pls ")
else:
    
    str1 = str1[0:pos] + char + str1[pos + 1:] if str1[pos:pos+1] else str1[0:pos] + char

    
    if pos + 1 >= len(str1) or str1[pos + 1] != ' ':
        str1 = str1[0:pos + 1] + ' ' + str1[pos + 1:]

    
    result = ''
    capital = True  
    for i in range(len(str1)):
        ch = str1[i]
        if capital and ch.isalpha():
            result += ch.upper()
            capital = False
        else:
            result += ch
            if ch in ['.', '!']:
                capital = True
            elif ch.isalpha():
                capital = False

    print(result)
