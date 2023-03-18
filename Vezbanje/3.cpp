/* Tekst zadatka

Дата је матрица у којој су све врсте и све колоне 
сортиране растући. 
Напиши програм који ефикасно 
проналази елементе у таквој матрици.

Улаз
Са стандардног улаза уносе се димензије матрице m и n (1≤m,n≤1000), 
а затим и елементи матрице (елементи сваке врсте у посебном реду, раздвојени размацима). 
Елементи су цели бројеви између −105 и 105. 
Након тога учитава се у сваком реду до краја улаза по један број који се тражи у матрици.

Излаз
За сваки број који се тражи у матрици на стандардни излаз 
исписати колико пута се појављује у матрици.

Пример
Улаз
4 5
1 3 5 8 10
4 7 9 11 15
5 9 13 14 20
8 11 14 16 22
11
12
13
Излаз
2
0
1

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

vector<vector<int>> load_matrix() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> A(m);
    for(int i = 0; i < m; i++) {
        A[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    return A;
}

int num_of_appearances(vector<vector<int>> A, int x) {
    int num = 0;
    int m = A.size(), n = A[0].size();
    for(int i = 0; i < m; i++) {
            if(binary_search(A[i].begin(), A[i].end(), x)) {
                num++;
        }
    }
    return num;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    auto A = load_matrix();
    int x;
    while(cin >> x) {
        cout << num_of_appearances(A, x) << endl;
    }
    
    return 0;
}