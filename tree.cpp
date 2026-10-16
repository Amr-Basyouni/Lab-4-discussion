#include <iostream>
using namespace std;
#include "tree.h"




Node* Tree::insert(Node* node, int value) {
 if (node == nullptr) return new Node(value);
 if (value < node->data) node->left = insert(node->left, value);
 else if(value > node->data) node->right = insert(node->right, value);
 // equal: duplicate ignored
 return node;
}

int Tree::height(Node* node) {
 if (node == nullptr) return -1; // -1: height of empty subtree
 int lh = height(node->left);
 int rh = height(node->right);
 return 1 + max(lh, rh);
}
void Tree::inOrder(Node* node) {
 // TODO: print nodes left→root→right
 // Expected output for tree in Ex1: 10 20 35 40 50 60 70 80
}

void Tree::levelOrder() {
 if (!root) return;
 queue<Node*> q;
 q.push(root);
 while (!q.empty()) {
 Node* curr = q.front(); q.pop();
 cout << curr->data << " ";
 // TODO: enqueue left and right children if they exist
 }
 cout << endl;
}
