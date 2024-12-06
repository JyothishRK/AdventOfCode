#include <bits/stdc++.h>
using namespace std;

void traverseGrid(int dir, int X, int Y, vector<string>& grid) {
    if(X < 0 || Y < 0 || X >= grid.size() || Y >= grid[0].size()) {
        return;
    }
    grid[X][Y] = 'X';
    vector<pair<int,int>> direction = {
        {-1 , 0},
        {0 , 1},
        {1, 0},
        {0 ,-1}
    };
    int newX = X + direction[dir].first, newY = Y + direction[dir].second;
    if(newX >= 0 && newY >= 0 && newX < grid.size() && newY < grid[0].size() && grid[newX][newY] == '#') {
        dir = (dir + 1) % 4;
        traverseGrid(dir, X, Y, grid);
    }
    else {
        traverseGrid(dir, newX, newY, grid);
    }
}

int main() {
    string testCases = "Day6.txt";
    ifstream file(testCases);
    vector<string> grid;
    string line;
    while(file >> line) {
        grid.push_back(line);
    }
    int X = -1, Y = -1;
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[0].size(); j++) {
            if(grid[i][j] == '^') {
                X = i;
                Y = j;
            }
        }
    }
    traverseGrid(0, X, Y, grid);
    long long res = 0;
    for(auto i : grid) {
        for(auto j : i) {
            // cout << j << " ";
            if(j == 'X') {
                res += 1;
            }
        }
        // cout << endl;
    }

    cout << res << endl;
}