//
// Created by JAD on 18/10/2023.
//

#include "binarysearchtree.h"


void addValueToBinarySearchTreeByNode(Node **node, char value);

void addValueToBinarySearchTree(BinarySearchTree *binarySearchTree, char value) {
    if (binarySearchTree != NULL) {
        if(binarySearchTree->root == NULL) {
            binarySearchTree->root = createNode(value);
        } else {
            addValueToBinarySearchTreeByNode(&(binarySearchTree->root), value);
        }
    }
}

void addValueToBinarySearchTreeByNode(Node **node, char value) {
    if (*node == NULL) {
        *node = createNode(value);
    } else {
        if ((*node)->value != value) {
            if ((*node)->value > value) {
                addValueToBinarySearchTreeByNode(&(*node)->left, value);
            } else {
                addValueToBinarySearchTreeByNode(&(*node)->right, value);
            }
        }
    }
}
