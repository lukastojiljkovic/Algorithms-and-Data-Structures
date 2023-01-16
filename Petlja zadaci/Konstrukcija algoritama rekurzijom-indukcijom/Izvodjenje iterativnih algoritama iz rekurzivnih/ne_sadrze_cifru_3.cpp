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

bool cif3(int n){
    while(n > 0){
        if(n % 10 == 3){
            return true;
        }
        n /= 10;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;

    int br = 0;
    for(int i = 0; i <= n; i++){
        if(!cif3(i))
            br++;
    }
    cout << br << endl;

    return 0;
}