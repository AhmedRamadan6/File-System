//Created by Ahmed Ramadan
#include<iostream>
#include<queue>
#include<conio.h>
#include<string>
using namespace std;

struct Node {
	string data;
	Node *left;
	Node *right;
};

// Function to print Nodes in a binary tree
void    Traversal(Node *root) {
	if(root == NULL) return;
	queue<Node*> Q;
	Q.push(root);
    Node* current = Q.front();
    char ch ;
    cout << current->data << endl;
    int c=0;
    int j=0;
    while(1){
    ch=_getch();
    if(ch=='w' &&j==0){
        cout << current->left->data << " " << current->right->data << endl;
        j++;
        continue;
    }
if(ch=='1'&& j==1 &&c==0){
            cout << current->left->left->data << " " << current->left->right->data << endl;
        c++;
        continue;

}
else if(ch=='2'&& j==1 && c==0){
            cout << current->right->left->data << " " << current->right->right->data << endl;
            c++;
            }
            if(ch=='z'){
            if(j==1 && c==0){
            cout << current->data << endl;
            j=0;
            continue;
            }

            else if (c==1){
            cout << current->left->data << " " << current->right->data << endl;
            c=0;
            ;}

            }}}




// Function to Insert Node in a Binary Tree
Node* Insert(Node *root,string data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}}

int main() {
    Node* root=NULL;
	root = Insert(root,"Computer Science");
	root->left=new Node;
	root->left->data= "CS101";
	root->right=new Node;
    root->right->data= "CS102";
    root->left->left=new Node;
    root->left->left->data= "DS";
    root->left->right=new Node;
    root->left->right->data= "Math1&2";
    root->right->left=new Node;
    root->right->left->data= "IS";
    root->right->right=new Node;
    root->right->right->data="Math3";
    cout << "press W to open Computer Science file then 1 or 2 to choose between two files and Z to return to previous File\n\n";
	Traversal(root);
/*    Computer Science
         /   \
    CS101    CS102
     /    \    /  \
    DS Math1&2 IS  Math3
  */
}
