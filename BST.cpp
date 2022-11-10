#include <stdio.h>
#include <stdlib.h>
#include <iostream>
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

BST::~BST(){
    deleteBST(this->root);
}

void BST::deleteBST(Node* node){
    if(node){
        deleteBST(node->leftChild);
        deleteBST(node->rightChild);
        delete node;
    }
}

/* Takes in root and value you want to add as node*/
void BST::insert(Node* root, int value){
    Node* newNode = new Node(value);
    if (!root){
        root = newNode;
        return;
    }
    
    Node* prev = nullptr;
    Node* temp = root;
    while(temp){
        if (temp->data > value){
            prev = temp;
            temp = temp->leftChild;
        }
        else if (temp->data < value){
            prev = temp;
            temp = temp->rightChild;
        }
    }
    if (value < prev->data){
        prev->leftChild = newNode;
    }
    else{
        prev->rightChild = newNode;
    }
}

/*Takes in currentRoot at node as parameter*/
void BST::printInOrderWalk(Node* node){
    if (node == NULL) return;

    printInOrderWalk(node->leftChild);
    cout << node->data << " ";
    printInOrderWalk(node->rightChild);
}

void BST::reset(){
    currentNode = root;
}
