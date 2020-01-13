#include "header.h"

void createTree(binaryTree &T) {
	root(T) = nil;
}
address allocate(infotype x) {
	address P;
	P = new node;
	info(P) = x;
	right(P) = nil;
	left(P) = nil;
	return P;
}

void insertRoot(binaryTree&T, address N) {
	root(T) = N;
}

void insertLeft(binaryTree&T, address parent, address left) {
	left(parent) = left;
}

void insertRight(binaryTree&T, address parent, address right) {
	right(parent) = right;
}

void getSibling(binaryTree T, address R, address N) {
	address P;
	P = R;
	if (P != nil) {
		if (left(P) == N) {
			P = right(P);
			cout << info(P);
		}
		else if (right(P) == N) {
			P = left(P);
			cout << info(P);
		}
			getSibling(T, left(P), N);
			getSibling(T, right(P), N);
	}
}

void getParent(binaryTree T, address R, address N) {
	address P;
	P = R;
	if (P != nil) {
	if ((left(P) == N)||(right(P) == N)) {
		cout << info(P);
	}

			getParent(T, left(P), N);
			getParent(T, right(P), N);
	}

}

bool isLeaf(binaryTree T, address N) {
	if ((left(N) == nil) && (right(N) == nil)) {
		return true;
	}
	else {
		return false;
	}
}

bool isInternalNode(binaryTree T, address N) {
	if (N == root(T)) {
		return true;
	}
	else {
		return false;
	}
}

int treeHeight(binaryTree T, address P) {
	if (P == NULL) {
		return -1;
	}
	else {
		int u = treeHeight(T, left(P)), v = treeHeight(T, right(P));
		if (u > v) {
			return u + 1;
		}
		else {
			return v + 1;
		}
	}
}

void printDescendantNode(binaryTree T, address N) {

	if (N != nil) {
		cout << info(N) << "-";
		printDescendantNode(T, left(N));
		printDescendantNode(T, right(N));
	}
}

void preOrder(address X){
    if(X != nil){
        cout << info(X) << " - ";
        preOrder(left(X));
        preOrder(right(X));
    }
}

void postOrder(address X){
    if(X != nil){
        postOrder(left(X));
        postOrder(right(X));
        cout << info(X) << " - ";
    }
}


void inOrder(address X){
    if(X != nil){
        inOrder(left(X));
        cout << info(X) << " - ";
        inOrder(right(X));
    }
}



