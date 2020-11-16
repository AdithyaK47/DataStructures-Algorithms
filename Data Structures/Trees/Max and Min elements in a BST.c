#include<stdlib.h>
#include<stdio.h>

struct BstNode {
	int data; 
	struct BstNode *left;
	struct BstNode *right;
} *root;

// Function to create a new Node in heap
struct BstNode* GetNewNode(int data) {
	struct BstNode *newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//Iterative approach
int FindMin1(struct BstNode *root){
  if(root == NULL){
    printf("Tree is empty.");
    exit(1);
  }
  else{
    while(root->left != NULL){
      root = root->left;
    }
  }
  return root->data;
}

int FindMax1(struct BstNode *root){
  if(root == NULL){
    printf("Tree is empty.");
    exit(1);
  }
  else{
    while(root->right != NULL){
      root = root->right;
    }
  }
  return root->data;
}

//Recursive approach
int FindMin2(struct BstNode *root){
  if(root == NULL){
    printf("Tree is empty.");
    exit(1);
  }
  else if(root->left == NULL){
    return root->data;
  }
  return FindMin2(root->left);
}

int FindMax2(struct BstNode *root){
  if(root == NULL){
    printf("Tree is empty.");
    exit(1);
  }
  else if(root->right == NULL){
    return root->data;
  }
  return FindMax2(root->right);
}
