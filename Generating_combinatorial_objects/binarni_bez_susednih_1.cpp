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

void generate(string s, int i) {
    if(i == s.size()) {
        cout << s << endl;
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