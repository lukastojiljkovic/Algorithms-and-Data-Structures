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

void brojanje(int a){
    if(a >= 0){
        cout << a << endl;
        brojanje(a-1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int a;
    cin >> a;
    brojanje(a);

    return 0;
}