//
// Created by JAD on 18/10/2023.
//

#ifndef EFREITREE23_24_BINARYSEARCHTREE_H
#define EFREITREE23_24_BINARYSEARCHTREE_H

#include "binarytree.h"

typedef BinaryTree BinarySearchTree;

void addValueToBinarySearchTree(BinarySearchTree *binarySearchTree, char value);
Node *seekValueInBinarySearchTree(BinarySearchTree binarySearchTree, char value);

#endif //EFREITREE23_24_BINARYSEARCHTREE_H
