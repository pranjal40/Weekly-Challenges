item=int(input("Enter the total number of items:"))
print("Total item:",item)
boxes=int(item/10)
print("Full boxes needed:",boxes)
remaining_item=item%10
if(remaining_item==0):
    print("All boxes are fully filled!")
else:
    print("Items in the last partially filled box:",remaining_item)    