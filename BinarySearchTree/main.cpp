//
//  main.cpp
//  BinarySearchTree
//
//  Created by Сергей Тришин on 18.04.17.
//  Copyright © 2017 Сергей Тришин. All rights reserved.
//

#include <iostream>
#include "BinarySearch.hpp"
#include "BinaryNode.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    BinarySearchTree<int> a;
    a.insert(4);
    a.insert(2);
    a.insert(5);
    a.insert(1);
    a.insert(3);
    a.insert(6);
    
    a.postOrderPrint();
    a.preOrderPrint();
    a.inOrderPrint();
    a.printHeight();
    
    BinarySearchTree<char> b;
    b.insert('h');
    b.insert('e');
    b.insert('l');
    b.insert('l');
    b.insert('o');
    b.insert('u');
    
    b.postOrderPrint();
    b.preOrderPrint();
    b.inOrderPrint();
    b.printHeight();
    return 0;
}
