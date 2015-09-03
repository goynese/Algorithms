import sys, random, time, itertools

#Took 0.037 seconds, where as insertion sort was 2 seconds for 5000 random elements.
def mergeSort(a):
    if(len(a) == 1):
        return a
    left = mergeSort(a[:len(a)/2])
    right = mergeSort(a[len(a)/2:])
    return merge(left, right)
    
#The merge function is where all the magic happens in merge sort. 
#I feel like I could make this shorter and more Pythonic in the future. 
def merge(left, right):
    list = []
    while left or right:
        if left and right:
            if left[0] > right[0]:
                list.append(right.pop(0))
            else:
                list.append(left.pop(0))
        elif left:
            list.append(left.pop(0))
        elif right:
            list.append(right.pop(0))
    return list
    

if __name__ == "__main__":
    
    array = []
    for i in range(5000):
        array.append(random.randint(0, 100))

    mergeSort(array)