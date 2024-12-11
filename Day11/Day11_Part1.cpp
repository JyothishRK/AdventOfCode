#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day11.txt";
    ifstream file(testCases);
    string line;
    getline(file, line);
    stringstream ss(line);
    long long num;
    vector<long long> nums;
    while(ss >> num) {
        nums.push_back(num);
    }
    // for(auto i : nums) {
    //         cout << i << " ";
    //     }
    // cout << endl;
    int Rep = 25;
    while(Rep--) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                nums[i] = 1;
            }
            else {
                string data = to_string(nums[i]);
                if(data.size() % 2 == 0) {
                    nums[i] = stoll(data.substr(0, data.size()/2));
                    nums.push_back(stoll(data.substr(data.size()/2, data.size()/2)));
                }
                else{
                    nums[i] *= 2024;
                }
            }
        }
        // for(auto i : nums) {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
    cout << nums.size() << endl;
}