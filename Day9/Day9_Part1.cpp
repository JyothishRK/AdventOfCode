#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day9.txt";
    ifstream file(testCases);
    string line;
    file >> line;
    int id = 0;
    vector<int> newStr;
    bool f = true;
    for(auto i : line) {
        int currId = -1;
        if(f) {           
            currId = id;
            id += 1;
        }
        for(int j = 0; j < i - '0'; j++) {
            newStr.push_back(currId);
        }
        f = !f;
    }

    vector<int> fixGap;
    int l = 0, r = newStr.size() - 1;
    while(l <= r) {
        if(newStr[l] == -1) {
            while(r > l && newStr[r] == -1) {
                r -= 1;
            }
            fixGap.push_back(newStr[r]);
            r -= 1;
        }
        else {
            fixGap.push_back(newStr[l]);
        }
        l += 1;
    }

    // cout << fixGap.size() << endl;

    long long res = 0;
    for(int i = 0; i < fixGap.size(); i++) {
        res += i * fixGap[i];
    }
    cout << res << endl;
}