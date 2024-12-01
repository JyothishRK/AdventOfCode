#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day1.txt";
    ifstream file(testCases);
    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1; // Exit with error code
    }
    vector<int> a, b;
    int data1, data2;
    while(file >> data1 >> data2){
        cout << data1 << " " << data2 << endl;
        a.push_back(data1);
        b.push_back(data2);
    }
    for(auto i : a) {
        cout << i << " ";
    }
    cout << endl;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long res = 0;
    for(int i = 0; i < a.size(); i++) {
        res += abs(a[i] - b[i]);
    }
    cout << res << endl;
}