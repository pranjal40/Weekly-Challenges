
arr = []                                  

rows   = int(input('enter number of rows: '))
cols   = int(input('enter number of columns: '))


for i in range(rows):
    row_data = []                          
    for j in range(cols):
        p = int(input(f'enter {i+1},{j+1}th element: '))
        row_data.append(p)                 
    arr.append(row_data)                    

for i in range(rows):
    for j in range(cols):
        for k in range (j+1,3,1):
            if arr[i][j]>arr[i][k]:
                arr[i][j],arr[i][k] = arr[i][k],arr[i][j]

for i in range(rows):
    for j in range(cols):
        for k in range (i+1,3,1):
            if arr[i][j]>arr[k][j]:
                arr[i][j],arr[k][j] = arr[k][j],arr[i][j]

        

for i in range(rows):
    for j in range(cols):
        print(arr[i][j], end=' ')           
    print()                                 