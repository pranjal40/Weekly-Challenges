due_date=int(input("Enter the number of days after the due date:"))
if(due_date!=0):
    if(due_date<=7):
        print("Fine to be paid:",due_date*5)
    else:
        penalty=35+(due_date-7)*10
        print("Fine before penalty:",penalty)
        if(penalty>100):
            print("Final Fine after 10 penalty:",penalty*1.1)
else:
    print("No fine")