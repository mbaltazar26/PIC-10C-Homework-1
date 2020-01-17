//
//  BinarySearchTree.hpp
//  PIC 10C HW 1
//
//  Created by Michaella Baltazar on 1/15/20.
//  Copyright © 2020 Michaella Baltazar. All rights reserved.
//  Collaborator: Big C++ Textbook 

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "TreeNode.h"
#include <string>
#include <stdio.h>

class BinarySearchTree
{
public:
    BinarySearchTree();
    void insert (std::string data);
    // **** The Big Three **** //
    // Destructor
    ~BinarySearchTree();
    // Copy constructor
    BinarySearchTree(const BinarySearchTree&);
    // Assignment operator
    BinarySearchTree& operator=(const BinarySearchTree&);
private:
    void kill_tree(TreeNode*);
    TreeNode* copy(const TreeNode*);
    TreeNode* root;
};
#endif /* BinarySearchTree_h */
