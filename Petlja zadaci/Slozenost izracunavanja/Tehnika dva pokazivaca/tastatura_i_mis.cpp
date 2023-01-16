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
    
    int t;
    cin >> t;
    vector<int> tastatura(t);
    for(int i = 0; i < t; i++){
        cin >> tastatura[i];
    }

    int m;
    cin >> m;
    vector<int> mis(m);
    for(int i = 0; i < m; i++){
        cin >> mis[i];
    }

    int novac;
    cin >> novac;

    int max = 0;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < m; j++){
            if(tastatura[i] + mis[j] <= novac){
                max = max > tastatura[i] + mis[j] ? max : tastatura[i] + mis[j];
            }
        }
    }
    cout << max << endl;

    return 0;
}