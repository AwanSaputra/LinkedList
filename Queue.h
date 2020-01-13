#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "elmType.h"

#define HEAD(Q) Q.Head
#define TAIL(Q) Q.Tail

struct Queue {
    Address Head, Tail;
};
// primitive dari Queue
void CreateEmptyQueue(Queue &Q);
bool isEmpty(Queue Q);
void enQueueAddr(Queue &Q, Address P);
void enQueueElm(Queue &Q, elmType E);
Address deQueue(Queue &Q);
int getHead(Queue Q);
int getTail(Queue Q);
char * symHead(Queue Q);
char * symTail(Queue Q);
void printInfo(Queue Q);

#endif // QUEUE_H_INCLUDED
