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
#define M 1000000007

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> dp(n + 1);
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1];
        if(i > 1 && v[i - 1] + v[i - 2] < 4) {
            dp[i] = (dp[i] + dp[i - 2]) % M;
        }
        if(i > 1 && v[i - 1] + v[i - 2] + v[i - 3] < 4) {
            dp[i] = (dp[i] + dp[i - 3]) % M;
        }
    }
    cout << dp[n] << endl;

    return 0;
}
