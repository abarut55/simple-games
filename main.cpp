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
            Adventure::message();
            char ask = 'y';
            string adventure_name = Adventure::get_character();
            cout << " Once upon a time, there was a brave adventurer " << adventure_name;
            cout << " who lived in a world filled with dangerous monsters that was harming a town.\n";
            // TODO fix y/n so that input is validated
            cout << " Would you like to go defeat the monsters [y/n]:";
            ask = Adventure::get_char_input(cout, cin);
            while (ask != 'y' || ask != 'n')
                ask = Adventure::get_char_input(cout, cin);
            if (ask == 'y') {
                cout << "The town hears how brave you are and hope for your safety." << endl;
                cin >> ask;
            } else if (ask == 'n') {
                cout << "The town hears how you ran away like a coward." << endl;
                cout<< "\n--------------------leaving Adventurer game-----------------------------------------------\n";
                cin.ignore(1);
            }

        }
    }
    return 0;
}