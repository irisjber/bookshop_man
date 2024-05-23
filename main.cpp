/* 
 * File:   main.cpp
 * Author: ibernab
 * Project Title: Registration System
 * Created on May 10, 2024, 12:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
void menu();
bool confirmOption(int, int);
bool confirmOption(string);
void validOption(string);
void validOption(int);

/*
 * 
 */
int main(int argc, char** argv) {
    
    string option;
    bool valid;
    cout << setw(50) << "Welcome to bookMan\n" << setw(75) 
            << "Please input y to see the menu. To exit the program, input n.\n";
    cin >> option;
    
    valid = confirmOption(option);
    
    if (valid == true) {
        validOption(option);
    }
    else {
        do {
          cout << "Invalid option! Please try again.\n";
          cin >> option;
          
          valid = confirmOption(option);
        } while (valid == false);
        
        validOption(option);
    }
    
    return 0;
}

void menu() {
    int menuOption;
    int amt = 4;
    bool valid;
    system("cls");
    cout << setw(17) << "bookMan Menu\n";
    cout << "(1) View Inventory\n";
    cout << "(2) Edit Inventory\n";
    cout << "(3) Manage Patrons\n";
    cout << "(4) Exit\n";
    
    cin >> menuOption;
    
    valid = confirmOption(menuOption, amt);
    
    if (valid == true) {
        switch (menuOption) {
            
        }
    }
    else {
        do {
            cout << "Invalid option! Please try again.\n";
            cin >> menuOption;
            
            valid = confirmOption(menuOption, amt);
        } while (valid == false);
    }
}

bool confirmOption(string option) {
    bool valid;
    if (option == "y" || option == "Y" || option == "N" || option == "n") {
        return true;
    }
    else {
        return false;
    }
}

bool confirmOption(int option, int amt) {
    bool valid;
    if (option < 0 && option > amt) {
        return false;
    }
    else {
        return true;
    }
}

void validOption(string option) {
    if (option == "Y" || option == "y") {
            menu();
        }
        else {
            cout << "Thank you for using bookMan! Exiting now.\n";
        }
}

void validOption(int) {
    
}