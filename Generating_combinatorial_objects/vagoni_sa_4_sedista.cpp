#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int MOD = 1e9 + 7;
int n, m, a[100005], memo[100005][5];

int dp(int i, int j) {
    if (i == n) {
        return (j == 0);
    }
    if (memo[i][j] != -1) {
        return memo[i][j];
    }
    int ans = 0;
    for (int k = 1; k <= min(a[i], 4); k++) {
        if (j >= k) {
            ans = (ans + dp(i + 1, j - k)) % MOD;
        }
    }
    memo[i][j] = ans;
    return ans;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    memset(memo, -1, sizeof memo);
    cout << dp(0, m) << endl;
    return 0;
}