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
    
    int n, t, x;
    map<int, int> mapa;
    int br_nacina = 0;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "pisi") {
            cin >> x;
            br_nacina += mapa[t - x];
            mapa[x]++;
        }
        else if(s == "brisi") {
            cin >> x;
            mapa[x]--;
            br_nacina -= mapa[t - x];
        }
        else {
            cout << br_nacina << endl;
        }
    }

    return 0;
}
