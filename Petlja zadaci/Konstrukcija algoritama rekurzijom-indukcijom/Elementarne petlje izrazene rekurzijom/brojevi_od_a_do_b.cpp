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

void brojevi_a_do_b(int a, int b){
    if(a <= b){
        cout << a << endl;
        brojevi_a_do_b(a+1, b);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int a, b;
    cin >> a >> b;
    brojevi_a_do_b(a, b);

    return 0;
}