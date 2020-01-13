#include "queue.h"

void CreateEmptyQueue(Queue &Q) {
    HEAD(Q) = NIL;
}

bool isEmpty(Queue Q) {
    return HEAD(Q) == NIL;
}

void enQueueAddr(Queue &Q, Address P) {
    if (isEmpty(Q)) {
        TAIL(Q) = HEAD(Q) = P;
        NEXT(P) = NIL;
    } else {
        NEXT(TAIL(Q)) = P;
        TAIL(Q) = P;
    }
}

void enQueueElm(Queue &Q, elmType E) {
    enQueueAddr(Q, CreateNewElemen1(E));
}

Address deQueue(Queue &Q) {
    Address P;
    P = HEAD(Q);
    if (!isEmpty(Q)) {
        HEAD(Q) = NEXT(P);
        NEXT(P) = NULL;
    }
    return P;
}
int getHead(Queue Q) {
    return VALUE(HEAD(Q));
}
int getTail(Queue Q) {
    return VALUE(TAIL(Q));
}
char * symHead(Queue Q) {
    return SYMBOL(HEAD(Q));
}
char * symTail(Queue Q) {
    return SYMBOL(TAIL(Q));
}
void printInfo(Queue Q) {
    Address P;
    P = HEAD(Q);
    while (P != NIL) {
        cout << SYMBOL(P) << endl;
        P = NEXT(P);
    }
}
