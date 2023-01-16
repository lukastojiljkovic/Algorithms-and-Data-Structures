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
    
    string s;
    cin >> s;

    string c;
    for(char t : s) {
        if(c.empty() || c.back() != t) {
            c.push_back(t);
        } else {
            c.pop_back();
        }
    }

    cout << c << endl;

    return 0;
}
