#include <bits/stdc++.h>
using namespace std;

void checkPossible(long long curr, long long target, bool& flag, long long idx, vector<long long>& nums) {
    if(curr == target && idx == nums.size()) {
        flag = true;
    }
    if(idx >= nums.size()) {
        return;
    }
    checkPossible(curr + nums[idx], target, flag, idx + 1, nums);
    checkPossible(curr * nums[idx], target, flag, idx + 1, nums);

}

int main() {
    string testCases = "Day7.txt";
    ifstream file(testCases);
    string line;
    long long res = 0;
    while(getline(file,line)) {
        stringstream ss(line);
        long long ans;
        char symbol;
        ss >> ans >> symbol;
        long long num;
        vector<long long> nums;
        while(ss >> num) {
            nums.push_back(num);
        }

        bool f = false;
        checkPossible(nums[0], ans, f, 1, nums);
        if(f) res += ans;
    }
    cout << res << endl;
}