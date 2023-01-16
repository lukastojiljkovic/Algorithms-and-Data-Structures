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

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, d = n-1;
    while(l<d){
        if(a[l] % 2 == 0){
            l++;
        }
        else if(a[d] % 2 == 1){
            d--;
        }
        else{
            swap(a[l], a[d]);
            l++;
            d--;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    

    return 0;
}