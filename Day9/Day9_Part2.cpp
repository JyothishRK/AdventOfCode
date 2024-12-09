#include <bits/stdc++.h>
using namespace std;

void updateStr(int idx, vector<vector<int>>& newStr) {
    int currStart = newStr[idx][0];
    int currSize = newStr[idx][2];

    for(int i = 0; i < idx; i++) {
        if(newStr[i][1] == -1 && newStr[i][2] >= currSize) {
            int gapStart = newStr[i][0];
            int gapSize = newStr[i][2];
            newStr[idx][0] = gapStart;
            newStr[i][0] += currSize;
            newStr[i][2] -= currSize;

            if(newStr[i][2] == 0) {
                newStr.erase(newStr.begin() + i);
            }
            newStr.push_back({currStart, -1, currSize});
            sort(newStr.begin(), newStr.end());
            break;
        }
    }
}

int main() {
    string testCases = "Day9.txt";
    ifstream file(testCases);
    string line;
    file >> line;
    int id = 0, idx = 0;
    vector<vector<int>> newStr;                                              //{idx, Id, freq}
    bool f = true;
    for(auto i : line) {
        int currId = -1;
        if(f) {           
            currId = id;
            id += 1;
        }
        newStr.push_back({idx, currId, i - '0'});
        idx += i - '0';
        f = !f;
    }

    int n = newStr.size();
    for(int i = n - 1; i >= 0; i--) {
        if(newStr[i][1] != -1) {
            updateStr(i, newStr);
        }
    }

    // for(auto i : newStr) {
    //     for(int j = 0; j < i[2]; j++) {
    //         if(i[1] != -1) cout << i[1];
    //         else cout << ".";
    //     }
    // }
    // cout << endl;

    long long res = 0;
    idx = 0;
    for(int i = 0; i < newStr.size(); i++) {    
        for(int j = 0; j < newStr[i][2]; j++) {
            if(newStr[i][1] != -1){
                res += newStr[i][1] * idx;
            }
            idx += 1;
        }                                                               
    }
    cout << res << endl;
    // string extra = "00...111...2...333.44.5555.6666.777.888899";
    // cout << extra.size() << endl;
}