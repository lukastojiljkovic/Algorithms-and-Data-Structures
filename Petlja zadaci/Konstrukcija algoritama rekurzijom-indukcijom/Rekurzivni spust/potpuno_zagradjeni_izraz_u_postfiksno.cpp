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

void prevedi(const string& izraz, int& i, string& postfiks) {
    if (isdigit(izraz[i])){
        postfiks += izraz[i++];
    }
    else{
        i++;
        prevedi(izraz, i, postfiks);
        char op = izraz[i++];
        prevedi(izraz, i, postfiks);
        i++;
        postfiks += op;
    }
}

string prevedi(const string& izraz) {
  string postfiks = "";
  int i = 0;
  prevedi(izraz, i, postfiks);
  return postfiks;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    string izraz;
    cin >> izraz;
    string postfiks = prevedi(izraz);
    cout << postfiks << endl;

    return 0;
}
