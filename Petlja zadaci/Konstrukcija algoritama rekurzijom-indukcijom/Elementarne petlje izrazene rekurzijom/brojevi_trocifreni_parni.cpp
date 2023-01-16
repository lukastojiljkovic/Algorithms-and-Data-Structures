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

void parni_brojevi(int x, int i){
    if(i <= x && i >= 100 && i <= 999){
        cout << i << endl;
    }
    parni_brojevi(x, i+2);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int a, b;
    cin >> a >> b;
    if(a % 2 == 0)
        parni_brojevi(b, a);
    else
        parni_brojevi(b, a+1);

    return 0;
}