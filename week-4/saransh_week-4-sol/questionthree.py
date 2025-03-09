i = int(input("enter the number of items"))
a = 0
p = i%10
q = i // 10
print("fully filled boxes are ", q)
if p >=1:
    print("items in partially filled box ", p)
