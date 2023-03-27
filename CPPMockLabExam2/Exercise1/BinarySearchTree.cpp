#include <iostream>
#include <sstream>
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
	if (Root->data == 0) 
	{
		Root->data = x;
	}
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
	if (temp->right != nullptr && x > temp->right->data) 
		RecInsert(x, temp->right);
	if (temp->left != nullptr && x < temp->left->data)
		RecInsert(x, temp->left);
}
template<typename T>
void BST<T>::Traverse()
{
	RecTraverse(Root);
	string str;
	S >> str;
	cout << str << endl;
}

template<typename T>
void BST<T>::RecTraverse(Node<T>* temp)
{
	if (temp == nullptr) 
		return;
	RecTraverse(temp->left);
	S << temp->data << endl;
	RecTraverse(temp->right);
}

template<typename T>
void BST<T>::Remove(T x)
{
	BST<T>::RecRemove(x, Root);
}

template<typename T>
Node<T>* BST<T>::RecRemove(T x, Node<T>* node)
{
	if (node == nullptr) return node;
	if (node->left != nullptr && x < node->left->data)
		node->left = RecRemove(x, node->left);
	else if (node->right != nullptr && x > node->right->data)
		node->right = RecRemove(x, node->right);
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
		node->right = RecRemove(temp->data, node->right);
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