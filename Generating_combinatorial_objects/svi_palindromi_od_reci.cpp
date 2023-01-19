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

bool isPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    bool found = false;
    do {
        if (isPalindrome(s)) {
            cout << s << endl;
            found = true;
        }
    } while (next_permutation(s.begin(), s.end()));
    if (!found) {
        cout << "-" << endl;
    }

    return 0;
}