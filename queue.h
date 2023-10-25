//
// Created by JAD on 25/10/2023.
//

#ifndef EFREITREE23_24_QUEUE_H
#define EFREITREE23_24_QUEUE_H

#include <stdlib.h>
#include <stdio.h>
#include "node.h"

typedef struct Cell {
    Node *value;
    struct Cell *next;
} Cell;

typedef struct Queue {
    Cell *head;
    Cell *tail;
} Queue;

Queue createQueue();
void enqueue(Queue *queue, Node *value);
Node *unQueue(Queue *queue);
unsigned short isEmpty(Queue queue);

#endif //EFREITREE23_24_QUEUE_H
