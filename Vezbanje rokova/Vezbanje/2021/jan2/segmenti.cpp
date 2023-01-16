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

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> p(n + 1, 0);
    partial_sum(v.begin(), v.end(), p.begin() + 1);
    int x = 0;
    for(int i = 1; i < p.size(); i++) {
        int j = distance(p.begin(), upper_bound(p.begin(), p.end(), p[i] - t));
        x += i - j;
    }
    cout << x << endl;

    return 0;
}
