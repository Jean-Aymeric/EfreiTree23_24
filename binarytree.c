//
// Created by JAD on 18/10/2023.
//

#include "binarytree.h"

void addRandomlyValueToNode(Node *node, char value);

void displayInfixNode(Node *node);

void displayPrefixNode(Node *node);

void displayPostfixNode(Node *node);

int countNodes(Node *node);

Node *seekValueInNodes(Node *node, char value);

int getHeightByNode(Node *node);

int maxInt(int number1, int number2);

void niceDisplayNode(Node *node, int gap);

BinaryTree createBinaryTree() {
    BinaryTree newTree;
    newTree.root = NULL;
    return newTree;
}

void addRandomlyValueToBinaryTree(BinaryTree *binaryTree, char value) {
    srand((unsigned int) time(NULL));
    if (binaryTree != NULL) {
        if (binaryTree->root == NULL) {
            binaryTree->root = createNode(value);
        } else {
            addRandomlyValueToNode(binaryTree->root, value);
        }
    }
}

void addRandomlyValueToNode(Node *node, char value) {
    Node **next;
    if (rand() % 2 == 0) {
        next = &node->left;
    } else {
        next = &node->right;
    }
    if (*next == NULL) {
        *next = createNode(value);
    } else {
        addRandomlyValueToNode(*next, value);
    }
}

void displayInfixBinaryTree(BinaryTree binaryTree) {
    printf("[");
    displayInfixNode(binaryTree.root);
    printf("]\n");
}

void displayInfixNode(Node *node) {
    if (node != NULL) {
        displayInfixNode(node->left);
        printf(" %c", node->value);
        displayInfixNode(node->right);
    }
}

void displayPrefixBinaryTree(BinaryTree binaryTree) {
    printf("[");
    displayPrefixNode(binaryTree.root);
    printf("]\n");
}

void displayPostfixBinaryTree(BinaryTree binaryTree) {
    printf("[");
    displayPostfixNode(binaryTree.root);
    printf("]\n");
}

void displayPrefixNode(Node *node) {
    if (node != NULL) {
        printf(" %c", node->value);
        displayInfixNode(node->left);
        displayInfixNode(node->right);
    }
}

void displayPostfixNode(Node *node) {
    if (node != NULL) {
        displayInfixNode(node->left);
        displayInfixNode(node->right);
        printf(" %c", node->value);
    }
}

int getNbNodes(BinaryTree binaryTree) {
    return countNodes(binaryTree.root);
}

int countNodes(Node *node) {
    if (node == NULL) {
        return 0;
    }
    return 1 + countNodes(node->left) + countNodes(node->right);
}

Node *seekValueInBinaryTree(BinaryTree binaryTree, char value) {
    return seekValueInNodes(binaryTree.root, value);
}

Node *seekValueInNodes(Node *node, char value) {
    if (node == NULL) {
        return NULL;
    }
    if (node->value == value) {
        return node;
    }
    Node *result = seekValueInNodes(node->left, value);
    if (result != NULL) {
        return result;
    }
    return seekValueInNodes(node->right, value);
}

int getHeight(BinaryTree binaryTree) {
    return getHeightByNode(binaryTree.root);
}

int getHeightByNode(Node *node) {
    if (node == NULL) {
        return 0;
    }
    return 1 + maxInt(getHeightByNode(node->left), getHeightByNode(node->right));
}

int maxInt(int number1, int number2) {
    return number1 >= number2 ? number1 : number2;
}

void niceDisplayTree(BinaryTree binaryTree) {
    niceDisplayNode(binaryTree.root, 0);
};

void displayGap(int gap) {
    for (int i = 0; i < gap-1; i++) {
        printf("  ");
    }
    if (gap > 0) {
        printf("%c%c", GAP_CORNER, GAP_LINE);
    }
}

void displayByWidthBinaryTree(BinaryTree binaryTree) {
    Queue myQueue = createQueue();
    enqueue(&myQueue, binaryTree.root);
    while(! isEmpty(myQueue)) {
        Node *unQueuedNode = unQueue(&myQueue);
        printf("%c ", unQueuedNode->value);
        enqueue(&myQueue, unQueuedNode->left);
        enqueue(&myQueue, unQueuedNode->right);
    }
    printf("\n");
}