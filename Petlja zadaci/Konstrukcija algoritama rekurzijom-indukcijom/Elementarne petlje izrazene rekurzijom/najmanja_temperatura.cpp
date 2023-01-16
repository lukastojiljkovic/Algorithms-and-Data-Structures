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

using namespace std;

int min_temp(int n, int m){
    if(n == 0) return m;
    int x; cin >> x;
    if(x < m)
        m = x;
    return min_temp(n-1, m);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    int m = 0;
    int y = min_temp(n, m);
    cout << y << endl;
    return 0;
}