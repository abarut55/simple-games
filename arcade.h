/**
 * Fk Barut
 * CS 120
 * Section B
 * Created by Barut on 1/26/23.
 */

#ifndef M1OEP_ABARUT_ARCADE_H
#define M1OEP_ABARUT_ARCADE_H

#include <iostream>
#include <vector>

class ARCADE_Shop {
public:
   /*
    * Default Constructor
    * Requires: nothing
    */
   ARCADE_Shop();

    /*
      * Print intro
      * Requires: nothing
      * Modifies: outs
      * Effects: Prints the intro to my arcade to outs
      */
    static void print_intro(std::ostream &outs);

    /*
      * Print menu
      * Requires: nothing
      * Modifies: outs
      * Effects: Prints the menu to user to outs
      */
    static void print_menu(std::ostream &outs);


    /*
     * Get player choice
     * Requires: nothing
     * Modifies: outs and ins
     * Effects: Prints the options to outs and gets user input. Checks for validity.
     */
    static int get_player_opinion(std::ostream &outs, std::istream &ins);


};


#endif //M1OEP_ABARUT_ARCADE_H
