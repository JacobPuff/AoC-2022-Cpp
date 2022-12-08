#include <iostream>
#include <fstream>
using namespace std;

#include "Days.h"

void day5() {
    // Part 1
    day5PartOne();

    // Part 2
    day5PartTwo();
    
}

void day5PartOne() {
    ifstream input;
    input.open("inputs/day5input.txt");

    string line;
    while (input.good()) {
        getline(input, line);
    }
    // 542
    cout << "Part 1, stuff: " << "" << "\n";
}

void day5PartTwo() {
    ifstream input;
    input.open("inputs/day5input.txt");

    string line;
    while (input.good()) {
        getline(input, line);
    }
    // 900
    cout << "Part 2, stuff: " << "" << "\n";
}