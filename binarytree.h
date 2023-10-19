//
// Created by JAD on 18/10/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#ifndef EFREITREE23_24_BINARYTREE_H
#define EFREITREE23_24_BINARYTREE_H
typedef struct Node {
    char value;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct BinaryTree {
    Node *root;
} BinaryTree;

BinaryTree createBinaryTree();
void addRandomlyValueToBinaryTree(BinaryTree *binaryTree, char value);
void displayInfixBinaryTree(BinaryTree binaryTree);
void displayPrefixBinaryTree(BinaryTree binaryTree);
void displayPostfixBinaryTree(BinaryTree binaryTree);
int getNbNodes(BinaryTree binaryTree);
Node *seekValueInBinaryTree(BinaryTree binaryTree, char value);
Node *createNode(char value);
int getHeight(BinaryTree binaryTree);

#endif //EFREITREE23_24_BINARYTREE_H
