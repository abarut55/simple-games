/**
 * Fk Barut
 * CS 120
 * Section B
 */

#include "arcade.h"
#include "madlibs.h"
#include "adventure.h"
#include "Monster.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    // variable
    int choice = 0;

    // shop intro with menu
    ARCADE_Shop::print_intro(cout);
    ARCADE_Shop::print_menu(cout);


    while (choice != 4) {
        choice = ARCADE_Shop::get_player_opinion(cout, cin);
        ofstream outfile("madlibs.txt", std::ofstream::trunc); // create output file stream
        if (choice == 1 && outfile.is_open()) {
            MadLibs::message();
            string name = MadLibs::get_name();
            string noun = MadLibs::get_noun();
            string celebrity = MadLibs::get_celebrity();
            int number = MadLibs::get_number();
            outfile << "\nHere's your story:";
            outfile << "\nThe well-known crazy person " << name;
            outfile << " has embarked on a new mission with their new companion and ex-lover " << celebrity;
            outfile << ". \nTo defeat the scariest " << noun << "'s";
            outfile << " when one day, as they where walking a " << noun;
            outfile << " hit you in the face.\n\n";
            outfile << "when you got up there was " << number << " " << noun;
            outfile << ", you and your " << celebrity << " started to run screaming at each other when " << celebrity;
            outfile << " started to go crazy and started to slap the " << noun << "'s.\nAs you where fighting "
                 << celebrity;
            outfile << " accidental slaps a " << noun << " your way. \nYou couldn't dodge the " << noun;
            outfile << ". You pass away! ";
            outfile << "\n\nThe moral of the story?... Be careful";
            outfile.close(); // close the output file stream
            cout << "\n--------------------Check file madlibs.txt-----------------------------------------------\n";
        } else if (choice == 2) {
            Adventure game;

            //Game intro
            cout << "\nYou've arrived to the Adventure game!\n" << endl;
            cout << "Respond to the following question to contribute with your Adventure:\n" << endl;
            string character = game.get_character();
            cout << "Your goal is to defeat the monsters that have taken over the kingdom." << endl;
            cout << "Legend has it that the monsters have been terrorizing the kingdom for years." << endl;
            cout << "The king has promised a reward to anyone who can defeat them and restore peace to the kingdom."
                 << endl;
            cout << "Are you brave enough, " << character << ", to take on this quest? Let's find out!\n" << endl;

            int life = game.get_life();
            std::cout << "Your starting life is: " << life << std::endl;

            char adven_choice;
            Monster monster(3);
            int monsterLife = monster.get_health();
            cout << "You encounter a ferocious goblin monster with " << monster.get_health()
                 << " life. Do you want to fight? (y/n)" << endl;
            adven_choice = Adventure::get_char_input(cout, cin);
            if (adven_choice == 'y') {
                while (monster.get_health() > 0) { // loop until monster's life reaches 0
                    int attack = Adventure::get_attack();
                    switch (attack) {
                        case 1:
                            cout << character << " kicks the monster!" << endl;
                            monster.take_damage(1);
                            break;
                        case 2:
                            cout << character << " punches the monster!" << endl;
                            monster.take_damage(1);
                            break;
                        case 3:
                            cout << character << " casts a fireball spell at the monster!" << endl;
                            monster.take_damage(2);
                            break;
                    }
                    if (monster.get_health() <= 0) {
                        cout << "Congratulations! You defeated the monster!" << endl;
                        break;
                    }
                     cout << "Monster's health: " << monster.get_health() << endl;
                    // monster's attack
                    int monster_attack = rand() % 3 + 1; // generate a random number between 1 and 3
                    switch (monster_attack) {
                        case 1:
                            cout << "The monster bites you!" << endl;
                            life -= 10;
                            break;
                        case 2:
                            cout << "The monster claws you!" << endl;
                            life -= 30;
                            break;
                        case 3:
                            cout << "The monster spits poison at you!" << endl;
                            life -= 50;
                            break;
                    }
                    cout << "Your life is now " << life << "." << endl;

                    if (life <= 0) {
                        cout << "You have died!" << endl;
                        break;
                    }
                }
            } else {
                cout << "You turn around and run away!" << endl;
            }
        }
    }
    return 0;
}