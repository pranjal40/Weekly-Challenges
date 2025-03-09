#Problem 1: String case chang Write a program that takes user input for a string in random
#  case and converts the input string to a specified case(all lower or all upper), as desired by user. Display the new converted string.

str1 = str(input("enter string "))
str2 = str(input("entr a desired case(U or L)"))

result  = ""
if str2 =="l"or str2 =="L":
    for i in str1:
        if  "A"<i<"Z":
            result += chr(ord(i)+32)
        else:
            result += chr(ord(i))
    print(result)
if str2 =="U" or str2  == "u":
    for i in str1:
        if "a"<i<"z":
            result += chr(ord(i)-32)
        else:
            result += chr(ord(i))
    print(result)




