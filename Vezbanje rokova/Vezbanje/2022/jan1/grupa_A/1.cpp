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
    
    int n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long putanja = 0;
    long long br_kuglica = 0;
    for(int i = 0; i < k; i++) {
        br_kuglica += v[i];
        putanja += (i + 1) * v[i];
    }

    long long maks = putanja;
    for(int i = k; i < n; i++) {
        putanja -= br_kuglica;
        putanja = k * v[i];
        maks = max(maks, putanja);
        br_kuglica -= v[i - k];
        br_kuglica += v[i];
    }

    return 0;
}
