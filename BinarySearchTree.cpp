//
//  BinarySearchTree.cpp
//  PIC 10C HW 1
//
//  Created by Michaella Baltazar on 1/15/20.
//  Copyright © 2020 Michaella Baltazar. All rights reserved.
//  Collaborator: Big C++ Textbook
//  "I pledge that I have neither given nor received unauthorized assistance on this assignment."

#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
}

void BinarySearchTree::insert (std::string data)
{
    TreeNode* new_node = new TreeNode;
    new_node->data = data;
    new_node->left = nullptr;
    new_node->right = nullptr;
    if (root == NULL)
        root = new_node;
    else
        root->insert_node(new_node);
}

void BinarySearchTree::kill_tree(TreeNode* tNode)
{
    if (tNode != nullptr)                               // if tNode actually has soemthing
    {
        kill_tree(tNode->left);                         // go one back and recursively call this function
        kill_tree(tNode->right);                        // go one forward and recrusively call this function
        delete tNode;                                   // delete the current node
        tNode = nullptr;                                // set it to nullptr
    }
    else                                                // tNode is already empty
        return;
}

// **** The Big Three **** //
// Destructor
BinarySearchTree::~BinarySearchTree()
{
    kill_tree(root);                                    // call kill_tree to kill the tree
}

TreeNode* BinarySearchTree::copy(const TreeNode* tNode)
{
    if (tNode == nullptr)                               // tNode is empty, just return an emptry pointer
    {
        return nullptr;
    }
    TreeNode* copyCat = new TreeNode();                 // will execute if not empty. Make a new TreeNode()
    copyCat->data = tNode->data;                        // give it tNode's data
    copyCat->left = tNode->left;
    copyCat->right = tNode->right;
    return copyCat;                                     // return this new node
}

// Copy constructor
BinarySearchTree::BinarySearchTree(const BinarySearchTree& tree)
{
    if (tree.root==nullptr)                     // the tree passed by reference is empty
    {
       root = nullptr;                          // this tree is then empty
    }
    else
    {
        copy(tree.root);                        // if there's soemthing in the passed tree, copy the whole                                              thing
    }
}

// Assignment operator
BinarySearchTree& BinarySearchTree::operator=(const BinarySearchTree& tree)
{
    if (this == &tree)                          // this is the same as tree passed by reference
    {
        return *this;                           // just return this
    }
    else
    {
        copy(tree.root);                        // copy passed tree into this
        return *this;                           // return this
    }
}



