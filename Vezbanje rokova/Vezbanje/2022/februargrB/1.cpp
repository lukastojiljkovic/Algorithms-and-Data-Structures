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
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    
    int n, t;
    cin >> n >> t;

    int x;
    map <int,int> m;
    int rez = 0;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "upit") {
            cout << rez << endl;
        } else {
            cin >> x;
            if (s == "pisi") {
                m[x]++;
                rez += m[t-x];
            } else {
                m[x]--;
                rez -= m[t-x];
            }
        }
    }

    return 0;
}
