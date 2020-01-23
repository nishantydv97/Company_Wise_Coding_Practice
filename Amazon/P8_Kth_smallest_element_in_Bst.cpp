/*


Given root of binary search tree and K as input, find K-th smallest element in BST. Your task is to return the K-th smallest element in BST from the function k_smallest_element().
Note: The Time Complexity will be O(h) where h is the height of the Tree.

Input
First line of every test case will be n spaced integers denoting the Integer value of Nodes in BST. Second line of every test case will be k, denoting kth the smallest number.

Output
For each test case, output will be the kth smallest element of BST.

Constraints
1<=N<=100
1<=K<=N

Example#1
Input
5
20 8 4 22 12
3 
Output
12



*/








#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


node * bst_insert(node * root, int data){
    if(root==NULL){
        return new node(data);
    }
    if(data<root->data){
        root->left=bst_insert(root->left,data);
    }else{
        root->right=bst_insert(root->right,data);
    }
    return root;
}
vector <int> v;
void inorder(node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    //cout<<root->data;
    v.push_back(root->data);
    inorder(root->right);
}

int main() { 
    int n;
    cin>>n;
    node * root=NULL;
    while(n--){
        int num;
        cin>>num;
        //cout<<num<<" ";
        root=bst_insert(root,num);
    }
    //cout<<root->data<<endl;
    inorder(root);
    int min;
    cin>>min;
    cout<<v[min-1];
    //cout<<endl;
    
    /*
    for(auto i : v){
        cout<<i<<" ";
    }
    */
    return 0; 
} 
