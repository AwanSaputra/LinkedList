#include "header.h"

int main()
{
	binaryTree T;
	createTree(T);
	address nodeA = allocate('A');
	address nodeB = allocate('B');
	address nodeC = allocate('C');
	address nodeD = allocate('D');
	address nodeE = allocate('E');
	address nodeF = allocate('F');
	address nodeG = allocate('G');
	address nodeH = allocate('H');
	address nodeI = allocate('I');
	address nodeJ = allocate('J');
	address nodeK = allocate('K');

	insertRoot(T, nodeA);
	insertLeft(T, nodeA, nodeB);
	insertRight(T, nodeA, nodeC);
	insertLeft(T, nodeB, nodeD);
	insertRight(T, nodeB, nodeE);
	insertLeft(T, nodeC, nodeF);
	insertRight(T, nodeC, nodeG);
	insertLeft(T, nodeD, nodeH);
	insertRight(T, nodeD, nodeI);
	insertLeft(T, nodeG, nodeJ);
	insertRight(T, nodeG, nodeK);


	cout << "Sibling B: ";
	getSibling(T, root(T), nodeB);
	cout << endl;

	cout << "Sibling K: ";
	getSibling(T, root(T), nodeK);
	cout << endl;

	cout << "Parent A: ";
	getParent(T, root(T), nodeA);
	cout << endl;

	cout << "Parent D: ";
	getParent(T, root(T), nodeD);
	cout << endl;

	cout << "Parent K: ";
	getParent(T, root(T), nodeK);
	cout << endl;

	cout << "Parent H: ";
	getParent(T, root(T), nodeH);
	cout << endl;


	if (isInternalNode(T, root(T))) {
		cout << "Root merupakan internal node" << endl;
	}

	if (isLeaf(T, nodeD)) {
		cout << "Node " << info(nodeD) << " merupakan simpul daun" << endl;
	}
	else {
		cout << "Node " << info(nodeD) << " bukan merupakan simpul daun" << endl;
	}

	if (isLeaf(T, nodeI)) {
		cout << "Node " << info(nodeI) << " merupakan simpul daun" << endl;
	}
	else {
		cout << "Node " << info(nodeI) << " bukan merupakan simpul daun" << endl;
	}

	cout << "Tinggi pohon biner = " << treeHeight(T, root(T)) << endl;

	cout << "Descendant root : ";
	printDescendantNode(T, root(T));

    cout << endl;

	cout << "PreOrder : ";
	preOrder(root(T));
	cout << endl;

    cout << "PostOrder : ";
	postOrder(root(T));
	cout << endl;

    cout << "InOrder : ";
    inOrder(root(T));
	cout << endl;

	return 0;
}
