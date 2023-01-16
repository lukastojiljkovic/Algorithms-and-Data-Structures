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

void sve_reci(string& s, string& slova, int i) {
    if(i == s.length()) {
        cout << s << endl;
    }
    else {
        for(char slovo : slova) {
            s[i] = slovo;
            sve_reci(s, slova, i+1);
        }
    }
}

void sve_reci(int k, string& slova) {
    string s;
    s.resize(k);
    sve_reci(s, slova, 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string slova;
    cin >> slova;
    int k;
    cin >> k;
    sve_reci(k, slova);
    
    return 0;
}
