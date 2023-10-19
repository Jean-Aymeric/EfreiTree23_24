#include <stdio.h>
#include "binarytree.h"
#include "binarysearchtree.h"

int main() {
    BinarySearchTree myTree = createBinaryTree();
    displayInfixBinaryTree(myTree);

    addValueToBinarySearchTree(&myTree, 'H');
    addValueToBinarySearchTree(&myTree, 'e');
    addValueToBinarySearchTree(&myTree, 'l');
    addValueToBinarySearchTree(&myTree, 'l');
    addValueToBinarySearchTree(&myTree, 'o');
    addValueToBinarySearchTree(&myTree, ' ');
    addValueToBinarySearchTree(&myTree, 'W');
    addValueToBinarySearchTree(&myTree, 'o');
    addValueToBinarySearchTree(&myTree, 'r');
    addValueToBinarySearchTree(&myTree, 'l');
    addValueToBinarySearchTree(&myTree, 'd');
    addValueToBinarySearchTree(&myTree, '!');

    displayInfixBinaryTree(myTree);
    displayPrefixBinaryTree(myTree);
    displayPostfixBinaryTree(myTree);

    printf("Nb nodes : %d\n", getNbNodes(myTree));
    printf("Hauteur : %d", getHeight(myTree));
    return 0;
}
