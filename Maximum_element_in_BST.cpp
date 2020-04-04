// Simple recursive approach to find the maximum element in the tree
#include<iostream>
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};
BstNode * getNewNode()
{
    BstNode *newNode = new BstNode;
    newNode->left = NULL;
    newNode->right = NULL;
}
BstNode * Insert(BstNode *root, int data)
{
    BstNode *newNode = getNewNode();
    newNode->data = data;
    if(root == NULL)
        root = newNode;
    
    else if(data <= root->data)
        root->left = Insert(root->left, data);
    
    else
        root->right = Insert(root->right, data);
    return root;
}
int minElement(BstNode *root)
{
    if(root == NULL)
    {
        cout<<"\nEmpty tree\n";
        return -1;
    }
        
    if(root->right == NULL)
        return root->data; // last (rightmost) leaf node's data
    else
        minElement(root->right);
}
int main()
{
    BstNode *root = NULL;
    root = Insert(root, 12);
    root = Insert(root, 10);
    root = Insert(root, 8);
    root = Insert(root, 29);
    cout<<minElement(root); //should be 29
    return 0;
}