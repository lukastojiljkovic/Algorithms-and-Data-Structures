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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    stack<string> s;
    string linija;
    while(getline(cin, linija)) {
        s.push(linija);
    }
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    
    return 0;
}
