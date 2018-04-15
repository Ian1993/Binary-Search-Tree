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
    bst *userList;

    userList = new bst();

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

    int threshold = 0;



    cout << "Please choose from the list below" << endl;

    cout << "1: Read a file" << endl;

    cout << "2: Save file" << endl;

    cout << "3: Print your inventory list" << endl;

    cout << "4: Search for inventory below a threshold" << endl;

    cout << "5: Search for the inventory of a particular item" << endl;

    cout << "6: Add an item to the list" << endl;

    cout << "7: Delete an item from the list" << endl;

    cout << "8: Exit" << endl;

    cin >> userSelection;




    if(userSelection == 1){

        cin.get();


        cout << "Please enter the name of the file you wish to open (.txt file extension please)" << endl;

        getline(cin,fileName);



        menuPrinter(userList);
    }

    else if(userSelection == 2){

        cout << "Please enter the name of the file you wish to save (.txt file extension please)" << endl;

        cin.get();

        getline(cin,fileName);



        menuPrinter(userList);
    }

    else if(userSelection == 3){



        menuPrinter(userList);
    }

    else if(userSelection == 4){

        cout << "Please enter an integer stock threshold below which you wish to search:" << endl;

        cin >> threshold;



        menuPrinter(userList);
    }

    else if(userSelection == 5){
        cin.get();

        cout << "Please enter an item name you wish to search for the stock of" << endl;

        getline(cin,itemName);



        menuPrinter(userList);
    }

    else if(userSelection == 6){


        cin.get();




        menuPrinter(userList);
    }

    else if(userSelection == 7){

        cin.get();



        menuPrinter(userList);
    }



}
