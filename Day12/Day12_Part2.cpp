#include <bits/stdc++.h>
using namespace std;


bool isTopRight(char curr, int i, int j, vector<string>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    bool check1 = (j + 1 >= m || grid[i][j + 1] != curr);
    bool check2 = (i - 1 < 0 || grid[i - 1][j] != curr);

    return check1 && check2;
}

bool isTopLeft(char curr, int i, int j, vector<string>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    bool check1 = (j - 1 < 0 || grid[i][j - 1] != curr);
    bool check2 = (i - 1 < 0 || grid[i - 1][j] != curr);

    return check1 && check2;
}

bool isBottomRight(char curr, int i, int j, vector<string>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    bool check1 = (j + 1 >= m || grid[i][j + 1] != curr);
    bool check2 = (i + 1 >= n || grid[i + 1][j] != curr);

    return check1 && check2;
}

bool isBottomLeft(char curr, int i, int j, vector<string>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    bool check1 = (j - 1 < 0 || grid[i][j - 1] != curr);
    bool check2 = (i + 1 >= n || grid[i + 1][j] != curr);

    return check1 && check2;
}

bool check1(int i, int j, vector<string>& grid) {
    return (i - 1 >= 0 && j + 1 < grid[0].size()) &&
           grid[i][j] == grid[i][j+1] &&
           grid[i][j] == grid[i-1][j] &&
           grid[i-1][j+1] != grid[i][j];
}

bool check2(int i, int j, vector<string>& grid) {
    return (i + 1 < grid.size() && j + 1 < grid[0].size()) &&
           grid[i][j] == grid[i][j+1] &&
           grid[i][j] == grid[i+1][j] &&
           grid[i+1][j+1] != grid[i][j];
}

bool check3(int i, int j, vector<string>& grid) {
    return (i - 1 >= 0 && j - 1 >= 0) &&
           grid[i][j] == grid[i-1][j] &&
           grid[i][j] == grid[i][j-1] &&
           grid[i-1][j-1] != grid[i][j];
}

bool check4(int i, int j, vector<string>& grid) {
    return (i + 1 < grid.size() && j - 1 >= 0) &&
           grid[i][j] == grid[i+1][j] &&
           grid[i][j] == grid[i][j-1] &&
           grid[i+1][j-1] != grid[i][j];
}

void traverse(char curr, int& P, int& A, int i, int j, vector<string>& grid, vector<vector<bool>>& vis) {
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != curr) {
        return ;
    }
    if(vis[i][j]) return;

    if(isTopRight(curr, i, j, grid)) {
        P += 1;
    }
    if(isTopLeft(curr, i, j, grid)) {
        P += 1;
    }
    if(isBottomRight(curr, i, j, grid)) {
        P += 1;
    }
    if(isBottomLeft(curr, i, j, grid)) {
        P += 1;
    }
    if (check1(i, j, grid)) {
        P += 1;
    }
    if (check2(i, j, grid)) {
        P += 1;
    }
    if (check3(i, j, grid)) {
        P += 1;
    }
    if (check4(i, j, grid)) {
        P += 1;
    }
    
    A += 1;
    vis[i][j] = true;

    traverse(curr, P, A, i + 1, j, grid, vis);
    traverse(curr, P, A, i - 1, j, grid, vis);
    traverse(curr, P, A, i, j + 1, grid, vis);
    traverse(curr, P, A, i, j - 1, grid, vis);

} 

int main() {
    string testCases = "Day12.txt";
    ifstream file(testCases);
    string line;
    vector<string> grid;
    while(getline(file, line)) {
        grid.push_back(line);
    }

    int n = grid.size(), m = grid[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    long long res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!vis[i][j]) {
                int area = 0, perimeter = 0;
                traverse(grid[i][j], perimeter, area, i, j, grid, vis);
                res += area * perimeter;
                // cout << grid[i][j] << " " << area << " " << perimeter << endl;
            }
        }
    } 
    cout << res << endl;
}