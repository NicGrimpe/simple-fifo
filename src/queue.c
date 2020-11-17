/*
 * queue.c
 *
 *  Created on: Nov 15, 2020
 *      Author: NicGrimpe
 */

#include <malloc.h>
#include "queue.h"

#define NULL ((void *)0)

struct Node {
    char value;
    struct Node* next;
};

struct Node* head;
struct Node* tail;


void initQueue()
{
    struct Node* firstNode = (struct Node*) malloc(sizeof(struct Node));
    firstNode->value = (char) 0xFF;
    firstNode->next = NULL;

    head = firstNode;
    tail = firstNode;
}

void enqueue(char element)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->next = NULL;

    tail->value = element;
    tail->next = newNode;
    tail = newNode;
}

char dequeue()
{
    if (head->next != NULL) {
        char element = head->value;
        head = head->next;

        return element;
    } else {
        return (char) 0xFF;
    }
}

int getLength() {
    struct Node* node;
    node = head;
    int length = 0;

    while (node->next != NULL) {
        length++;
        node = node->next;
    }

    return length;
}