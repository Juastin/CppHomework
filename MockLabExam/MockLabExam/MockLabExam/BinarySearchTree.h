#pragma once
template<typename T>
class BST
{
	template<typename T>
	struct Node
	{
		T data;
		Node* left;
		Node* right;
		Node(int v) : data(v), left(nullptr), right(nullptr) {}
	};
public:
	BST() {
		Root = new Node<T>(0);
		Root->left = nullptr;
		Root->right = nullptr;
	}
	~BST();
	void Insert(int x);
	void RecInsert(int, typename Node<T>::Node*);
	//void RecInsert(int, typename Node<char*>::Node*);
	void Traverse();
	void RecTraverse(typename Node<T>::Node*);
	//void RecTraverse(typename Node<char*>::Node*);
	typename Node<T>::Node* Root;
	string S;
};

