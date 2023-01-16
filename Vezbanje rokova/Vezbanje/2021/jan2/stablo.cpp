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

void print(vector<pair<char, bool>>& s) {
    for(auto x : s) {
        cout << x.first;
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);

    string p;
    cin >> p;
    vector<pair<char, bool>> s;
    
    for(char ch : p) {
        if(islower(ch)) {
            s.push_back({ch, false});
        }
        else {
            s.push_back({ch, true});
            print(s);
            while(!s.empty() && s.back().second) {
                s.pop_back();
            }
            if(!s.empty()) {
                s.back().second = true;
            }
        }
    }

    return 0;
}
