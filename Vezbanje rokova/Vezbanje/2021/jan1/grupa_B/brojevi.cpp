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

void print(vector<int>& v, int i) {
    if(i == v.size()) {
        for(int x : v) {
            cout << x;
        }
        cout << endl;
        return;
    }
    for(int j = (i == 0); j < 4; j++) {
        v[i] = j;
        if(i > 0 && v[i] % 2 == 1 && v[i - 1] % 2 == 1) {
            continue;
        }
        print(v, i + 1);
    }
}

void print(int n) {
    vector<int> v(n);
    print(v, 0);
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;
    print(n);

    return 0;
}
