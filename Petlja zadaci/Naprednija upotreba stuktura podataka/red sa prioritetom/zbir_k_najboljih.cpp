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
    
    priority_queue<int, vector<int>, less<int>> Q;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        Q.push(tmp);
    }
    int zbir = 0;
    for(int i = 0; i < k; i++){
        zbir += Q.top();
        Q.pop();
    }
    cout << zbir << endl;

    return 0;
}
