#include <bits/stdc++.h>
using namespace std;

int main() {
    string testCases = "Day13.txt";
    ifstream file(testCases);
    string buttonA, buttonB, prize;
    
    long long res = 0;

    while(getline(file, buttonA)) {
        if(buttonA.empty()) continue; 
        getline(file, buttonB);
        getline(file, prize);

        bool f = true;

        int x1, y1;
        sscanf(buttonA.c_str(), "Button A: X+%d, Y+%d", &x1, &y1);
        int x2, y2;
        sscanf(buttonB.c_str(), "Button B: X+%d, Y+%d", &x2, &y2);
        int res1, res2;
        sscanf(prize.c_str(), "Prize: X=%d, Y=%d", &res1, &res2);

        int det = x1 * y2 - x2 * y1;
        if(det == 0) {
            f = false;
        }

        if(f) {
            float b = (res2 * x1 - res1 * y1) / (x1 * y2 - x2 * y1);
            float a = (res1 - b * x2) / x1;
            if(ceil(a) != floor(a) || ceil(b) != floor(b)) f = false;
            // cout << a << " " << b << endl;
            if(f) {
                if(a <= 100 && b <= 100) {
                    res += (int)(a * 3 + b);
                }
            }
        }

    }

    cout << res << endl;
}
