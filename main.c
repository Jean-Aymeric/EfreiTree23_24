#include <stdio.h>
#include "binarytree.h"
#include "binarysearchtree.h"

int main() {
    BinarySearchTree myTree = createBinaryTree();
    addValueToBinarySearchTree(&myTree, 'L');
    addValueToBinarySearchTree(&myTree, 'F');
    addValueToBinarySearchTree(&myTree, 'I');
    addValueToBinarySearchTree(&myTree, 'Q');
    addValueToBinarySearchTree(&myTree, 'S');
    addValueToBinarySearchTree(&myTree, 'M');

    displayInfixBinaryTree(myTree);
    displayByWidthBinaryTree(myTree);
    return 0;
}
