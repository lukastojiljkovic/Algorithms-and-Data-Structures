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

void print(int i, int m, vector<int>& v, vector<int>& a) {
    v[i] = m;
    if(m == a.size() - 1) {
        for(int x : v) {
            cout << x << ' ';
        }
        cout << endl;
    }
    if(i - a[i] >= 0 && v[i - a[i]] == -1) {
        print(i - a[i], m + 1, v, a);
    }
    if(i + a[i] < a.size() && v[i + a[i]] == -1) {
        print(i + a[i], m + 1, v, a);
    }
    v[i] = -1;
}

void print(vector<int>& a) {
    int n = a.size();
    vector<int> v(n, -1);
    print(0, 0, v, a);
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    print(a);

    return 0;
}
