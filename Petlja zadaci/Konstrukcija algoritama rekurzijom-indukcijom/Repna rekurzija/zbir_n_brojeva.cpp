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

int zbir_br(int n){
    int m; cin >> m;
    if (n == 1){
        return m;
    }
    return m + zbir_br(n - 1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    int m;
    m = zbir_br(n);
    cout << m << endl;

    return 0;
}