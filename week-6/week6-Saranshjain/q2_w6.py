'''Problem 2:Repeat Remover
Write a program that take input of a string and the desired case 
(upper or lower) by the user. The program then converts the string into the 
specified case and prints the string after removing all the repeated letters. 
The code should also remove extra whitespaces if required.
Examples:
Example 1:
Enter a string: Hi everyone. I am a coder.
Enter the desired case(U or L): L
Output:
hi evryone. am cd
Example 2:
Enter a string: Greetings  to... all fellow   programmers!!!
Enter the desired case(U or L): U
Output:
GRETINS O... AL FW PM!!!'''

s = input("Enter a string: ")
c = input("Enter the desired case (U or L): ")

converted = ""
if c == "L":
    for i in s:
        if 'A' <= i <= 'Z':
            converted += chr(ord(i) + 32)
        else:
            converted += i
elif c == "U":
    for i in s:
        if 'a' <= i <= 'z':
            converted += chr(ord(i) - 32)
        else:
            converted += i


converted = ' '.join(converted.split())


result = ""
seen = set()
for char in converted:
    if char != ' ' and char in seen:
        continue
    result += char
    if char != ' ':
        seen.add(char)

print(result)




