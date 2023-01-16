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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    int l = n, d = n;
    while(l % k != 0 || d % k != 0){
        if(l % k != 0)
            l--;
        if(d % k != 0)
            d++;
    }
    cout << l << endl;
    cout << d << endl;

    return 0;
}