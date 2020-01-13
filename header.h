#include <iostream>
#define nil NULL
#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left
#define root(L) ((L).root)
using namespace std;

typedef char infotype;
typedef struct node *address;
struct node
{
	infotype info;
	node *right;
	node *left;
};

struct binaryTree {
	address root;
};

void createTree(binaryTree &T);
address allocate(infotype x);
void insertRoot(binaryTree &T, address N);
void insertLeft(binaryTree &T, address parent, address left);
void insertRight(binaryTree &T, address parent, address right);
void getSibling(binaryTree T, address R, address N);
void getParent(binaryTree T, address R, address N);
bool isLeaf(binaryTree T, address N);
bool isInternalNode(binaryTree T, address N);
int treeHeight(binaryTree T, address P);
void printDescendantNode(binaryTree T,address N);
void preOrder(address X);
void postOrder(address X);
void inOrder(address X);
