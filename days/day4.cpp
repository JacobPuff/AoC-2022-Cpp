#include <iostream>
#include <fstream>
using namespace std;

#include "Days.h"

void day4() {
    // Part 1
    day4PartOne();

    // Part 2
    day4PartTwo();
    
}

void day4PartOne() {
    ifstream input;
    input.open("inputs/day4input.txt");

    int fullyContainedCount = 0;
    string line;
    while (input.good()) {
        getline(input, line);
        string groupOne = line.substr(0, line.find(","));
        string groupTwo = line.substr(line.find(",")+1, line.length());
        
        int groupOneSplit = groupOne.find("-");
        int groupTwoSplit = groupTwo.find("-");
        
        int groupOneStart = stoi(groupOne.substr(0, groupOneSplit));
        int groupOneEnd = stoi(groupOne.substr(groupOneSplit+1, groupOne.length()));
        
        int groupTwoStart = stoi(groupTwo.substr(0, groupTwoSplit));
        int groupTwoEnd = stoi(groupTwo.substr(groupTwoSplit+1, groupTwo.length()));


        if (groupOneStart <= groupTwoStart && groupOneEnd >= groupTwoEnd) {
            fullyContainedCount += 1;
        } else if (groupTwoStart <= groupOneStart && groupTwoEnd >= groupOneEnd) {
            fullyContainedCount += 1;
        }

    }
    // 542
    cout << "Part 1, fully contained groups: " << fullyContainedCount << "\n";
}

void day4PartTwo() {
    ifstream input;
    input.open("inputs/day4input.txt");

    int overlappingSections = 0;
    string line;
    while (input.good()) {
        getline(input, line);
        string groupOne = line.substr(0, line.find(","));
        string groupTwo = line.substr(line.find(",")+1, line.length());
        
        int groupOneSplit = groupOne.find("-");
        int groupTwoSplit = groupTwo.find("-");
        
        int groupOneStart = stoi(groupOne.substr(0, groupOneSplit));
        int groupOneEnd = stoi(groupOne.substr(groupOneSplit+1, groupOne.length()));
        
        int groupTwoStart = stoi(groupTwo.substr(0, groupTwoSplit));
        int groupTwoEnd = stoi(groupTwo.substr(groupTwoSplit+1, groupTwo.length()));


        if (groupOneStart >= groupTwoStart && groupOneStart <= groupTwoEnd) {
            overlappingSections += 1;
        } else if (groupTwoStart >= groupOneStart && groupTwoStart <= groupOneEnd) {
            overlappingSections += 1;
        }

    }
    // 542
    cout << "Part 2, overlapping sections: " << overlappingSections << "\n";
}