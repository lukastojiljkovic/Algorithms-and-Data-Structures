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
    
    long long n, r, d, x;
    cin >> n >> r >> d;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(abs(x) > r) {
            cout << 0 << endl;
        }
        else {
            long long k = (r - abs(x)) / d + 1;
            cout << k << endl;
        }
    }

    return 0;
}
