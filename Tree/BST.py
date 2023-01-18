#Binary Search Tree

#creating node
class Node:
    def __init__(self,key):
        self.key = key
        self.right = None
        self.left = None


# Inorder Traverdsal
def inOrder(root):
    if root is not None:
        inOrder(root.left)

        print(str(root.key) + "->",end=' ')

        inOrder(root.right)

#insertion
def insert(node,key):
    if node is None:
        return Node(key)
    if key<node.key:
        node.left = insert(node.left,key)
    else:
        node.right = insert(node.right,key)

    return node


root = None
root = insert(root,8)
root = insert(root,5)
root = insert(root,9)
root = insert(root,1)
inOrder(root)