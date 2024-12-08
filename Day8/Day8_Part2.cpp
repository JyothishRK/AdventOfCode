#include <bits/stdc++.h>
using namespace std;

void getLocation(pair<int, int> a, pair<int, int> b, vector<string>& grid, set<pair<int, int>>& antinodes) {
    int n = grid.size(), m = grid[0].size();

    int xDiff = b.first - a.first;
    int yDiff = b.second - a.second;

    int x1 = a.first - xDiff, y1 = a.second - yDiff;
    int x2 = b.first + xDiff, y2 = b.second + yDiff;

    while(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m) {
        grid[x1][y1] = '#';
        antinodes.insert({x1, y1});
        x1 = x1 - xDiff, y1 = y1 - yDiff;
    }
    while(x2 >= 0 && x2 < n && y2 >= 0 && y2 < m) {
        grid[x2][y2] = '#';
        antinodes.insert({x2, y2});
        x2 = x2 + xDiff, y2 = y2 + yDiff;
    }

    return;
}

int main() {
    string testCases = "Day8.txt";
    ifstream file(testCases);

    vector<string> grid;
    string line;
    while(getline(file, line)) {
        grid.push_back(line);
    }

    int n = grid.size(), m = grid[0].size();

    map<char, vector<pair<int, int>>> mp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] != '.') {
                mp[grid[i][j]].push_back({i, j});
            }
        }
    }

    set<pair<int, int>> antinodes;

    for(auto [i, j] : mp) {
        int size = j.size();
        for(int k = 0; k < size; k++) {
            for(int l = k + 1; l < size; l++) {
                getLocation(j[k], j[l], grid, antinodes);
            }
        }
    }

    long long res = 0;

    for(auto i : grid) {
        for(auto j : i) {
            if(j != '.') {
                res += 1;
            }
        }
    }

    cout << res << endl;

    return 0;
}
