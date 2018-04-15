#include "bst.h"
#include <iostream>
#include <fstream>
#include <string>
#include "node.h"

bst::bst()
{
    start = NULL;

    mover = start;
    //ctor
}

bst::~bst()
{
    mover = start;
    desthelp(mover);
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

    if(start == NULL){

        start = new node(key1);

        start ->data = val;
    }
    else if (start != NULL){
        //if
    }

    mover = start;

}

void bst::bstaddhelper(std::string key1, node *HERE){

    if(mover == NULL){


    }
    else if (mover -> key < key1){

        mover = mover -> right;

        bstaddhelper(key1,mover);
    }
    else if (mover -> key > key1){

        mover = mover -> left;

        bstaddhelper(key1,mover);
    }


}

void bst::bstdelhelper(std::string key1, node *HERE){

    if(mover == NULL){


    }
    else if (mover -> key < key1){

        mover = mover -> right;

        bstaddhelper(key1,mover);
    }
    else if (mover -> key > key1){

        mover = mover -> left;

        bstaddhelper(key1,mover);
    }


}

void bst::bstminhelper(node *mover){



    if(mover -> left == NULL){


    }
    else if (mover -> left != NULL){

        mover = mover -> left;

        bstminhelper(mover);
    }



}

void bst::bstmaxhelper(node *mover){



    if(mover -> right == NULL){


    }
    else if (mover -> right != NULL){

        mover = mover -> right;

        bstminhelper(mover);
    }



}

int bst::find(std::string key1){

    int x = 0;

    return x;
}

void bst::printhelper(node *nope){

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

    mover = start;

    printhelper(mover);


}

void bst::min(){



    mover = start;



    bstminhelper(mover);

    std::cout << "The minimum is: " << mover -> key << " " << mover -> data << std::endl;

}

void bst::max(){



    mover = start;



    bstmaxhelper(mover);


    std::cout << "The minimum is: " << mover -> key << " " << mover -> data << std::endl;

}

void bst::save_file(std::string name){

    mover = start;

    out.open((name+".txt").c_str());

    std::ofstream *temp;

    temp = &out;

    savehelper(temp,mover);

    out.close();

}

void bst::del(std::string key1){

}
