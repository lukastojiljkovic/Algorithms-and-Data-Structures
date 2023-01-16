#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <queue>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <stack>
#include <utility>
#include <numeric>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int MOD = 1e9 + 7;
    int n, a[100005], dp[100005][5];

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= 4; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= 1 && a[i] >= 1) dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
            if (j >= 2 && a[i] >= 2) dp[i][j] = (dp[i][j] + dp[i-1][j-2]) % MOD;
            if (j >= 3 && a[i] >= 3) dp[i][j] = (dp[i][j] + dp[i-1][j-3]) % MOD;
            if (j >= 4 && a[i] >= 4) dp[i][j] = (dp[i][j] + dp[i-1][j-4]) % MOD;
        }
    }
    cout << dp[n][0] << endl;
    
    return 0;
}
