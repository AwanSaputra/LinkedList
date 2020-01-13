#include "elmType.h"
#include <cstdio>

Address CreateNewElemen1(elmType e) {
    Address P;
    P = new elmType;
    ISOPERATOR(P) = e.isOperator;
    SYMBOL(P) = e.Symbol;
    PRIORITY(P) = e.Priority;
    NEXT(P) = NIL;
    return P;
}

Address CreateNewElemen2(bool isOperator, char * Symbol, int Priority) {
    elmType E;
    E.isOperator = isOperator;
    E.Symbol = Symbol;
    E.Priority = Priority;
    E.Next = NIL;
    return CreateNewElemen1(E);
}

Address CreateNewElemen3(char * D) {
    elmType E;
    E.isOperator = false;
    E.Symbol = D;
    E.Priority = 0;
    E.Next = NULL;
    return CreateNewElemen1(E);
}
