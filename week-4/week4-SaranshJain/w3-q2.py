#Problem 2: String breaker.
#Write a program that takes a string input from the user and prints all of its words seperately.
str1 = str(input ("enter string"))
word = ""
for i in str1 :
    if i != " ":
        word +=i
  
    else :
        if word:
            print(word)
            word = ""
if word:   
    print(word)


            




