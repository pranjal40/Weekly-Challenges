n1 = int(input("input the lower bounding number"))
n2 = int(input("input the upper bounding number "))
for i in range (n1,n2+1):
    if i >1 :
        
        for j in range (2,i):
            if  i%j==0:
                
                break
        else :
            print(i)
            
