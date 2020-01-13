#include "lib.h"
void Evaluate (Queue &Q) {
    Stack S;
    Address P;
    int a, b, c;
    char symbol[100];
    string x;
    CreateEmptyStack(S);
    int i = 0;
    while (!isEmpty(Q)) {
        P = deQueue(Q);
        x = SYMBOL(P)[0];
        if ((x != "+") &&
        (x != "-") &&
        (x != "/") &&
        (x != "*")) {
            // cout << x << " is operand, push to stack" << endl;
            PushAdr(S, P);
        } else {
            a = VALUE(Pop(S));
            b = VALUE(Pop(S));
            switch (x[0]) {
                case '*':
                    c = b * a;
                    break;
                case '+':
                    c = b + a;
                    break;
                case '-':
                    c = b - a;
                    break;
                case '/':
                    c = b / a;
                    break;
            }
            sprintf(symbol,"%d",c);
            PushSymbol(S, symbol);
            // cout << x << " is operator, push " << c << " (Pop " << a << ", " << b << ") to stack" << endl;
        }
    }

    cout << "HASIL KALKULASI POSTFIX : " << VALUE(TOP(S));
}
