/*

Написати програм који за делимично попуњен низ нула и јединица 
исписује све могуће начине да се тај низ допуни 
тако да не постоје две узастопне јединице.

Улаз
Са стандардног улаза се уноси ниска која се састоји од карактера 0, 1 и ., 
при чему . представља празно поље које треба попунити. 
Број празних поља није већи од 30.

Излаз
На стандардни излаз исписати све тражене низове нула и јединица 
који се добијају допуњавањем унете ниске, 
сваки у засебном реду, у лексикографском редоследу.

    Пример
Улаз

1...0

Излаз

10000
10010
10100

*/

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
        if(!((s[i] != s[i-1]) && (s[i] == '1' || s[i-1] == '1'))) { // zastita da moze da ispisuje 
            j++;                                                    // susedne nule ali ne i jedinice
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
        if (s[i-1] != '1') {    // mislim da ovde pravi problem sa pristupom
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