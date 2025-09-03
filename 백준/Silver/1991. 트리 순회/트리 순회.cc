#include <iostream>

using namespace std;

struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};

Node* makeRoot(char data){
    Node* root = new Node();
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void insertNode(Node* root, char parent, char left, char right){
    if(root == NULL){
        return;
    }
    if(root->data == parent){
        if(left != '.')
            root->left = makeRoot(left);
        if(right != '.')
            root->right = makeRoot(right);
    }
    else{
        insertNode(root->right, parent, left, right);
        insertNode(root->left, parent, left, right);
    }
}

void preorder(Node* root){
    if(root == NULL) return;
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    Node* root = makeRoot('A');

    for(int i = 0; i < n; i++){
        char F, S, T;

        cin >> F >> S >> T; 
        insertNode(root, F, S, T);
    }

    preorder(root);
    cout << "\n";
    inorder(root);
    cout << "\n";
    postorder(root);

}