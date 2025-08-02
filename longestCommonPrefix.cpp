// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string base = strs[0];
        for (int i = 0; i < base.size() ; i++){
            for (int j = 1; j < strs.size(); j++)
            {
                if (i == strs[j].size() || strs[j][i] != base[i]) {
                    return base.substr(0, i); 
                }
            }
        }
        return base;
    }
};

int main()
{
    Solution s;
    vector<string>stings = { "Flower","Flol","Flow"};
    cout<<s.longestCommonPrefix(stings);
}


