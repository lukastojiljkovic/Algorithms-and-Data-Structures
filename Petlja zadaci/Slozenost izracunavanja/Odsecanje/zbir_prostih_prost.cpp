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

bool prost(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;

    int br_parova = 0;
    for(int p = 2; p <= n; p++){
        if(prost(p)){
            for(int q = p+1; p+q <= n; q++){
                if(prost(q) && prost(p+q)){
                    br_parova++;
                }
            }
        }
    }
    cout << br_parova << endl;

    return 0;
}