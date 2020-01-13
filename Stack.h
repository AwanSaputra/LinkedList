#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "elmType.cpp"
#define TOP(S) S.Top

struct Stack {
    Address Top;
};
// primitive dari stack
void CreateEmptyStack(Stack &S);
bool isEmpty(Stack S);
void PushAdr(Stack &S, Address P);
void PushElmt(Stack &S, elmType E);
void PushSymbol(Stack &S, char * D);
Address Pop(Stack &S);
int Peek(Stack S);
char * symPeek(Stack S);
void printInfo(Stack S);

#endif // STACK_H_INCLUDED
