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
#include <cstring>
using namespace std;

void print (const string& s) {
    int j = 0, i, k;
    k = s.size();
    while(k != 0) {
        if(!((s[i] != s[i-1]) && (s[i] == '1' || s[i-1] == '1'))) {
            j++;
        }
        i++;
        k--;
    }
    if(j == s.size()) {
        cout << s << endl;
    }
}

void generate(string s, int i) {
    if(i == s.size()) {
        print(s);
        return;
    }
    if(s[i] == '.') {
        s[i] = '0';
        generate(s, i+1);
        s[i] = '1';
        if (s[i-1] != '1') {
            generate(s, i+1);
        }
    }
    else {
        generate(s, i+1);
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    generate(s, 0);
    
    return 0;
}