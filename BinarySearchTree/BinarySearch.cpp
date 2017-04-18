/*#include "BinarySearch.hpp"
#include "BinaryNode.hpp"
#include <iostream>

using namespace std;

BinarySearchTree::BinarySearchTree() : root(NULL), heightLeft(0), heightRight(0)
{
	
}

BinarySearchTree::~BinarySearchTree()
{
	root = NULL;
}

void BinarySearchTree::insert(int data)
{
	BinaryNode *leaf = new BinaryNode(data);
	if(root == NULL)
	{
		root = leaf;
		return;
	}
	BinaryNode *current = root;
	BinaryNode *parent = NULL;
	while(current != NULL)
	{
		parent = current;
		if(data <= current->getData())
		{
			current = current->getLeftChild();
			
		}else
		{
			current = current->getRightChild();
			
		}
	}

	//current = leaf;
    if(leaf->getData() <= parent->getData()){
		parent->setLeftChild(leaf);
        setHeightLeft();
    }
    else{
        
		parent->setRightChild(leaf);
        setHeightRight();
    }
}


void BinarySearchTree::postOrderPrint()
{
	std::cout << "Обход в обратном порядке" << std::endl;
	postOrder(root);
	std::cout << std::endl;

}

void BinarySearchTree::postOrder(BinaryNode *node)
{
	if(node == NULL)
		return;
	if(node->getLeftChild() != NULL)
		postOrder(node->getLeftChild());
	if(node->getRightChild() != NULL)
		postOrder(node->getRightChild());

	std::cout << " " << node->getData() << " ";

}

void BinarySearchTree::preOrderPrint()
{
	std::cout << "Обход в прямом порядке" << std::endl;
	preOrder(root);
	std::cout << std::endl;

}

void BinarySearchTree::preOrder(BinaryNode *node)
{
	if (node == NULL)
		return;
	
	std::cout << " " << node->getData() << " ";

	if (node->getLeftChild() != NULL)
		preOrder(node->getLeftChild());

	if (node->getRightChild() != NULL)
		preOrder(node->getRightChild());
}

void BinarySearchTree::inOrderPrint()
{
	std::cout << "Обход в симметричном порядке" << std::endl;
	inOrder(root);
	std::cout << std::endl;

}

void BinarySearchTree::inOrder(BinaryNode *node)
{
	if (node == NULL)
		return;
	
	
	if (node->getLeftChild() != NULL)
		inOrder(node->getLeftChild());	

	std::cout << " " << node->getData() << " ";

	if (node->getRightChild() != NULL)
		inOrder(node->getRightChild());	

}*/
