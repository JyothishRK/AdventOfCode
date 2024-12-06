#include <bits/stdc++.h>
using namespace std;

set<tuple<int, int, int>> visited;

void traverseGrid(bool& f, int dir, int X, int Y, vector<string>& grid) {
    vector<pair<int, int>> direction = {
        {-1, 0},
        {0, 1},
        {1, 0},
        {0, -1}
    };

    while(true) {
        if(X < 0 || Y < 0 || X >= grid.size() || Y >= grid[0].size()) {
            break;
        }

        if(visited.count({X, Y, dir})) {
            f = false;
            return;
        }
        visited.insert({X, Y, dir});

        int newX = X + direction[dir].first;
        int newY = Y + direction[dir].second;
        if(newX >= 0 && newY >= 0 && newX < grid.size() && newY < grid[0].size() && grid[newX][newY] == '#') {
            dir = (dir + 1) % 4; 
        } 
        else{
            X = newX;
            Y = newY;
        }
    }
}

int main() {
    string testCases = "Day6.txt";
    ifstream file(testCases);
    vector<string> grid;
    string line;
    while (file >> line) {
        grid.push_back(line);
    }

    int X = -1, Y = -1;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '^') {
                X = i;
                Y = j;
            }
        }
    }

    long long res = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] != '.') continue;

            vector<string> newGrid = grid;
            newGrid[i][j] = '#';
            visited.clear();
            bool f = true;
            traverseGrid(f, 0, X, Y, newGrid);
            if (!f) res++;
        }
    }

    cout << res << endl;
}
