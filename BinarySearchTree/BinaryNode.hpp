#ifndef _BINARYNODE_HPP_
#define _BINARYNODE_HPP_


#include <cstddef>

template <typename T>
class BinaryNode 
{
private:

	T data;
	BinaryNode *leftChild;
	BinaryNode *rightChild;

public:
	///< Inherits int getData() from Node 


	BinaryNode() : data(0), leftChild(NULL), rightChild(NULL){}

	BinaryNode(T data) : data(data), leftChild(NULL), rightChild(NULL) {}

	~BinaryNode()
	{
		
		leftChild = NULL;
		rightChild = NULL;
	}

	T getData() { return data; }
	void setData(T data) { data = data; }

	BinaryNode *getLeftChild() { return leftChild; }
	BinaryNode *getRightChild() { return rightChild; }

	void setLeftChild(BinaryNode *node) { leftChild = node; }
	void setRightChild(BinaryNode *node) { rightChild = node; }



};

#endif /* _BINARYNODE_HPP_ */
