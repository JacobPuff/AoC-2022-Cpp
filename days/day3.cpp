#include <iostream>
#include <fstream>
using namespace std;

#include "Days.h"

int getPriority(char val) {
    int lowerOffset = 'a';
    int upperOffset = 'A';
    int priority = val;
    if (isupper(val)) {
        priority -= upperOffset; // work with "A" as 0
        priority += 27; // offset to give uppercase the required priority
    } else {
        priority -= lowerOffset; // work with "a" as 0
        priority += 1; // offest for priority
    }
    return priority;
}

void day3() {
    int lowerOffset = 'a';
    int upperOffset = 'A';
    cout << "lower: " << lowerOffset << " upper: " << upperOffset << "\n";
    ifstream input;
    input.open("inputs/day3input.txt");
    
    // Part 1
    int prioritySum = 0;
    string line;
    while (input.good()) {
        getline(input, line);
        int half = line.length()/2;
        bool found = false;
        for (int x = 0; x < half; x++) {
            int left = line.at(x);
            for (int y = half; y < line.length(); y++) {
                if (left == line.at(y)) {
                    int val = getPriority(line.at(y));
                    prioritySum += val;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
    }
    // 7446
    cout << "Part 1, sum of duped item type priorities: " << prioritySum << "\n";

    // Part 2
    input.clear();
    input.seekg(0);
    int badgeSum = 0;
    string bag1;
    string bag2;
    string bag3;
    while (input.good()) {
        getline(input, bag1);
        getline(input, bag2);
        getline(input, bag3);
        bool found = false;
        // Bag 1
        for (int x = 0; x < bag1.length(); x++) {
            int first = bag1.at(x);
            // Bag 2
            for (int y = 0; y < bag2.length(); y++) {
                int second = bag2.at(y);
                if (first == second) {
                    // Bag 3
                    for (int z = 0; z < bag3.length(); z++){
                        if (second == bag3.at(z)) {
                            int val = getPriority(bag3.at(z));
                            badgeSum += val;
                            found = true;
                            break;
                        }
                    }
                }
                if (found) {
                    break;
                }
            }
            if (found) {
                break;
            }
        }
    }
    // 2646
    cout << "Part 2, sum of group badge priorities: " << badgeSum << "\n"; 
}