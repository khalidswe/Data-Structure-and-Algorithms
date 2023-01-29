def bubbleSort(data,size):
    for i in range(0,size-1):
        swap = False  # optimized code if the list already sorted
        for j in range(0,size-1-i):
            if data[j]>data[j+1]:
                temp = data[j]
                data[j]=data[j+1]
                data[j+1]=temp
                swap =True
        if swap is False : break   

data = [1,2,3,4,5]
size = len(data)

bubbleSort(data,size)

print("acending order : ")
for i in range(size):
    print(" ",data[i],end=" ")

print("\ndecending order : ")
for i in range(size-1,-1,-1):
    print(" ",data[i],end=" ")