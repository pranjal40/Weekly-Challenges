'''You are given an array of integers. Your task is to write a program to sort this array in ascending order.

Example:
    Input:  [5, 2, 9, 1, 5, 6]
    Output: [1, 2, 5, 5, 6, 9] 
'''
class Sort:
    def sorting(self,arr):
        
        for i in range(0,len(arr)):
            for j in range(i,len(arr)):
                if arr[i] >= arr[j]:
                    arr[j],arr[i] = arr[i],arr[j]
        return arr
# arr = [5, 2, 9, 1, 5, 6]
# c = Sort()
# print(c.sorting(arr))
#output[1, 2, 5, 5, 6, 9]

            
        