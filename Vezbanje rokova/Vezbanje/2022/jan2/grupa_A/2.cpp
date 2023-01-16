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

int najblizi(vector<int>& v, int k, int x) {
    int n = v.size();
    sort(v.begin(), v.end());
    int l = 0;
    int r = n - 1;
    while(r - l >= k) {
        if(abs(v[l] - x) <= abs(v[r] - x)) {
            r--;
        }
        else {
            l++;
        }
    }
    return l;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int l = najblizi(v, k, x);

    for(int i = l; i < l + k; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;

    return 0;
}
