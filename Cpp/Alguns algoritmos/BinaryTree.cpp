#include <iostream>
#include <vector>
#include <queue>
#include <stack>

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

Node* insert(Node* root, int data);
bool search(Node* root, int data);
vector<int> preorder_traversal(Node* root);
vector<int> postorder_traversal(Node* root);
vector<int> inorder_traversal(Node* root);

int main(void){

    Node* root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 10);
    root = insert(root, 15);
    root = insert(root, 7);

    vector<int> inorder_result = inorder_traversal(root);
    for(int val : inorder_result){
        cout << val << " ";
    }
    cout << endl;

    vector<int> preorder_result = preorder_traversal(root);
    for(int val : preorder_result){
        cout << val << " ";
    }
    cout << endl;

    vector<int> postorder_result = postorder_traversal(root);
    for(int val : postorder_result){
        cout << val << " ";
    }
    cout << endl;
}

Node* insert(Node* root, int data){
    if(root == NULL){
        return new Node(data);
    }

    if(data < root->data){
        root -> left = insert(root-> left, data);
    } else {
        root -> right = insert(root->right, data);
    }
    return root;
}

bool search(Node* root, int data){
    if(root == NULL){
        return false;
    }

    if(root -> data == data){
        return true;
    }
    if(data < root -> data){
        return search(root -> left, data);
    }else{
        return search(root -> right, data);
    }
}

vector<int> preorder_traversal(Node* root){

    vector<int> result;

    if(root == NULL){
        return result;
    }

    result.push_back(root->data);
    vector<int> left = preorder_traversal(root->left);
    vector<int> right = preorder_traversal(root->right);

    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());

    return result;
}

/*vector<int> preorder_traversal(Node* root){
    vector<int> result;
        if (root == NULL) {
            return result;
        }

        stack<Node*> _stack;

        _stack.push(root);
        while (!_stack.empty()) {
            Node* node = _stack.top();
            _stack.pop();
            result.push_back(node->data);
            if (node->right) {
                _stack.push(node->right);
            }
            if (node->left) {
                _stack.push(node->left);
            }
        }
    return result;
}*/


vector<int> postorder_traversal(Node* root){
    vector<int> result;

    if(root == NULL){
        return result;
    }

    vector<int> left = postorder_traversal(root->left);
    vector<int> right = postorder_traversal(root->right);

    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    result.push_back(root->data);
    return result;
}


vector<int> inorder_traversal(Node* root){
    vector<int> result;

    if(root == NULL){
        return result;
    }

    vector<int> left = inorder_traversal(root->left);
    vector<int> right = inorder_traversal(root->right);

    result.insert(result.end(), left.begin(), left.end());
    result.push_back(root->data);
    result.insert(result.end(), right.begin(), right.end());

    return result;
}