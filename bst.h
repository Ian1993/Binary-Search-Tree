/*Author: Ian Nevills
**Date:4/15/2018
**Program: Binary Search Tree
**File: bst.h
*/

#ifndef BST_H
#define BST_H

#include <iostream>
#include <fstream>
#include <string>
#include "node.h"

class bst
{
    public:
        bst();
        //Constructor

        ~bst();
        //Destructor

        void set(std::string key1, int val);
        //add function, calls on bstaddhelper for main logic

        void find(std::string key1);
        //calls on bstfindhelper for main logic

        void print();
        //calls on printhelper for main logic


        void min();

        //calls on bstminhelper for main logic

        void max();

        //calls on bstmaxhelper for main logic

        void save_file(std::string name);

        //calls on savehelper for main logic

        void del(std::string key1);

        //calls on bstdelhelper for main logic

    private:

        void bstaddhelper(int val,std::string key1, node *HERE);

        void bstminhelper(node *mover);

        void bstmaxhelper(node *mover);

        void desthelp(node *mover);

        void printhelper(node *nope);

        void savehelper(std::ofstream *file, node *mover);

        void bstdelhelper(std::string key1, node *HERE);

        void bstattachhelper(node *attach, node *mover);

        void findhelper(std::string key1, node *mover);

        node *start;

        std::ofstream out;

        node *mover2;

        node *mover1;

        node *temp;





};

#endif // BST_H
