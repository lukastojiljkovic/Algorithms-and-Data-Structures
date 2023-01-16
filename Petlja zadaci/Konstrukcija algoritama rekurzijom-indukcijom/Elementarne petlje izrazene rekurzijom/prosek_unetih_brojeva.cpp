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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int x, i = 0;
    double suma = 0;
    while(cin >> x) {
        suma += x;
        i++;
    }
    suma /= i;
    cout << fixed << setprecision(5) << suma << endl;
    
    return 0;
}
