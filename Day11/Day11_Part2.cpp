#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day11.txt";
    ifstream file(testCases);
    string line;
    getline(file, line);
    stringstream ss(line);
    long long num;
    unordered_map<long long, long long> mp; 
    while(ss >> num) {
        mp[num]++;
    }

    int Rep = 75;
    while(Rep--) {
        unordered_map<long long, long long> newMp;
        for(auto [i, j] : mp) {
            if(i == 0) {
                newMp[1] += j;
            }
            else {
                string data = to_string(i);
                if(data.size() % 2 == 0) {
                    long long left = stoll(data.substr(0, data.size() / 2));
                    long long right = stoll(data.substr(data.size() / 2));
                    newMp[left] += j;
                    newMp[right] += j;
                }
                else {
                    newMp[i * 2024] += j;
                }
            }
        }
        mp = newMp;
    }

    long long res = 0;
    for(auto [i, j] : mp) {
        res += j;
    }

    cout << res << endl;
    return 0;
}
