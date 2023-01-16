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

int factorijel(int n){
    if(n == 0){
        return 1;
    }
    return n * factorijel(n - 1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;

    double zbir = 0;
    for(int i = 0; i <= n; i++){
        zbir = zbir + (double)((double)1 * (double)(pow(-1, i)) / (double)(factorijel(i)));
    }

    cout << fixed << setprecision(14) << zbir << endl;

    return 0;
}