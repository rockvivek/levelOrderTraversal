#include <iostream>
#include<queue>
using namespace std;

//structure for the tree
struct Node {
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void inorderTraversal(Node *root){
    queue<Node*> q;
    Node *temp;
    if(!root){
        return ;
    }
    q.push(root);
    while(!q.empty()){
        temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

int main()
{
    //level order traversal
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    inorderTraversal(root);
    return 0;
}
