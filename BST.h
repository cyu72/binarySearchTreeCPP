#include <stdio.h>
#include <stdlib.h>
#pragma once

using namespace std;

class BST{
    private:
        class Node{
            public:
                int data;
                Node* leftChild;
                Node* rightChild;
                Node(){int data = -999; this->leftChild = nullptr; this->rightChild = nullptr;};
                Node(int data){this->data = data; this->leftChild = nullptr; this->rightChild = nullptr;};
                Node(const Node &otherNode){this->data = otherNode.data; this->leftChild = otherNode.leftChild; this->rightChild = otherNode.rightChild;};
                int getData(){return this->data;};
        };
        Node* currentNode, *root, *prevNode;;

    public:
        BST();
        BST(int value);
        void insert(Node* root, int value);
        // ~BST();
        void preOrderWalk();
        void postOrderWalk();
        void printInOrderWalk(Node* node);
        void reset();
        Node* getRoot(){return this->root;};

};