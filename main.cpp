/*Author: Ian Nevills
**Date:4/15/2018
**Program: Binary Search Tree
**File: main.cpp
*/

#include <iostream>
#include <fstream>
#include <string>
#include "bst.h"
#include "node.h"

using namespace std;

void menuPrinter(bst *userList);
//Arguments: Linked_List userList

/*
List driver, recursive in nature, exits on a press of 8


*/


int main()
{
    bst *userList = new bst();



    menuPrinter(userList);

    return 0;
}

void menuPrinter(bst *userList){

    int userSelection = 0;

    string fileName;

    string itemName;

    fstream infile;

   // int item_index = 0;

    int itemStock = 0;





    cout << "Please choose from the list below" << endl;

    cout << "1: Read a file" << endl;

    cout << "2: Save file" << endl;

    cout << "3: Print your tree" << endl;

    cout << "4: Search for minimum" << endl;

    cout << "5: Search for maximum" << endl;

    cout << "6: Add an item to tree" << endl;

    cout << "7: Delete an item tree" << endl;

    cout << "8: Find the number of instances of a string" << endl;

    cout << "9: Exit" << endl;

    cin >> userSelection;




    if(userSelection == 1){

        cin.get();


        cout << "Please enter the name of the file you wish to open (.txt file extension please)" << endl;

        getline(cin,fileName);

        itemStock = 1;

        infile.open(fileName.c_str());

        while(infile){

            infile >> itemName;

            userList -> set(itemName,itemStock);

        }

        menuPrinter(userList);
    }

    else if(userSelection == 2){

        cout << "Please enter the name of the file you wish to save (.txt file extension please)" << endl;

        cin.get();

        getline(cin,fileName);

        userList->save_file(fileName);

        menuPrinter(userList);
    }

    else if(userSelection == 3){

        userList->print();

        menuPrinter(userList);
    }

    else if(userSelection == 4){



        userList->min();


        menuPrinter(userList);
    }

    else if(userSelection == 5){
        cin.get();

        userList->max();



        menuPrinter(userList);
    }

    else if(userSelection == 6){


        cout << "Please enter the key string you wish to enter" << endl;

        cin >> itemName;

        cout << "Please enter the value you wish to associate with the key" << endl;
        cin >> itemStock;

        userList -> set(itemName,itemStock);


        menuPrinter(userList);
    }

    else if(userSelection == 7){

        cin.get();

        cout << "Please enter the key string you wish to delete" << endl;

        cin.get();

        getline(cin,itemName);

        userList -> del(itemName);



        menuPrinter(userList);
    }

    else if(userSelection == 8){

        cin.get();

        cout << "Please enter the key string you wish to find" << endl;

        cin.get();

        getline(cin,itemName);

        userList -> find(itemName);



        menuPrinter(userList);
    }




}
