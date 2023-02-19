//
// Created by Abdullah Barut on 1/30/23
//

#ifndef M1OEP_ABARUT_MADLIBS_H
#define M1OEP_ABARUT_MADLIBS_H

#include <iostream>

using namespace std;

class MadLibs {
public:
    /*
    * Default Constructor
    * Requires: nothing
    */
    MadLibs();

    /*
     * Get nothing
     * Requires: nothing
     * Modifies: prints the message
     */
    static void message();

    /*
     * Get number from user
     * Requires: int num
     * Modifies: num
     */
    static int get_number();

    /*
     * Get name from user
     * Requires: string name
     * Modifies: name
     */
    static string get_name();

    /*
     * Get noun from user
     * Requires: string noun
     * Modifies: noun
     */
    static string get_noun();

    /*
     * Get celebrity from user
     * Requires: string celebrity
     * Modifies: celebrity
     */
    static string get_celebrity();

};

#endif //M1OEP_ABARUT_MADLIBS_H
