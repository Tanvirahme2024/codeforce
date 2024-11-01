#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxScore(vector<int>& a) {
    int n = a.size();
    vector<int> dp(n, 0);

    int minElement = a[0];
    for (int i = 1; i < n; i++) {
        minElement = min(minElement, a[i]);
        dp[i] = max(dp[i-1], a[i] - minElement);
    }

    return dp[n-1];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxScore = maxScore(a);
        cout << maxScore << endl;
    }

    return 0;
}