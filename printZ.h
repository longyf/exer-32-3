#ifndef PRINT_Z_H
#define PRINT_Z_H
#include <iostream>
#include "BinaryTreeNode.h"
#include <stack>
using namespace std;

void printZ(BinaryTreeNode *pRoot) {
	if (pRoot == nullptr) return;

	stack<BinaryTreeNode *> s1;
	stack<BinaryTreeNode *> s2;

	BinaryTreeNode *pNode = pRoot;
	s1.push(pNode);

	while (pNode != nullptr) {
		//处理奇数层。
		while (!s1.empty()) {
			pNode = s1.top();
			cout<<pNode->m_nValue<<" ";
			s1.pop();
			if (pNode->m_pLeft != nullptr) s2.push(pNode->m_pLeft);
			if (pNode->m_pRight != nullptr) s2.push(pNode->m_pRight);
		}
		//处理偶数层。
		while (!s2.empty()) {
			pNode = s2.top();
			cout<<pNode->m_nValue<<" ";
			s2.pop();
			if (pNode->m_pRight != nullptr) s1.push(pNode->m_pRight);
			if (pNode->m_pLeft != nullptr) s1.push(pNode->m_pLeft);

		}
		//判断是否应该结束外层的while。
		if (pNode->m_pLeft != nullptr) pNode = pNode->m_pLeft;
		else pNode = pNode->m_pRight;
	}
	cout<<endl;
}
#endif
