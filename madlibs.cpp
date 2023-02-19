//
// Created by Abdullah Barut on 1/30/23.
//


#include "madlibs.h"
#include <iostream>
#include <regex>


using namespace std;


/************* MadLibs class ******************/

MadLibs::MadLibs() = default;

int MadLibs::get_number() {
    string input_int;
    bool valid = false;
    int num;
    cout << "Enter a Number: ";
    while (!valid) {
        getline(cin, input_int);
        if (!input_int.empty()) {
            if (!regex_match(input_int, regex("^[0-9]*\\-?[0-9]+$"))) {
                cout << "Invalid input. Enter a number: ";
                cin.clear();
            } else {
                valid = true;
                num = stoi(input_int);
            }
        } else {
            cout << "No input. Enter a number: ";
            cin.clear();
        }
    }
    return num;
}

string MadLibs::get_name() {
    string name;
    int valid = 0;
    cout << "Enter a Name: ";
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

string MadLibs::get_noun() {
    string noun;
    int valid = 0;
    cout << "Enter a single noun: ";
    getline(cin, noun);
    while (valid == 0) {
        if (noun.empty()) {
            cout << "No input. Enter a noun: ";
            getline(cin, noun);
            valid = 0;
        } else if (!(noun.empty())) {
            for (int i = 0; i < noun.length(); i++) {
                if (isalpha(noun[i]) == false || isspace(noun[i])) {
                    cout << "Invalid input. Enter a noun: ";
                    getline(cin, noun);
                    valid = 0;
                } else {
                    valid = 1;
                }
            }
        }
    }
    return noun;
}

string MadLibs::get_celebrity() {
    string celebrity;
    cout << "Enter a celebrity name: ";
    getline(cin, celebrity);
    while (celebrity.length() == 0) {
        cout << "No input. Enter a celebrity name: ";
        getline(cin, celebrity);
    }
    return celebrity;
}

void MadLibs::message(){
        cout << "_____________________________________________________________________________________" << endl;
        cout << "\nYou've arrived to the Mad Libs game!\n" << endl;
        cout << "Respond to the following question to contribute with storyline formation:\n" << endl;
}






