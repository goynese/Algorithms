import sys, random

def bubbleSort(array):
    done = False
    temp = 0
    
    while not done:
        done = True
        
        for i in range(len(array)-1):
            if array[i] > array[i+1]:
                temp = array[i+1]
                array[i+1] = array[i]
                array[i] = temp
                done = False
    return array



if __name__ == "__main__":
    
    array = []
    
    for i in range(100):
        array.append(random.randint(0, 100))
    
    print bubbleSort(array)
    

