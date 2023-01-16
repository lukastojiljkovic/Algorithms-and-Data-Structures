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

void print(int x, int n) {
    string rez(n, '0');
    for(int i = n - 1; i >= 0; --i) {
        rez[i] = '0' + (x & 1);
        x /= 2;
    }
    cout << rez << endl;
}

void print(int n) {
    int red = 0;
    for(int i = 0; i < (1 << n); ++i) {
        int maska = i - (i & (i-1));
        red = red ^ maska;
        print(red, n);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    print(n);
    
    return 0;
}
