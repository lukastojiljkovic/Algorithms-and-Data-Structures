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

void zmurke(int x, int i){
    if(i <= x){
        cout << i << endl;
        zmurke(x, i+5);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int x;
    cin >> x;
    int i = 5;
    zmurke(x, i);

    return 0;
}