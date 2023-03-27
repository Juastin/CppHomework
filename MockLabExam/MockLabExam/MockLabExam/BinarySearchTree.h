#pragma once

template<typename T>
struct Node
{
	T data;
	Node<T>* left;
	Node<T>* right;
	Node(T v) : data(v), left(nullptr), right(nullptr) {}
};

template<typename T>
class BST
{
public:
	BST() {
		Root = new Node<T>(0);
		Root->left = nullptr;
		Root->right = nullptr;
	}
	BST(T x) {
		Root = new Node<T>(x);
		Root->left = nullptr;
		Root->right = nullptr;
	}
	~BST();
	void Insert(T x);
	void RecInsert(T, Node<T>*);
	void Traverse();
	void RecTraverse(Node<T>*);
	typename Node<T>::Node<T>* Root;
	string S;

};

template class BST<int>;
template class BST<double>;
template class BST<char*>;


