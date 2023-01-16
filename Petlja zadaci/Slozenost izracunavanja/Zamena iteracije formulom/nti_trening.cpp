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
    
    int n;
    cin >> n;
    int x, p;
    int zbir = 0;
    while(cin >> x >> p){
        zbir = x + p*(n-1);
        cout << zbir << endl;
    }

    return 0;
}