#include<stdlib.h>
#include<stdio.h>
struct BstNode{
  int data;
  struct BstNode *left;
  struct BstNode *right;
} *root;


int Height(struct BstNode *root){
  if(root == NULL){
    return -1;
  }
  else{
    int left = Height(root->left);
    int right = Height(root->right);

    int height = (left <= right) ? right + 1: left + 1;
    return height;
  }
}
