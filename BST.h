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
            Node(){int data = -999999; this->leftChild = nullptr; this->rightChild = nullptr;};
            Node(int data){this->data = data;};
            Node(const Node &otherNode){this->data = otherNode.data; this->leftChild = otherNode.leftChild; this->rightChild = otherNode.rightChild;};
        };

    public:
        BST();
        ~BST();
    

};