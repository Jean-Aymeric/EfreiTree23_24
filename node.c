//
// Created by JAD on 25/10/2023.
//

#include "node.h"

Node *createNode(char value) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
