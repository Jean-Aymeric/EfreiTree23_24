//
// Created by JAD on 25/10/2023.
//

#include "queue.h"
Cell *createCell(Node *value);

void deleteCell(Cell *cell);

Queue createQueue() {
    Queue newQueue;
    newQueue.head = NULL;
    newQueue.tail = NULL;
    return newQueue;
}

void enqueue(Queue *queue, Node *value) {
    if (value != NULL) {
        Cell *newCell = createCell(value);
        if (isEmpty(*queue)) {
            queue->head = newCell;
            queue->tail = newCell;
        } else {
            queue->tail->next = newCell;
            queue->tail = newCell;
        }
    }
}

Cell *createCell(Node *value) {
    Cell *newCell = (Cell*) malloc(sizeof(Cell));
    newCell->value = value;
    newCell->next = NULL;
    return newCell;
}

Node *unQueue(Queue *queue) {
    if (isEmpty(*queue)) {
        return NULL;
    }
    Cell* returnedCell;
    returnedCell = queue->head;
    queue->head = returnedCell->next;
    if (returnedCell->next == NULL) {
        queue->tail = NULL;
    }
    Node *returnedValue = returnedCell->value;
    deleteCell(returnedCell);
    return returnedValue;
}

void deleteCell(Cell *cell) {
    free(cell);
}

unsigned short isEmpty(Queue queue) {
    return queue.head == NULL;
}