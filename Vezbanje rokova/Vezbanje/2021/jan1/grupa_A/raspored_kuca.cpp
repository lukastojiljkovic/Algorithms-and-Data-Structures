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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> dp(n);
    for(int i = 2; i < n; i++) {
        dp[i] = max(v[i] + dp[i - 1], 2 * max(v[i], v[i - 1]) + dp[i - 2]);
    }

    cout << dp[n - 1] << endl;

    return 0;
}
