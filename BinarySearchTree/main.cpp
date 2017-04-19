//
//  main.cpp
//  BinarySearchTree
//
//  Created by Сергей Тришин on 18.04.17.
//  Copyright © 2017 Сергей Тришин. All rights reserved.
//

#include <iostream>
#include <fstream>
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
    
    
    
    
    string fileName = "/Users/Sergey/Documents/Developer/BinarySearchTree/BinarySearchTree/File.txt";
    
    BinarySearchTree<int> c;
    
    ifstream in(fileName.c_str(), ios_base::in);
    if (!in)
    {
        cout << "Can not open the file. Press enter to exit.\n";
        cin.get();
        return 1;
    }
     int current;
    while ( in >> current)
    {
        c.insert(current);
    }

    c.postOrderPrint();
    c.preOrderPrint();
    c.inOrderPrint();
    c.printHeight();
    
    
    
    return 0;
}
