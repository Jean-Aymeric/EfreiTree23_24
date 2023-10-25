//
// Created by JAD on 18/10/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "queue.h"
#include "node.h"

#ifndef EFREITREE23_24_BINARYTREE_H
#define EFREITREE23_24_BINARYTREE_H

#define GAP_CORNER '|'
#define GAP_LINE '-'


typedef struct BinaryTree {
    Node *root;
} BinaryTree;

BinaryTree createBinaryTree();
void addRandomlyValueToBinaryTree(BinaryTree *binaryTree, char value);
void displayInfixBinaryTree(BinaryTree binaryTree);
void displayPrefixBinaryTree(BinaryTree binaryTree);
void displayPostfixBinaryTree(BinaryTree binaryTree);
void displayByWidthBinaryTree(BinaryTree binaryTree);
int getNbNodes(BinaryTree binaryTree);
Node *seekValueInBinaryTree(BinaryTree binaryTree, char value);

int getHeight(BinaryTree binaryTree);


#endif //EFREITREE23_24_BINARYTREE_H
