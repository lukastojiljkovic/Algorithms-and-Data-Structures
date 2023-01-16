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

int bin_to_dec(const vector<bool>& b) {
    int d = 0;
    for(bool x : b) {
        d = 2*d + (x ? 1 : 0);
    }
    return d;
}

void generate(vector<bool>& current, int position) {
    if(position == current.size()) {
        cout << bin_to_dec(current) << endl;
        return;
    }
    if(position > 0 && current[position-1] != false) {
        current[position] = false;
        generate(current, position + 1);
    }
    current[position] = true;
    generate(current, position + 1);
}

void generate(int n) {
    for(int num_digits = 1; num_digits <= n; num_digits++) {
        vector<bool> current(num_digits);
        generate(current, 0);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    generate(n);
    
    return 0;
}
