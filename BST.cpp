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

/* Takes in currentNode paramater, value you want to add*/
void BST::insert(Node* n, int value){

    
}

void BST::printInOrderWalk(Node* node){
    if (node == NULL) return;

    printInOrderWalk(node->leftChild);
    cout << node->data << " ";
    printInOrderWalk(node->rightChild);
}

void BST::reset(){
    currentNode = root;
}
