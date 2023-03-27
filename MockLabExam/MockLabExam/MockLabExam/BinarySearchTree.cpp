#include <iostream>
#include <string>
#include "BinarySearchTree.h"

using namespace std;

template<typename T>
BST<T>::~BST() 
{
	delete Root;
	Root = nullptr;
}

template<typename T>
void BST<T>::Insert(T x)
{
	RecInsert(x, Root);
}

template<typename T>
void BST<T>::RecInsert(T x, Node<T>* temp)
{
	if (x == temp->data) return;
	if (x < temp->data && temp->left == nullptr) 
	{
		temp->left = new Node<T>(x);
		return;
	}
	if (x > temp->data && temp->right == nullptr)
	{
		temp->right = new Node<T>(x);
		return;
	}
	if (x > temp->right->data) RecInsert(x, temp->right);
	if (x < temp->left->data) RecInsert(x, temp->left);
}
template<typename T>
void BST<T>::Traverse()
{
	RecTraverse(Root);
}
template<typename T>
void BST<T>::RecTraverse(Node<T>* temp)
{
	if (temp == nullptr) 
		return;
	RecTraverse(temp->left);
	S.append(to_string(temp->data));
	RecTraverse(temp->right);
}