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

int josif(int n, int m) {
    queue<int> red;
    for(int i = 0; i < n; i++) {
        red.push(i);
    }
    while(red.size() > 1) {
        for(int i = 0; i < m - 1; i++) {
            red.push(red.front());
            red.pop();
        }
        red.pop();
    }
    return red.front();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    cout << josif(n, m) << endl;
    
    return 0;
}
