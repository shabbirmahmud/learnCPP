#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    if (n >= 1 && n <= 1000 && k >= 1 && k <= 1000 && l >= 1 && l <= 1000 &&
        c >= 1 && c <= 1000 && d >= 1 && d <= 1000 && p >= 1 && p <= 1000 &&
        nl >= 1 && nl <= 1000 && np >= 1 && np <= 1000) {
        
        int totalDrinkToast = (k * l) / nl;
        int totalLimeToast = c * d;
        int totalSaltToast = p / np;

        int totalToast = min(min(totalDrinkToast, totalLimeToast), totalSaltToast);
        int eachToast = totalToast / n;

        cout << eachToast << endl;
    }

    return 0;
}
