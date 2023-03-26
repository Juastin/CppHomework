#include <iostream>
#include <string>
#include "BinarySearchTree.h"

using namespace std;

BST::~BST() 
{
	delete Root;
	Root = nullptr;
}
void BST::Insert(int x) 
{
	RecInsert(x, Root);
}

void BST::RecInsert(int x, Node<double>* temp)
{
	if (x == temp->data) return;
	if (x < temp->data && temp->left == nullptr) 
	{
		temp->left = new Node<double>(x);
		return;
	}
	if (x > temp->data && temp->right == nullptr)
	{
		temp->right = new Node<double>(x);
		return;
	}
	if (x > temp->right->data) RecInsert(x, temp->right);
	if (x < temp->left->data) RecInsert(x, temp->left);
}
void BST::Traverse()
{
	RecTraverse(Root);
}

void BST::RecTraverse(Node<double>* temp)
{
	if (temp == nullptr) 
		return;
	RecTraverse(temp->left);
	S.append(to_string(temp->data));
	RecTraverse(temp->right);
}