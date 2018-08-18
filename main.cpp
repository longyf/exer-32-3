#include <iostream>
#include "BinaryTreeNode.h"
#include "printZ.h"
using namespace std;

void test1() {
	BinaryTreeNode *pNode1 = new BinaryTreeNode (1);
	BinaryTreeNode *pNode2 = new BinaryTreeNode (2);
	BinaryTreeNode *pNode3 = new BinaryTreeNode (3);
	BinaryTreeNode *pNode4 = new BinaryTreeNode (4);
	BinaryTreeNode *pNode5 = new BinaryTreeNode (5);
	BinaryTreeNode *pNode6 = new BinaryTreeNode (6);
	BinaryTreeNode *pNode7 = new BinaryTreeNode (7);
	BinaryTreeNode *pNode8 = new BinaryTreeNode (8);
	BinaryTreeNode *pNode9 = new BinaryTreeNode (9);
	BinaryTreeNode *pNode10 = new BinaryTreeNode (10);
	BinaryTreeNode *pNode11 = new BinaryTreeNode (11);
	BinaryTreeNode *pNode12 = new BinaryTreeNode (12);
	BinaryTreeNode *pNode13 = new BinaryTreeNode (13);

	pNode1->m_pLeft = pNode2;
	pNode1->m_pRight = pNode3;
	
	pNode2->m_pLeft = pNode4;
	pNode2->m_pRight = pNode5;

	pNode3->m_pLeft = pNode6;
	pNode3->m_pRight = pNode7;
	
	pNode4->m_pLeft = pNode8;
	pNode4->m_pRight = pNode9;
	
	pNode5->m_pLeft = pNode10;
	pNode5->m_pRight = pNode11;
	
	pNode6->m_pLeft = pNode12;
	pNode6->m_pRight = pNode13;
	
	printZ(pNode1);
}

void test2() {
	BinaryTreeNode *pNode1 = new BinaryTreeNode (1);
	BinaryTreeNode *pNode2 = new BinaryTreeNode (2);
	BinaryTreeNode *pNode3 = new BinaryTreeNode (3);

	pNode1->m_pLeft = pNode2;
	pNode2->m_pLeft = pNode3;

	printZ(pNode1);
}

void test3() {
	BinaryTreeNode *pNode1 = new BinaryTreeNode (1);
	BinaryTreeNode *pNode2 = new BinaryTreeNode (2);
	BinaryTreeNode *pNode3 = new BinaryTreeNode (3);

	pNode1->m_pRight = pNode2;
	pNode2->m_pRight = pNode3;

	printZ(pNode1);
}

void test4() {
	BinaryTreeNode *pNode1 = new BinaryTreeNode (1);

	printZ(pNode1);
}

void test5() {
	BinaryTreeNode *pNode1 = nullptr;

	printZ(pNode1);
}

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}
