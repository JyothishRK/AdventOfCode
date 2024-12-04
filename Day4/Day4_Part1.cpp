#include <bits/stdc++.h>
using namespace std;

long long getVertical(vector<string>& lines) {
    long long res = 0;
    int n = lines.size(), m = lines[0].size();
    for(int j = 0; j < m; j++) {
        for(int i = 0; i <= n - 4; i++) {
            string str = "";
            for(int k = 0; k < 4; k++) {
                str += lines[i + k][j];
            }
            if(str == "XMAS") res += 1;
            reverse(str.begin(), str.end());
            if(str == "XMAS") res += 1;
        }
    }

    return res;
}

long long getHorizontal(vector<string>& lines) {
    long long res = 0;
    int n = lines.size(), m = lines[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= m - 4; j++) {
            string str = lines[i].substr(j, 4);
            if(str == "XMAS") res += 1;
            reverse(str.begin(), str.end());
            if(str == "XMAS") res += 1;
        }
    }

    return res;
}

long long getDiagonal(vector<string>& lines) {
    long long res = 0;
    int n = lines.size(), m = lines[0].size();
    for(int i = 0; i <= n - 4; i++) {
        for(int j = 0; j <= m - 4; j++) {
            string diagonal = "";
            for(int k = 0; k < 4; k++) {
                diagonal += lines[i + k][j + k];
            }
            if(diagonal == "XMAS") res += 1;
            reverse(diagonal.begin(), diagonal.end());
            if(diagonal == "XMAS") res += 1;
        }
    }
    for(int i = 0; i <= n - 4; i++) {
        for(int j = 4 - 1; j < m; j++) {
            string diagonal = "";
            for(int k = 0; k < 4; k++) {
                diagonal += lines[i + k][j - k];
            }
            if(diagonal == "XMAS") res += 1;
            reverse(diagonal.begin(), diagonal.end());
            if(diagonal == "XMAS") res += 1;
        }
    }
    return res;
}

int main() {
    string testCases = "Day4.txt";
    ifstream file(testCases);
    string line;
    vector<string> lines;
    while(file >> line) {
        lines.push_back(line);
    }
    long long res = 0;
    res += getVertical(lines);
    res += getHorizontal(lines);
    res += getDiagonal(lines);

    cout << res << endl;
}