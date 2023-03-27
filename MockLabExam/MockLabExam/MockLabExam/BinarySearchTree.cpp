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
	//S.append(to_string(temp->data));
	RecTraverse(temp->right);
}

template<typename T>
Node<T>* BST<T>::Remove(T x, Node<T>* node)
{
	if (node == nullptr) return node;
	if (x < node->left->data)
		node->left = Remove(x, node->left);
	else if (x > node->right->data)
		node->right = Remove(x, node->right);
	else 
	{
		if (node->left == nullptr && node->right == nullptr && node->data == x)
			return nullptr;
		else if (node->left == nullptr && node->right != nullptr)
			return node->right;
		else if (node->right == nullptr && node->left != nullptr)
			return node->left;

		Node<T>* temp = MinValueNode(node->right);
		node->data = temp->data;
		node->right = Remove(temp->data, node->right);
	}
	return node;
}

template<typename T>
Node<T>* BST<T>::MinValueNode(Node<T>* node)
{
	Node<T>* current = node;

	/* loop down to find the leftmost leaf */
	while (current && current->left != nullptr)
		current = current->left;

	return current;
}