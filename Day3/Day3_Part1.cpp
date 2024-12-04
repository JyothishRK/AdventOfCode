#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day3.txt";
    ifstream file(testCases);
    string line;
    long long res = 0;
    regex valid_mul_regex(R"(mul\((\d+),(\d+)\))");
    smatch match;
    while(file >> line) {
        string::const_iterator search_start(line.cbegin());
        while(regex_search(search_start, line.cend(), match, valid_mul_regex)) {
            int x = stoi(match[1].str());
            int y = stoi(match[2].str());
            res += x * y;
            search_start = match.suffix().first;    
        }
    }

    cout << res << endl;
}