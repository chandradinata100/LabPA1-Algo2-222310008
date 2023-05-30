#include <iostream>
using namespace std;

struct Node {
  // properties node
  int data;
  struct Node *left;
  struct Node *right;

  // constructor
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

// PREORDER TRAVERSAL
void preorderTraversal(struct Node *node) {
  if (node == NULL)
    return;

  cout << node->data << " "; // nampilin data pertama masuk
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

// postorder traversal
void postorderTraversal(struct Node *node) {
  if (node == NULL)
    return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << " ";
}

// inorder traversal
void inorderTraversal(struct Node *node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << " ";
  inorderTraversal(node->right);
  cout << node->data << " ";
}

// fungsi utama
int main() { 
  struct Node* root = new Node(18);
  root->left = new Node(30);
  root->right = new Node(33);
  root->left->left = new Node (29);
  root->left->right = new Node(32);

  cout << "inorder traversal output";
  inorderTraversal(root);
  cout << "\npreorder traversal output";
  preorderTraversal(root);
  cout << "\npostorder traversal output";
  postorderTraversal(root);
}