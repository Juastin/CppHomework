#include <iostream>
#include "BinarySearchTree.h"

void IntTree()
{

    BST<int> bst;

    bst.Insert(8);
    bst.Insert(4);
    bst.Insert(12);
    bst.Insert(2);
    bst.Insert(6);
    bst.Insert(10);
    bst.Insert(14);
    bst.Insert(1);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(9);
    bst.Insert(11);
    bst.Insert(13);
    bst.Insert(15);
    bst.Insert(16);
    bst.Insert(0);
    bst.Traverse();
    bst.Remove(15);  // test all cases yourself !
    bst.Traverse();
    
}

void StringTree()
{
    
    /*BST<std::string> bst;
    bst.Insert("hoi");
    bst.Insert("aap");
    bst.Insert("noot");
    bst.Insert("mies");
    bst.Traverse();
    bst.Remove("hoi");
    bst.Traverse();
    bst.Remove("bla");*/
    
}

void DoubleTree()
{
    
    BST<double> bst;
    bst.Insert(1.2);
    bst.Insert(2.4);
    bst.Insert(3);
    bst.Insert(0.5);
    bst.Insert(0.7);
    bst.Traverse();
    bst.Remove(0.5);
    bst.Traverse();
    
}

int main()
{
    IntTree();
    StringTree();
    DoubleTree();
    return 0;
}
