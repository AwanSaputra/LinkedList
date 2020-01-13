#include "Stack.h"
void CreateEmptyStack(Stack &S) {
    TOP(S) = NULL;
}
bool isEmpty(Stack S) {
    return TOP(S) == NULL;
}
void PushAdr(Stack &S, Address P) {
    NEXT(P) = TOP(S);
    TOP(S) = P;
}
void PushElmt(Stack &S, elmType E) {
    PushAdr(S, CreateNewElemen1(E));
}
void PushSymbol(Stack &S, char * D) {
    PushAdr(S, CreateNewElemen3(D));
}
Address Pop(Stack &S) {
    Address P;
    P = TOP(S);
    if (!isEmpty(S))
        TOP(S) = NEXT(P);
    return P;
}
int Peek(Stack S) {
    return VALUE(TOP(S));
}
char * symPeek(Stack S) {
    return SYMBOL(TOP(S));
}
void printInfo(Stack S) {
    Address P;
    P = TOP(S);
    while (P != NIL) {
        cout << (SYMBOL(P));
        P = NEXT(P);
    }
}
