import random
import time 
import matplotlib.pyplot as plt

#bubble sort function
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

                return arr

            #function to create random array
            def create_array(n):
                arr = []

                for i in range(n):
                    arr.append(random.randint(1,1000))

                    return arr
                #list to store results
                size = []
                time = []

                #test bubble sort for different input size for n in range(1,1001):
                arr = create_array(n)
                start = time.time()
                bubble_sort(arr)
                end = time.time()
                execution_time = end-start
                sizes.append(n)
                times.append(execution_time)

                #plot the results
                plt.plot(sizes, times)

                plt.xlabel("array size(n)")
                plt.ylabel("execution time(seconds)")
                plt.title("bubble sort execution time")
                plt.show()
                