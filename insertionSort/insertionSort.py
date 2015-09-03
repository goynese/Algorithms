import sys, random, time


def insertionSort(array):
    for i in range(len(array)):
        j = i
        while j > 0 and array[j-1] > array[j]:
            array[j], array[j-1] = array[j-1], array[j]
            j -= 1
    return array


if __name__ == "__main__":
    
    array = []
    for i in range(5000):
        array.append(random.randint(0, 100))
    
    insertionSort(array)