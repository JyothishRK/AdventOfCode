#include <bits/stdc++.h>
using namespace std;

bool isXMAS(vector<string>& lines, int i, int j){
    return 
    (lines[i][j] == 'M' && lines[i + 2][j] == 'M' && lines[i + 1][j + 1] == 'A' &&
         lines[i][j + 2] == 'S' && lines[i + 2][j + 2] == 'S') ||
    (lines[i][j] == 'S' && lines[i + 2][j] == 'S' && lines[i + 1][j + 1] == 'A' &&
        lines[i][j + 2] == 'M' && lines[i + 2][j + 2] == 'M') ||
    (lines[i][j] == 'M' && lines[i][j + 2] == 'M' && lines[i + 1][j + 1] == 'A' &&
        lines[i + 2][j] == 'S' && lines[i + 2][j + 2] == 'S') ||
    (lines[i][j] == 'S' && lines[i][j + 2] == 'S' && lines[i + 1][j + 1] == 'A' &&
        lines[i + 2][j] == 'M' && lines[i + 2][j + 2] == 'M');
}

int main() {
    string testCases = "Day4.txt";
    ifstream file(testCases);
    string line;
    vector<string> lines;
    while(file >> line) {
        lines.push_back(line);
    }
    int n = lines.size(), m = lines[0].size();
    long long res = 0;
    for(int i = 0; i <= n - 3; i++) {
        for(int j = 0; j <= m - 3; j++) {
            if(isXMAS(lines, i, j)) res += 1;
        }
    }
    cout << res << endl;
}
