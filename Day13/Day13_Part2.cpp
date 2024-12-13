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
        long long res1, res2;
        sscanf(prize.c_str(), "Prize: X=%lld, Y=%lld", &res1, &res2);
        res1 += 10000000000000LL;
        res2 += 10000000000000LL;

        long long det = static_cast<long long>(x1) * y2 - static_cast<long long>(x2) * y1;
        if (det == 0){
            f = false;
        }
        if(f){
            double b = static_cast<double>(res2 * x1 - res1 * y1) / det;
            double a = static_cast<double>(res1 - b * x2) / x1;
            if(fabs(a - round(a)) > 1e-6 || fabs(b - round(b)) > 1e-6) {
                f = false;
            }
            if(f) {
                res += static_cast<long long>(round(a) * 3 + round(b));
            }
        }
    }

    cout << res << endl;
}
