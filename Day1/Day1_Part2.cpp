#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day1.txt";
    ifstream file(testCases);
    vector<int> nums;
    unordered_map<int, long long> mp;
    int data1, data2;
    while(file >> data1 >> data2) {
        nums.push_back(data1);
        mp[data2] += 1;
    }
    long long res = 0;
    for(auto i : nums) {
        //int currVal = (mp.find(i) != mp.end()) ? mp[i] : 0;
        res += i * mp[i];
    }
    cout << res << endl;
}