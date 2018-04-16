/*Author: Ian Nevills
**Date:4/15/2018
**Program: Binary Search Tree
**File: bst.cpp
*/

#include "bst.h"
#include <iostream>
#include <fstream>
#include <string>
#include "node.h"

bst::bst()
{
    start = NULL;


    //ctor
}

bst::~bst()
{

    desthelp(start);
    //dtor
}

void bst::desthelp(node *mover){

    if(mover != NULL){

        desthelp(mover -> left);
        desthelp(mover -> right);

        delete mover;

    }

}

void bst::set(std::string key1, int val){



    //mover1 = start;

    if(start == NULL){

        start = new node(key1);

        start -> data = val;
    }
    else{

        bstaddhelper(val,key1,start);

    }




}

void bst::bstaddhelper(int val,std::string key1, node *mover){

    if(mover -> key > key1){
        if(mover -> left == NULL){
            mover -> left = new node(key1);
            mover -> left -> data = val;
        }
        else{
            bstaddhelper(val,key1,mover -> left);
        }


    }

    else if(mover -> key == key1){

        mover -> data = mover -> data + val;

    }

    else{

        if(mover -> right == NULL){
            mover -> right = new node(key1);
            mover -> right -> data = val;
        }
        else{
            bstaddhelper(val,key1,mover -> right);
        }


    }

    //return *mover;
}

void bst::bstattachhelper(node *attach, node *mover){

    if(mover -> key > attach -> key){
        if(mover -> left == NULL){
            mover -> left = attach;

        }
        else{
            bstattachhelper(attach,mover -> left);
        }


    }

    else{

        if(mover -> right == NULL){
            mover -> right = attach;

        }
        else{
            bstattachhelper(attach,mover -> right);
        }


    }

    //return *mover;
}



void bst::bstdelhelper(std::string key1, node *mover){

    if(mover == NULL){


    }
    else if (mover -> key < key1){


        bstdelhelper(key1,mover->right);
    }
    else if (mover -> key > key1){


        bstdelhelper(key1,mover->left);

    }
    else if(mover -> left == NULL && mover -> right == NULL){

        delete mover;

    }

    else{

        if(mover -> left == NULL){

            temp = mover -> right;

            bstattachhelper(temp, start);

            delete mover;


        }

        else if(mover -> right == NULL){

            temp = mover -> right;

            bstattachhelper(temp, start);

            delete mover;


        }
        else{

            temp = mover -> right;
            mover1 = NULL;

            while(temp -> left != NULL){
                mover1 = temp;
                temp = temp -> left;
            }

            mover -> key = temp -> key;

            mover -> data = temp -> data;



        }

        if(mover1 != NULL){
            bstdelhelper(mover1 -> left -> key, mover1 -> left);
        }
        else{

            bstdelhelper(mover1 -> right -> key, mover1 -> right);
        }


    }


}

void bst::bstminhelper(node *mover){



    if(mover -> left == NULL){

        std::cout << "The minimum is: " << mover -> key << " " << mover -> data << std::endl;
    }
    else if (mover -> left != NULL){

        mover = mover -> left;

        bstminhelper(mover);
    }



}

void bst::bstmaxhelper(node *mover){



    if(mover -> right == NULL){

        std::cout << "The minimum is: " << mover -> key << " " << mover -> data << std::endl;
    }
    else if (mover -> right != NULL){

        mover = mover -> right;

        bstminhelper(mover);
    }



}

void bst::findhelper(std::string key1, node *mover){

    if(mover -> key != key1){
        findhelper(key1,mover->left);
        findhelper(key1,mover->right);
    }
    std::cout << key1 << " " << mover -> data << std::endl;

}

void bst::find(std::string key1){

   findhelper(key1,start);
}

void bst::printhelper(node *mover){

    if(mover !=NULL){

      printhelper(mover -> left);
      printhelper(mover -> right);

      std::cout << mover -> key << " " << mover -> data << std::endl;

    }

    //return *mover;
}

void bst::savehelper(std::ofstream *file, node *mover){

    if(mover!=NULL){

        savehelper(file ,mover -> left);
        savehelper(file ,mover -> right);

        *file << mover -> key << " " << mover -> data << std::endl;
    }


}

void bst::print(){



    printhelper(start);


}

void bst::min(){







    bstminhelper(start);



}

void bst::max(){







    bstmaxhelper(start);




}

void bst::save_file(std::string name){



    out.open(name.c_str());

    std::ofstream *temp;

    temp = &out;

    savehelper(temp,start);

    out.close();

}

void bst::del(std::string key1){


    bstdelhelper(key1,start);
}
