// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:

    vector<int> twoSum(vector<int> nums, int target) {
        vector<int>soluation;
        int sum = 0;
        int temp = 0;
        int answer = 0;
        for (int i = 0; i < nums.size(); i++) {
            temp = nums[i];
            for (int j = 0; j < nums.size(); j++){
                if (j == i) {
                    continue;
                }
                else {
                    sum = nums[j] + temp;
                    if (sum == target) {
                        soluation.push_back(i);
                        soluation.push_back(j);


                    }
                }
            }
        }
         
        return soluation;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 2,7,11,15 };
    int target = 9;

    vector<int> result = s.twoSum(nums, target);

    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }
    else {
        cout << "No solution found" << endl;
    }
}


