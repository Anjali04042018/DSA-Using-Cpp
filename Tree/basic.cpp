// // #include<iostream>
// // #include<queue>
// // using namespace std;

// // class Node{
// //     public:
// //     int data;
// //     Node *left;
// //     Node *right;

// //     Node(int data){
// //         this ->data = data;
// //         this ->left = NULL;
// //         this ->right = NULL;
// //     }
// // };

// // Node* buildTree(Node *root){
// //      cout<< "Enter the data: " << endl;
// //      int data;
// //      cin>> data;
// //      root = new Node(data);
// //      if(data == -1){
// //         return NULL;
// //      }

// //      cout<< "Enter the data for left Node: "<< data<<endl;
// //      root->left = buildTree(root->left);
// //      cout << "Enter the data for right Node : "<< data<<endl;
// //      root->right = buildTree(root->right);

// //      return root;
// // }

// // //   1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

// // void levelOrderTraversal(Node* root){
// //      queue<Node*> q;
// //     q.push(root);
// //     q.push(NULL);

// //     while(!q.empty()){
// //         Node* temp = q.front();
// //          q.pop();
// //         if(temp == NULL){
// //             cout<< endl;
// //             if(!q.empty()){
// //                 q.push(NULL);
// //             }
// //         }
// //         else{
// //         cout<< temp->data <<" ";
       
// //         if(temp ->left){
// //             q.push(temp->left);
// //         } 
// //         if(temp->right) {
// //             q.push(temp->right);
            
// //         }
// //         }
// //     }

// // }

// // void inorder(Node* root){
// //     if(root == NULL){
// //         return ;
// //     }

// //      inorder(root->left);
// //      cout<< root->data << " ";
// //      inorder(root->right);
// // }

// // void preOrder(Node* root){
// //     if(root == NULL){
// //         return ;
// //     }

// //     cout<< root ->data<< " ";
// //     preOrder(root->left);
// //     preOrder(root->right);
// // }

// // void postOrder(Node* root){
// //     if(root == NULL){
// //         return;
// //     }
// //     postOrder(root->left);
// //     postOrder(root->right);
// //     cout<< root->data << " ";
// // }
// // int main(){

// //     Node *root = NULL;
// //     root = buildTree(root);

// //     levelOrderTraversal(root);

// //     cout<< "Inorder Traversal ";
// //     inorder(root);
// //     cout<< endl << " Preorder Traversal : ";
// //     preOrder(root);
// //     cout<< endl << " Postorder Traversal : ";
// //     postOrder(root);
// // }

// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this ->data = data;
//         this ->left = NULL;
//         this ->right = NULL;
//     }
// };

// Node* buildTree(Node* root){
//     cout<< "Enter data for Node : "<< endl;
//     int data;
//     cin>> data;
//     root = new Node(data);
//     if(data == -1){
//         return NULL;
//     }
//     cout<< "Enter data for left Node : " << data << endl;
//     root->left = buildTree(root->left);
//     cout<< "Enter the data for right Node : " << data << endl;
//     root ->right = buildTree(root ->right);
//     return root;
// }

// void levelOrderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();
//         if(temp == NULL){
//             cout<< endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<< temp->data<< " ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp ->right){
//                 q.push(temp ->right);

//                 queue<Node*> q;
// //     q.push(root);
// //     q.push(NULL);

// //     while(!q.empty()){
// //         Node* temp = q.front();
// //          q.pop();
// //         if(temp == NULL){
// //             cout<< endl;
// //             if(!q.empty()){
// //                 q.push(NULL);
// //             }
// //         }
// //         else{
// //         cout<< temp->data <<" ";
       
// //         if(temp ->left){
// //             q.push(temp->left);
// //         } 
// //         if(temp->right) {
// //             q.push(temp->right);
//             }
//         }
//     }
// }
// int main(){
//     Node* root = NULL;
//     root = buildTree(root);

//     cout<< "Level order Traversal : "<< endl;
//     levelOrderTraversal(root);
// }



// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this ->data = data ;
        this ->left = NULL;
        this ->right = NULL;
    }
};

// 3 4 6 -1 -1 7 -1 -1 5 -1 9 -1 -1
Node* buildTree(Node* root){
    cout<< "Enter data for Node : " << endl;
    int data ;
    cin>> data ;
    root= new Node(data);
    
    if(data == -1){
        return NULL;
    }
    
    cout<< "Enter data for left Node "<< data << endl;
    root->left = buildTree(root->left);
    cout<< "Enter data for right Node " << data << endl;
    root->right = buildTree(root ->right);
    
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        cout<< root<< " ";
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<< endl;
        }
        if(root ->left){
            q.push(temp->left);
        }
        if(root ->right){
            q.push(temp->right);
        }
    }
    
}
int main() {
    // Write C++ code here
    Node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
}