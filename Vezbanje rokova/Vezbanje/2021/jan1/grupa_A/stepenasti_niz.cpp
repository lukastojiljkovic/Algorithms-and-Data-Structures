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

void stampaj(vector<int>& v, int i) {
    if(i == v.size()) {
        for(int x : v) {
            cout << x << ' ';
        }
        cout << endl;
        return;
    }
    v[i] = v[i - 1];
    stampaj(v, i + 1);

    v[i] = v[i - 1] + 1;
    stampaj(v, i + 1);
}

void stampaj(int n) {
    vector<int> v(n);
    v[0] = 1;
    stampaj(v, 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    stampaj(n);

    return 0;
}
