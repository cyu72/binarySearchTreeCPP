#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

using namespace std;
//Just need to rewrite insert at this point
int main(){
    BST firstTree = BST(1);
    firstTree.insert(firstTree.getRoot(), 3);
    firstTree.insert(firstTree.getRoot(), 5);
    firstTree.insert(firstTree.getRoot(), 4);
    firstTree.insert(firstTree.getRoot(), 20);
    firstTree.printInOrderWalk(firstTree.getRoot());
}