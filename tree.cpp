#include<iostream>
using namespace std;
struct treeNode{
  int data;
  treeNode *leftChild;
  treeNode *rightChild;
};
typedef struct treeNode Tree;
treeNode *createTreeNode(int data){
  treeNode *node = new treeNode;
  node -> data = data;
  node -> leftChild = NULL;
  node -> rightChild = NULL;
  return node;
}
treeNode *insertTreeNode(treeNode *root, int data)
{
  treeNode *newNode, *p;
  newNode = createTreeNode(data);
  if (root == NULL) return newNode;
  if (rand() % 2 == 0){
    p = root;
    while(p -> leftChild != NULL){
      p = p -> leftChild;      
    }
    p -> leftChild = newNode;
  }
  else{
    p = root;
    while(p -> rightChild != NULL){
      p = p -> rightChild;
    }
    p -> rightChild = newNode;
  }
  return root;
}
void printPreOrder(treeNode *root){
  if (root != NULL){
    cout << root -> data << " ";
    printPreOrder(root -> leftChild);
    printPreOrder(root -> rightChild);
  }
}
void printPostOrder(treeNode *root){
  if (root != NULL){
    printPostOrder(root -> leftChild);
    printPostOrder(root -> rightChild);
    cout << root -> data << " ";
  }
}
void printInOrder(treeNode *root){
  if (root != NULL){
    printInOrder(root -> leftChild);
    cout << root -> data << " ";
    printInOrder(root -> rightChild);
  }
}
void freeTree(treeNode *root){
  if (root == NULL) return;
  free(root -> leftChild);
  free(root -> rightChild);
  free(root);
  return;
}
int countNode(treeNode *root){
  if (root == NULL) return 0;
  else{
    int ld = countNode(root -> leftChild);
    int rd = countNode(root -> rightChild);
    return ld + rd + 1;
  }
}
int deptTree(treeNode *root){
  if (root == NULL) return 0;
  int ld = deptTree(root -> leftChild);
  int rd = deptTree(root -> rightChild);
  return 1 + (ld > rd ? ld : rd);
}







int main(int argc, char** argv)
{
    Tree *root = NULL;
    root = insertTreeNode(root, 1);
    root = insertTreeNode(root, 10);
    root = insertTreeNode(root, 7);
    root = insertTreeNode(root, 5);
    printPreOrder(root);
    cout << endl;
    printPostOrder(root);
    cout << endl;
    printInOrder(root);
    cout << endl;
    cout << countNode(root);
    cout << endl;
    cout << deptTree(root);
    cout << endl;
}