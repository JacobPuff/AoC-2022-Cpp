#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

#include "Days.h"
void day1() {
    ifstream input;
    input.open("inputs/day1input.txt");
    vector<vector<int>> elves {};
    string line;

    while (input) {
        vector<int> food {};
        while (true && input) {
            getline(input, line);
            if (line == "") {
                break;
            }
            food.push_back(stoi(line));
        }
        elves.push_back(food);
    }
    
    // Part 1
    int maxCalories = 0;
    for (int e = 0; e < elves.size(); e++) {
        int currentCalories = 0;
        for (int f = 0; f < elves[e].size(); f++) {
            currentCalories += elves[e][f];
        }
        if (currentCalories > maxCalories) {
            maxCalories = currentCalories;
        }
    }
    // 70968
    cout << "Part 1, max calories: " << maxCalories << "\n";

    // Part 2
    vector<int> summedCalories(elves.size());
    for (int e = 0; e < elves.size(); e++) {
        int currentCalories = 0;
        for (int f = 0; f < elves[e].size(); f++) {
            currentCalories += elves[e][f];
        }
        summedCalories[e] = currentCalories;
    }
    sort(summedCalories.begin(), summedCalories.end());
    int len = summedCalories.size();
    int sum = summedCalories[len -1 ] + summedCalories[len-2] + summedCalories[len-3];
    // 206643
    cout << "Part 2, top 3 calorie sum: " << sum << "\n"; 
}