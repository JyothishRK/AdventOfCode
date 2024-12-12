#include <bits/stdc++.h>
using namespace std;

//1930

void traverse(char curr, int& P, int& A, int i, int j, vector<string>& grid, vector<vector<bool>>& vis) {
    if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != curr) {
        P += 1;
        return ;
    }
    if(vis[i][j]) return;

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