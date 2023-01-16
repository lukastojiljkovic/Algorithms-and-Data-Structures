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
#include <numeric>
using namespace std;

bool sledeca_kombinacija(int n, vector<int>& kombinacija){
    int k = kombinacija.size();

    int i;
    for(i = k-1; i >= 0 && kombinacija[i] == n; i--, n--);

    if(i < 0){
        return false;
    }
    kombinacija[i]++;

    for(i++; i < k; i++){
        kombinacija[i] = kombinacija[i-1] + 1;
    }
    
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> kombinacija;
    int x;
    while(cin >> x){
        kombinacija.push_back(x);
    }
    if(sledeca_kombinacija(n, kombinacija)){
        for(int x : kombinacija){
            cout << x << " ";
        }
        cout << endl;
    }
    else{
        cout << "-" << endl;
    }

    return 0;
}