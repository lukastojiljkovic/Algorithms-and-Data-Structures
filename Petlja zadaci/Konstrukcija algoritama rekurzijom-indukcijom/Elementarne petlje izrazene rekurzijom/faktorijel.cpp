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

int faktorijel(int n){
    if(n == 0) return 1;
    return n * faktorijel(n-1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    n = faktorijel(n);
    cout << n << endl;
    return 0;
}