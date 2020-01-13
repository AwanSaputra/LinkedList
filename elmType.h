#ifndef ELMTYPE_H_INCLUDED
#define ELMTYPE_H_INCLUDED

#include <iostream>
using namespace std;
#include <cstdlib>

#define NIL 0
#define SYMBOL(P) P->Symbol
#define ISOPERATOR(P) P->isOperator
#define NEXT(P) P->Next
#define PRIORITY(P) P->Priority
#define VALUE(P) atoi(P->Symbol)

typedef struct elmType * Address;
struct elmType {
    bool isOperator;
    char * Symbol;
    int Priority;
    Address Next;
};

Address CreateNewElemen1(elmType e);
Address CreateNewElemen2(bool isOperator, char * Symbol, int Priority);
Address CreateNewElemen3(char * D);



#endif // ELMTYPE_H_INCLUDED
