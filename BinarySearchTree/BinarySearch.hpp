#ifndef _BINARYSEARCH_HPP_
#define _BINARYSEARCH_HPP_

#include <cstdlib>
#include <math.h>
#include <iostream>
#include "BinaryNode.hpp"

template <typename T>
class BinarySearchTree
{
private:
     BinaryNode<T> *root;
    size_t heightLeft, heightRight;

public:

	BinarySearchTree();

	~BinarySearchTree();


	void insert(T data);
	void postOrderPrint();
	void preOrderPrint();
	void inOrderPrint();

    
    void setHeightLeft() { heightLeft++; }
    void setHeightRight() { heightRight++; }
    void printHeight(){
        if (fabs(heightRight - heightLeft) <= 1){
            std:: cout << "Дерево сбалансированное\n";
        }
        else
            std:: cout << " Дерево не сбалансированное\n";
    }

	void inOrder(BinaryNode<T> *node);

	void preOrder(BinaryNode<T> *node);

	void postOrder(BinaryNode<T> *node);

};

template <typename T>
BinarySearchTree<T>::BinarySearchTree() : root(NULL), heightLeft(0), heightRight(0)
{
    
}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree()
{
    root = NULL;
}

template <typename T>
void BinarySearchTree<T>::insert(T data)
{
    BinaryNode<T> *leaf = new BinaryNode<T>(data);
    if(root == NULL)
    {
        root = leaf;
        return;
    }
    BinaryNode<T> *current = root;
    BinaryNode<T> *parent = NULL;
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

template <typename T>
void BinarySearchTree<T>::postOrderPrint()
{
    std::cout << "Обход в обратном порядке" << std::endl;
    postOrder(root);
    std::cout << std::endl;
    
}

template <typename T>
void BinarySearchTree<T>::postOrder(BinaryNode<T> *node)
{
    if(node == NULL)
        return;
    if(node->getLeftChild() != NULL)
        postOrder(node->getLeftChild());
    if(node->getRightChild() != NULL)
        postOrder(node->getRightChild());
    
    std::cout << " " << node->getData() << " ";
    
}

template <typename T>
void BinarySearchTree<T>::preOrderPrint()
{
    std::cout << "Обход в прямом порядке" << std::endl;
    preOrder(root);
    std::cout << std::endl;
    
}

template <typename T>
void BinarySearchTree<T>::preOrder(BinaryNode<T> *node)
{
    if (node == NULL)
        return;
    
    std::cout << " " << node->getData() << " ";
    
    if (node->getLeftChild() != NULL)
        preOrder(node->getLeftChild());
    
    if (node->getRightChild() != NULL)
        preOrder(node->getRightChild());
}

template <typename T>
void BinarySearchTree<T>::inOrderPrint()
{
    std::cout << "Обход в симметричном порядке" << std::endl;
    inOrder(root);
    std::cout << std::endl;
    
}

template <typename T>
void BinarySearchTree<T>::inOrder(BinaryNode<T> *node)
{
    if (node == NULL)
        return;
    
    
    if (node->getLeftChild() != NULL)
        inOrder(node->getLeftChild());	
    
    std::cout << " " << node->getData() << " ";
    
    if (node->getRightChild() != NULL)
        inOrder(node->getRightChild());	
    
}
#endif //_BINARYSEARCH_HPP_
