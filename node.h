#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <fstream>
#include <string>

class node
{
    public:
        node(std::string key);
        node *left, *right;
        std::string key;
        int data;



    //private:

        //node *left, *right;
        //std::string key;
        //int data;
};

#endif // NODE_H
