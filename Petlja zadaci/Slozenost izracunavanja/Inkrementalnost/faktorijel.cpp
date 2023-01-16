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

    unsigned long long f = 1;
    for(int i = 1; i <= n; i++){
        if(n == 0){
            cout << f << endl; 
            break;
        }
        f *= i;
        cout << f << endl;
    }

    return 0;
}