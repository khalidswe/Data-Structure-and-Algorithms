# Create a node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None

    # Insert at the beginning
    def insertData(self, new_data):
        new_node = Node(new_data)

        new_node.next = self.head
        self.head = new_node

    #deleting a node
    def deleteNode(self,position):
        if self.head is None:
            return
        temp =self.head
        if position == 0:
            self.head = temp.next
            temp = None
            return 
        for i in range(position-1):
            temp = temp.next
            if temp is None:
                break
        
        if temp is None:
            return
        
        if temp.next is None:
            return
        
        next = temp.next.next

        temp.next =None
        temp.next = next

    #search 
    def searchList(self,value):
        current = self.head

        while current is not None:
            if current.data == value:
                return True
            
            current = current.next
        
        return False
    
    #sorting 
    def sortLinkedList(self,head):
        current = head
        index = Node(None)

        if head is None:
            return
        else:
            while current is not None:
                index = current.next

                while index is not None:
                    if current.data>index.data:
                        current.data,index.data = index.data,current.data
                    
                    index = index.next
                current = current.next
    # Print the linked list
    def printList(self):
        temp = self.head
        while (temp):
            print(str(temp.data) + " ", end="")
            temp = temp.next
        print("\n")


if __name__ == '__main__':

    list1 = LinkedList()
    list1.insertData(10)
    list1.insertData(20)
    list1.insertData(30)
    list1.printList()
    list1.deleteNode(1)
    list1.printList()
    print(list1.searchList(10))
    list1.insertData(5)
    list1.insertData(12)
    list1.printList()
    list1.sortLinkedList(list1.head)
    list1.printList()
