#include "Monster.h"
#include <iostream>
using namespace std;

bool test_Monster();

int main() {
    if (test_Monster()) {
        cout << "Passed all Monster test cases" << endl;
    }

    return 0;
}

bool test_Monster() {
    bool passed = true;
    // Test default constructor
    Monster m(100);
    if (m.take_damage(50) != 50) {
        passed = false;
        cout << "FAILED default constructor test case" << endl;
    }
    // Test non-default constructor
    Monster m2(3);
    if (m2.get_health() != 3) {
        passed = false;
        cout << "FAILED non-default constructor test case" << endl;
    }

    // Test take_damage function
    Monster m3(100);
    m3.take_damage(30);
    if (m3.get_health() != 70) {
        passed = false;
        cout << "FAILED take_damage test case" << endl;
    }
    return passed;
}

