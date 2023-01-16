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

double stepen(double x, int n){
    if(n == 0) return 1;
    return x * stepen(x, n-1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    double x;
    cin >> x;
    int n;
    cin >> n;

    x = stepen(x, n);
    cout << setprecision(5) << fixed << x << endl;

    return 0;
}