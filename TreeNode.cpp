//
//  TreeNode.cpp
//  PIC 10C HW 1
//
//  Created by Michaella Baltazar on 1/15/20.
//  Copyright © 2020 Michaella Baltazar. All rights reserved.
//  Collaborator: Big C++ Textbook 

#include "TreeNode.h"

TreeNode::TreeNode()
{
    data = "";
    left = nullptr;
    right = nullptr;
}

void TreeNode::insert_node(TreeNode* new_node)
{
    if (new_node->data < data)                      // new_node's data comes first
    {
        if (left == nullptr)                        // if there is nothing that comes before
            left = new_node;                        //left is now the leftmost branch
        else
            left->insert_node(new_node);            //recursively find a place for new_node
    }
    else if (data < new_node->data)                 // new_node's data comes afterwards
    {
        if (right == NULL)                          // if nothing should be after new_node
            right = new_node;                       // new node is last
        else
            right->insert_node(new_node);           // recursively find a place for new_node
    }
}


