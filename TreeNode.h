//
//  TreeNode.hpp
//  PIC 10C HW 1
//
//  Created by Michaella Baltazar on 1/15/20.
//  Copyright © 2020 Michaella Baltazar. All rights reserved.
//  Collaborator: Big C++ Textbook
//  "I pledge that I have neither given nor received unauthorized assistance on this assignment."

#ifndef TreeNode_h
#define TreeNode_h

#include <stdio.h>
#include <string>

class TreeNode
{
public:
    TreeNode();
    void insert_node(TreeNode* new_node);
private:
    std::string data;
    TreeNode* left;
    TreeNode* right;
    friend class BinarySearchTree;
};

#endif /* TreeNode_h */
