/**
 * Fk Barut
 * CS 120
 * Section B
 */

#include "arcade.h"
#include "madlibs.h"
#include "adventure.h"


using namespace std;

int main() {
    // variable
    int choice = 0;

    // shop intro with menu
    ARCADE_Shop::print_intro(cout);
    ARCADE_Shop::print_menu(cout);

    // fix this loop
    while (choice != 4) {
        choice = ARCADE_Shop::get_player_opinion(cout, cin);

        if (choice == 1) {
            MadLibs::message();
            string name = MadLibs::get_name();
            string noun = MadLibs::get_noun();
            string celebrity = MadLibs::get_celebrity();
            int number = MadLibs::get_number();
            cout << "\nHere's your story:";
            cout << "\nThe well-known crazy person " << name;
            cout << " has embarked on a new mission with their new companion and ex-lover " << celebrity;
            cout << ". \nTo defeat the scariest " << noun << "'s";
            cout << " when one day, as they where walking a " << noun;
            cout << " hit you in the face.\n\n";
            cout << "when you got up there was " << number << " " << noun;
            cout << ", you and your " << celebrity << " started to run screaming at each other when " << celebrity;
            cout << " started to go crazy and started to slap the " << noun << "'s.\nAs you where fighting "
                 << celebrity;
            cout << " accidental slaps a " << noun << " your way. \nYou couldn't dodge the " << noun;
            cout << ". You pass away! ";
            cout << "\n\nThe moral of the story?... Be careful";
            cout << "\n--------------------leaving MAD LIBS game-----------------------------------------------\n";
        } else if (choice == 2) {
            Adventure game;

            //Game intro
            cout << "\nYou've arrived to the Adventure game!\n" << endl;
            cout << "Respond to the following question to contribute with your Adventure:\n" << endl;
            string character = game.get_character();
            cout << "Your goal is to defeat the monsters that have taken over the kingdom." << endl;
            cout << "Legend has it that the monsters have been terrorizing the kingdom for years." << endl;
            cout << "The king has promised a reward to anyone who can defeat them and restore peace to the kingdom." << endl;
            cout << "Are you brave enough, " << character << ", to take on this quest? Let's find out!\n" << endl;

            char choice;
            int monster_life = 3; // setting monster's life to 3
            cout << "You encounter a ferocious goblin monster with " << monster_life << " life. Do you want to fight? (y/n)" << endl;            choice = game.get_char_input(cout, cin);
            if (choice == 'y') {
                while (monster_life > 0) { // loop until monster's life reaches 0
                    int attack = game.get_attack();
                    switch (attack) {
                        case 1:
                            cout << character << " kicks the monster!" << endl;
                            monster_life-= 1;
                            break;
                        case 2:
                            cout << character << " punches the monster!" << endl;
                            monster_life-= 1;
                            break;
                        case 3:
                            cout << character << " casts a fireball spell at the monster!" << endl;
                            monster_life-= 2;
                            break;
                    }
                    cout << "The monster has " << monster_life << " life remaining." << endl;
                }
                cout << "Congratulations! You defeated the monster!" << endl;
            } else {
                cout << "You turn around and run away!" << endl;
            }
        }
    }
    return 0;
}