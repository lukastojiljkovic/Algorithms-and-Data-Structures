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
    long long t;
    cin >> n >> t;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long zbir = a[0];
    int l = 0, d = 0, m = 0;

    while(d < n) {
        if(zbir < t) {
            d++;
            zbir += a[d];
            m = max(m, d - l + 1);
        }
        else {
            zbir -= a[l];
            l++;
        }
    }

    if(m == n + 1) {
        cout << 0 << endl;
    }
    else {
        cout << m << endl;
    }

    return 0;
}
