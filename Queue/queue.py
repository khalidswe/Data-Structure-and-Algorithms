class queue:
    def __init__(self):
        self.queue = []
    

    #add an element
    def enqueue(self,item):
        self.queue.append(item)
    
    #remove an eleement
    def dequeue(self):
        if len(self.queue)<1:
            print("queue is empty\n")
            return None
        return self.queue.pop(0)
    
    #display the queue
    def display(self):
        print(self.queue)
    
    # def size(self):
    #     return len(self.queue)

    
khalid = queue()
khalid.dequeue()
khalid.display()
khalid.enqueue(10)
khalid.enqueue(20)
khalid.enqueue(30)
khalid.enqueue(40)
khalid.enqueue(40)
khalid.display()
khalid.dequeue()
khalid.display()