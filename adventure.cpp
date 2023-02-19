//
// Created by Abdullah Barut on 2/2/23.
//

#include "adventure.h"
#include <iostream>
#include <regex>


using namespace std;


/************* MadLibs class ******************/

Adventure::Adventure() = default;

void Adventure::message() {
    cout << "_____________________________________________________________________________________" << endl;
    cout << "\nYou've arrived to the Adventure game!\n" << endl;
    cout << "Respond to the following question to contribute with your Adventure:\n" << endl;
}

string Adventure::get_character() {
    string name;
    int valid = 0;
    cout << "Enter character Name: ";
    getline(cin, name);
    while (valid == 0) {
        if (name.empty()) {
            cout << "No input. Enter a single name: ";
            getline(cin, name);
            valid = 0;
        } else if (!(name.empty())) {
            for (int i = 0; i < name.length(); i++) {
                if (isalpha(name[i]) == false || isspace(name[i])) {
                    cout << "Invalid input. Enter a name: ";
                    getline(cin, name);
                    valid = 0;
                } else {
                    valid = 1;
                }
            }
        }
    }
    return name;
}

int Adventure::get_attack() {
    string input_int;
    bool valid = false;
    int num;
    cout << "Enter a Number to attack: 1) kick  2) punch 3) fireball: ";
    while (!valid) {
        getline(cin, input_int);
        if (!input_int.empty()) {
            if (!regex_match(input_int, regex("^[1-3]*$"))) {
                cout << "Invalid input. Enter a attack number 1) kick  2) punch 3) fireball: ";
                cin.clear();
            } else {
                valid = true;
                num = stoi(input_int);
            }
        } else {
            cout << "No input. Enter a attack number 1) kick  2) punch 3) fireball: ";
            cin.clear();
        }
    }
    return num;
}


char Adventure::get_char_input(ostream &outs, istream &ins) {
    string value[] = {"y", "n"};
    string choice;
    ins >> choice;
    getline(cin, choice);
    while (choice.length() != 1 || find(begin(value), end(value), choice) == end(value)) {
        if (choice.empty()) {
            cout << "No input. Enter a single character: ";
            getline(ins, choice);
        }
        outs << endl << "Invalid option try again: " << endl;
        getline(ins, choice);
        ins >> choice;
    }
    return (char) choice[0];
}


