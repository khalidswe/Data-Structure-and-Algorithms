def BinarySearch(array,item,high,low):
    mid=0
    while low<=high:
        mid = low + (high-low)//2

        if array[mid] == item:
            return mid
        elif array[mid] < item:
            low = mid +1
        else:
            high = mid-1
    return -1

array = [10,20,30,40,50]
low = 0
high = len(array)-1

desiredItem = int(input("enter your desired item : "))

result = BinarySearch(array,desiredItem,high,low)

if result == -1:
    print("Item not found")
else:
    print("item found in index : " + str(result))
