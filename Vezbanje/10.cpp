/*

Камење је постављено дуж позитивног дела x-осе и за сваки камен је позната његова координата x. 
Жаба креће да скаче са првог камена који се налази у координатном почетку 
и жели да у што мање скокова дође до последњег камена. 
У сваком скоку она може да прескочи највише растојање r 
(а може да скочи и мање, ако је то потребно). 
Написати програм који одређује да ли жаба може стићи до последњег камена 
и ако може у колико најмање скокова то може учинити.

Улаз
Са стандардног улаза се уноси број n (1≤n≤50000), 
а затим у наредном реду n позитивних целих бројева број 
(у питању је растуће сортиран низ бројева који представља координате камења). 
У последњем реду се налази позитиван цео број r.

Излаз
На стандардни излаз исписати најмањи број скокова потребан да жаба стигне до последњег камена или -1 ако то није могуће.

Пример
Улаз
5
0 3 8 14 16
10
Излаз
2

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> stones(n);
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }
    int r;
    cin >> r;

    int jumps = 0;
    int current_stone = 0;
    while (current_stone < n - 1) {
        int next_stone = current_stone + 1;
        while (next_stone < n && stones[next_stone] - stones[current_stone] <= r) {
            next_stone++;
        }
        if (next_stone == current_stone + 1) {
            cout << -1 << endl;
            return 0;
        }
        current_stone = next_stone - 1;
        jumps++;
    }
    cout << jumps << endl;
    return 0;
}