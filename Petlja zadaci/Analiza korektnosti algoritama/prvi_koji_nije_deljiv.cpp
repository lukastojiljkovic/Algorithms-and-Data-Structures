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

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long x;
    while(cin >> x){
        int j = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] % x == 0){
                j++;
            }
            else{
                break;
            }
        }
        cout << j << endl;
    }


    return 0;
}