//
// Created by Abdullah Barut on 2/2/23.
//

#ifndef M1OEP_ABARUT_ADVENTURE_H
#define M1OEP_ABARUT_ADVENTURE_H

#include <iostream>

using namespace std;

class Adventure {
private:
    int life = 100; // set initial life to 100
public:
    /*
    * Default Constructor
    * Requires: nothing
    * Initializes characterName and attackPower to default values
    */
    Adventure();

    /*
     * Get number from user for attack
     * Requires: int num
     * Modifies: num to choice the one of the four skills
     */
    static int get_attack();

    /*
     * Get user info to build character
     * Requires: string name
     * Modifies: name
     */
    static string get_character();


/*
     * get user answer for yes/no questions
     * Requires: string answer
     * Modifies: checks if input is correct
     */
    static char get_char_input(std::ostream &outs, std::istream &ins);

    /*
     * Get user's current life
     * Requires: nothing
     * Modifies: nothing
     * Returns: int representing user's life
     */
    int get_life();
};


#endif //M1OEP_ABARUT_ADVENTURE_H
