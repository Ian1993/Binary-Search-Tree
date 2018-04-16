/*Author: Ian Nevills
**Date:4/15/2018
**Program: Binary Search Tree
**File: node.h
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <fstream>
#include <string>

class node
{
    public:
        node(std::string key1);
        node *left, *right;
        std::string key;
        int data;



    //private:

        //node *left, *right;
        //std::string key;
        //int data;
};

#endif // NODE_H
