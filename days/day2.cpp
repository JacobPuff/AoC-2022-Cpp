#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

#include "Days.h"
void day2() {
    ifstream input;
    input.open("inputs/day2input.txt");
    vector<string> combos {};
    string line;
    while (input) {
        getline(input, line);
        combos.push_back(line);
    }
    
    // Part 1
    int partOneScore = 0;
    /*
        To look into later.
        For some reason when there is only one line in day2input.txt combos.size() returns 2 and combos[0] == combos[1]
    */
    for (int i = 0; i < combos.size()-1; i++){
        string match = combos[i];
        if (match == "A X"){
            partOneScore += 1 + 3;
        }
        if (match == "A Y"){
            partOneScore += 2 + 6;
        }
        if (match == "A Z"){
            partOneScore += 3 + 0;
        }
        if (match == "B X"){
            partOneScore += 1 + 0;
        }
        if (match == "B Y"){
            partOneScore += 2 + 3;
        }
        if (match == "B Z"){
            partOneScore += 3 + 6;
        }
        if (match == "C X"){
            partOneScore += 1 + 6;
        }
        if (match == "C Y"){
            partOneScore += 2 + 0;
        }
        if (match == "C Z"){
            partOneScore += 3 + 3;
        }
    }
    cout << "Part 1, total score: " << partOneScore << "\n";

    // Part 2
    int partTwoScore = 0;
    for (int i = 0; i < combos.size()-1; i++){
        string match = combos[i];
        if (match == "A X"){
            partTwoScore += 3 + 0;
        }
        if (match == "A Y"){
            partTwoScore += 1 + 3;
        }
        if (match == "A Z"){
            partTwoScore += 2 + 6;
        }
        if (match == "B X"){
            partTwoScore += 1 + 0;
        }
        if (match == "B Y"){
            partTwoScore += 2 + 3;
        }
        if (match == "B Z"){
            partTwoScore += 3 + 6;
        }
        if (match == "C X"){
            partTwoScore += 2 + 0;
        }
        if (match == "C Y"){
            partTwoScore += 3 + 3;
        }
        if (match == "C Z"){
            partTwoScore += 1 + 6;
        }
    }
    cout << "Part 2, total score: " << partTwoScore << "\n"; 
}