#include <bits/stdc++.h>
using namespace std;

int getHiking(int curr, int i, int j, vector<vector<int>>& nums, vector<vector<int>>& vis) {
    if(i < 0 || j < 0 || i >= nums.size() || j >= nums[0].size() || nums[i][j] != curr || vis[i][j] != -1) {
        return 0;
    }
    vis[i][j] = 1;
    if(curr == 9) return 1;
    return getHiking(curr + 1, i + 1, j, nums, vis)
     + getHiking(curr + 1, i, j + 1, nums, vis)
     + getHiking(curr + 1, i - 1, j, nums, vis)
     + getHiking(curr + 1, i, j - 1, nums, vis);
}

int main() {
    string testCases = "Day10.txt";
    ifstream file(testCases);
    string line;
    vector<vector<int>> nums;
    while(file >> line) {
        vector<int> num;
        for(auto i : line){
            num.push_back(i - '0');
        }
        nums.push_back(num);
    }

    long long res = 0;

    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums[i].size(); j++) {
            if(nums[i][j] == 0) {
                vector<vector<int>> vis(nums.size(), vector<int>(nums[0].size(), - 1));
                res += getHiking(0, i, j, nums, vis);
            }
        }
    }

    cout << res << endl;
}