#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void DFS_preorder(Node* root);
void DFS_inorder(Node* root);
void DFS_postorder(Node* root);
Node* DFSflag_preorder(Node* root, int flag);
Node* DFSflag_inorder(Node* root, int flag);
Node* DFSflag_posorder(Node* root, int flag);

int main(void){

}

void DFS_preorder(Node* root){
    if(root == NULL){
        return ;
    }

    //cout << root->data << " ";

    DFS_preorder(root->left);
    DFS_preorder(root->right);
}

void DFS_inorder(Node* root){
    if(root == NULL){
        return;
    }

    DFS_inorder(root->left);
    //cout << root->data << " ";
    DFS_inorder(root->right);
}

void DFS_postorder(Node* root){
    DFS_postorder(root->left);
    DFS_postorder(root->right);
    //cout << root->data << " ";
}

Node* DFSflag_preorder(Node* root, int flag){
    if(root == NULL){
        return NULL;
    }

    if(root->data == flag){
        return root;
    }

    Node* leftResult = DFSflag_preorder(root->left, flag);
    if(leftResult != NULL){
        return leftResult;
    }

    Node* rightResult = DFSflag_preorder(root->right, flag);
    if(rightResult != NULL){
        return rightResult;
    } 
}

Node* DFSflag_inorder(Node* root, int flag){
    if(root == NULL){
        return NULL;
    }

    Node* leftResult = DFSflag_inorder(root->left, flag);
    if(leftResult != NULL){
        return leftResult;
    }

    if(root->data == flag){
        return root;
    }

    return DFSflag_inorder(root->right, flag); 
}
Node* DFSflag_posorder(Node* root, int flag){
    if(root == NULL){
        return NULL;
    }

    Node* leftResult = DFSflag_posorder(root->left, flag);

    if(leftResult != NULL){
        return leftResult;
    }

    Node* rightResult = DFSflag_posorder(root->right, flag);
    
    if(rightResult != NULL){
        return rightResult;
    }

    if(root-> data == flag){
        return root;
    }

    return NULL;
}