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
    
    int n, x;
    cin >> n;

    map<int, int> m;
    int br_par = 0;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(m[x] > 0) {
            if(m[x] % 2 == 0) {
                br_par--;
            } else {
                br_par++;
            }
        }
        m[x]++;
    }

    cout << br_par << endl;

    return 0;
}
