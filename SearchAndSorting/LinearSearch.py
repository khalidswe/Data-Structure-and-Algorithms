def search(arr,item):
    for i in range(max):
        if arr[i] == item:
            return i

    return -1

arr= [10,20,30,40,15]

max = len(arr)
desired_item = int(input("enter desired item : "))
result = search(arr,desired_item)

if result == -1:
    print("item not found")
else:
    print("item found on index : " + str(result))