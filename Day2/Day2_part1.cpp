#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<int>& nums) {
    int n = nums.size();
    bool f = false;
    int prev = nums[0];
    if(nums[0] < nums[1]) f = true;
    for(int i = 1; i < n ; i++) {
        if(f && (prev >= nums[i] || nums[i] - prev > 3)) {
            return false;
        }
        else if(!f && (prev <= nums[i] || prev - nums[i] > 3)) {
            return false;
        }
        else{
            prev = nums[i];
        }
    }
    return true;
}

int main() {
    string testCases = "Day2.txt";
    ifstream file(testCases);
    string line;
    long long res = 0;
    while(getline(file, line)) {
        stringstream ss(line);
        vector<int> nums;
        int num;
        while(ss >> num) {
            nums.push_back(num);
        }

        if(isSafe(nums)) res += 1;
    }
    cout << res << endl;
}