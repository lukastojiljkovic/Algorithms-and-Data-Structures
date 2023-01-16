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
    
    int n, m, x;
    cin >> n >> m;
    map<string, int> racun;
    map<int, int> br_pojavljivanja;
    br_pojavljivanja[0] = m;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s >> x;
        if(s == "upit") {
            cout << br_pojavljivanja[x] << endl;
        }
        else {
            br_pojavljivanja[racun[s]]--;
            racun[s] += x;
            br_pojavljivanja[racun[s]]++;
        }
    }

    return 0;
}
