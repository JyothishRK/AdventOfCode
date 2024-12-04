#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "dummy.txt";
    ifstream file(testCases);
    string line;
    long long res = 0;
    while(file >> line) {
        regex valid_mul_regex(R"(mul\((\d+),(\d+)\))");
        regex enable_regex(R"(do\(\))");
        regex disable_regex(R"(don't\(\))");
        bool is_enabled = true;
        smatch match;
        string::const_iterator search_start(line.cbegin());
        
        //Code incomplete :)

    }

    cout << res << endl;
}