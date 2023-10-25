//
// Created by JAD on 25/10/2023.
//
#include <stdlib.h>


#ifndef EFREITREE23_24_NODE_H
#define EFREITREE23_24_NODE_H

typedef struct Node {
    char value;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(char value);

#endif //EFREITREE23_24_NODE_H
