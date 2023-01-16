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
    
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if(d < 0) {
        d = -d;
    }

    sort(begin(v), end(v));
    map<int, int> duzinaDo;
    int maxd = 1;

    for(int i = 0; i < n; i++) {
        if(duzinaDo.find(v[i] - d) != duzinaDo.end()) {
            duzinaDo[v[i]] = duzinaDo[v[i]] + 1;
            maxd = max(maxd, duzinaDo[v[i]]);
        }
        else {
            duzinaDo[v[i]] = 1;
        }
    }

    cout << maxd << endl;

    return 0;
}
