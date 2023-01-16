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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    unordered_map<string, int> map;
    char c;
    while (cin >> c){
        if (c == 'w'){
            string k; int v;
            cin >> k >> v >> ws;
            map[k] = v;
        }
        else if (c == 'r'){
            string k;
            cin >> k >> ws;
            auto it = map.find(k);
            if (it != map.end())
            cout << it->second << '\n';
            else{
                cout << "-" << '\n';
            }
        }
    }

    return 0;
}
