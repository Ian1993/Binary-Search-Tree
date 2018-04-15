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

        virtual ~bst();

        void set(std::string key1, int val);

        int find(std::string key1);

        void print();

        void min();

        void max();

        void save_file(std::string name);

        void del(std::string key1);

        //node bsthelper(std::string key1, node HERE);

    private:

        void bstaddhelper(std::string key1, node *HERE);

        void bstminhelper(node *mover);

        void bstmaxhelper(node *mover);

        void desthelp(node *mover);

        void printhelper(node *nope);

        void savehelper( std::ofstream *file, node *mover);

        void bstdelhelper(std::string key1, node *HERE);

        node *start;

        std::ofstream out;

        node *mover;



};

#endif // BST_H
