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
#include <stack>
#include <utility>
using namespace std;

void ispisi(vector<int>& kombinacija){
    for(int x : kombinacija){
        cout << x << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(next_permutation(begin(a), end(a))){
        ispisi(a);
    }
    else{
        cout << "ne postoji" << endl;
    }

    return 0;
}