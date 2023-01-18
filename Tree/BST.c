#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *right, *left;

};

// creating a node:
struct node *newNode(int item){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
};

// insertion
struct node *insert( struct node *node, int key){
    if (node == NULL){
        return newNode(key);
    }

    if (key < node->key){
        node->left = insert(node->left,key);
    }else{
        node->right = insert(node->right,key);
    }
    return node;
};

//inorder

void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

int main(){
    struct node *root = NULL;

    root = insert(root,8);
    root = insert(root,10);
    root = insert(root,2);
    inorder(root);
}

