#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <climits>
using namespace std;

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> output;
        multimap<int, string> Map;

        // Decide which one is smaller
        vector<string> Biggest, smallest;
        if (list1.size() <= list2.size()) {
            Biggest = list2;
            smallest = list1;
        }
        else {
            Biggest = list1;
            smallest = list2;
        }

        int minSum = INT_MAX;

        // Find matches
        for (size_t i = 0; i < smallest.size(); i++) {
            string temp = smallest[i];
            for (size_t j = 0; j < Biggest.size(); j++) {
                if (temp == Biggest[j]) {
                    int sum = i + j;
                    Map.insert({ sum, Biggest[j] });
                    if (sum < minSum) minSum = sum;
                }
            }
        }

        // Collect only those with min sum
        for (auto& p : Map) {
            if (p.first == minSum) {
                output.push_back(p.second);
            }
        }
        return output;
    }
};


