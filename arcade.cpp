/**
 * Fk Barut
 * CS 120
 * Section B
 * Created by Barut on 1/26/23.
 */

#include "arcade.h"
#include <iostream>
#include <regex>

using namespace std;

ARCADE_Shop::ARCADE_Shop() = default;

// Add if more information is required to help user
void ARCADE_Shop::print_intro(ostream &outs) {
    outs << "Welcome to KaraArcade:" << endl;
    outs << "Play the best free Classic Games and Retro Games. \n" << endl;
}

// note: don't uncomment a game to menu until previous game os working correctly
void ARCADE_Shop::print_menu(ostream &outs) {
    outs << "Choose a Game!" << endl;
    outs << "1) Mad Libs" << endl;
    outs << "2) Adventure Time" << endl;
//    outs << "3) Pong" << endl;
    outs << "4) Exit Game" << endl;


}

int ARCADE_Shop::get_player_opinion(ostream &outs, istream &ins) {
    string input;
    bool valid = false;
    int choice;
    cout << "Enter a number corresponding with the game you want to play press 4 to exist: ";
    while (!valid) {
        getline(cin, input);
        if (!input.empty()) {
            if (!regex_match(input, regex("^[1-4]*$"))) {
                cout << "Invalid option. Try again: ";
                cin.clear();
            } else {
                valid = true;
                choice = stoi(input);
            }
        } else {
            cout << "No input. Try again: ";
            cin.clear();
        }
    }
    return choice;
}
