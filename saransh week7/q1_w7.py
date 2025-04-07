s = str(input("enter word"))
s.lower()
sorted(s)
p="".join(sorted(s))
if (len(set(s)) != len(s)):
    p=p.upper()
else:
    p=p.lower()
print(p)




