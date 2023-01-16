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
    
    priority_queue<int, vector<int>, greater<int>> Q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int ai;
        cin >> ai;
        Q.push(ai);
    }
    while(!Q.empty()){
        cout << Q.top() << endl;
        Q.pop();
    }

    return 0;
}
