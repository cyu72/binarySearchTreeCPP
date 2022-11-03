#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

using namespace std;

BST::BST(){
    this->root = nullptr;
}

BST::BST(int value){
    Node* newNode = new Node(value);
    root = newNode;
    currentNode = root;
}

// BST* BST::insert(int value){
//     Node* newNode = new Node(value);
//     if ((root == nullptr) || (root->getData() == -999999)) root = newNode;


//     return this;
    
// }
