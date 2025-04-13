'''Problem 3: Container with most water:

You are given an integer array height of length n, where each element represents the height of a 
    vertical line drawn at that index on the x-axis.

Choose two different lines such that, together with the x-axis, they form a container that holds the maximum amount of water.

    '''
class Container:
    def tank(self, arr):
        i = 0
        j = len(arr) - 1
        area = 0
        while i < j:
            if arr[i] < arr[j]:
                current_area = arr[i] * (j - i)
                if current_area > area:
                    area = current_area
                i = i + 1
            else:
                current_area = arr[j] * (j - i)
                if current_area > area:
                    area = current_area
                j = j - 1
        return area

#c = Container()
#print(c.tank( [4, 3, 2, 1, 4]))
