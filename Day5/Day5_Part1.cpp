#include <bits/stdc++.h>
using namespace std;

bool is_correct_order(const vector<int>& update, const vector<pair<int, int>>& ordering_rules) {
    unordered_map<int, int> position;
    for (int i = 0; i < update.size(); ++i) {
        position[update[i]] = i;
    }
    
    for (const auto& rule : ordering_rules) {
        int before = rule.first, after = rule.second;
        if (position.count(before) && position.count(after)) {
            if (position[before] > position[after]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    string testCases = "Day5.txt";
    ifstream file(testCases);
    string line;
    vector<pair<int, int>> rules;
    while(getline(file, line)) {
        if(line.empty()) break;
        stringstream ss(line);
        int num1, num2;
        char delim;
        ss >> num1 >> delim >> num2;
        rules.push_back({num1, num2});
    }
    long long res = 0;
    while(getline(file, line)){
        stringstream ss(line);
        vector<int> nums;
        string num;
        while (getline(ss, num, ',')) {
            nums.push_back(stoi(num));
        }
        if(is_correct_order(nums, rules)) {
            res += nums[nums.size() / 2];
        }
        
    }
    cout << res << endl;
}