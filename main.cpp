//
//  main.cpp
//  PIC 10C HW 1
//
//  Created by Michaella Baltazar on 1/16/20.
//  Copyright © 2020 Michaella Baltazar. All rights reserved.
// Collaborator: Big C++ Textbook 

#include <stdio.h>
#include <iostream>
#include "BinarySearchTree.h"

int main()
{
    //check default constructor:
    BinarySearchTree mybst;
    //create a BST with data:
    // std::cout << "hello" << std::endl;
    mybst.insert("Hi");
    mybst.insert("Hello");
    mybst.insert("Hey");
    mybst.insert("Hola");    
    //check copy constructor:
    BinarySearchTree mybst2(mybst);
    
    //check assignment operator:
    mybst = mybst2;

    return 0;
}

