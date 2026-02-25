#include <queue>
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
    
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};



void bfs(int flag, Node* root);


int main(void){
    

    //int n;
    //cin >> n;

    
}

void bfs(int flag, Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> fila;
    fila.push(root);

    while(!fila.empty()){
        Node* node = fila.front();
        fila.pop();
        if(node->left != NULL){
            fila.push(node->left);
        }
        if(node -> right != NULL){
            fila.push(node->right);
        }
    }
}