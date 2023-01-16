/* Дат је број s и n сортираних различитих целих
бројева. Исписати све
низове састављене од датих $n$ бројева таквих
да је сума елемената низа
једнака s. Бројеви у низу се могу понављати и не мора
бити укључено свих n бројева. Исписивати само различите низове, растуће сортиране 
(два низа су иста ако имају исте цифре које се понављају исти број
пута нпр. 1 1 2 и 1 2 1, иначе су различити).
Улаз
3
2 3 5
13
Излаз
2 2 2 2 2 3
2 2 2 2 5
2 2 3 3 3
2 3 3 5
3 5 5 */
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

void ispisi(const vector<int>& v) {
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

void kombinacijaZbira(const vector<int>& v, int s, vector<int>& komb, int index) {
    if (s < 0) {
        return;
    }
    if (s == 0) {
        ispisi(komb);
        return;
    }
    for(int i = index; i < v.size(); i++) {
        komb.push_back(v[i]);
        kombinacijaZbira(v, s-v[i], komb, i);
        komb.pop_back();
    }
}

void kombinacijaZbira(const vector<int>& v, int s) {
    vector<int> komb;
    kombinacijaZbira(v, s, komb, 0);
}

int main(int argc, char const *argv[]) {

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int s;
    cin >> s;
    kombinacijaZbira(v, s);

    return 0;
}
