/*

Над речником који слика ниске карактера дужине највише 
10 карактера у целе бројеве се могу вршити следеће наредбе:

w k v — write — кључу k се придружује вредност v 
                (ако је кључу k већ додељена нека вредност, она се занемарује)
r k — read — на стандардни излаз се исписује вредност придружена кључу k. 
             Ако кључу није придружена вредност, исписује се -.

Написати програм који чита и извршава низ оваквих наредби 
(наравно, водити рачуна о ефикасности).

 * Улаз * 
Свака линија стандардног улаза садржи једну наредбу.

 * Излаз * 
На стандардни излаз исписати резултат извршавања свих наредби.

 * Пример * 

Улаз
w pera 5
w ana 4
r ana
r mika
w mika 3
r mika
r pera

Излаз
4
-
3
5

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
#include <functional>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    map<string, int> map;
    char c;
    
    while(cin >> c) {
        if(c == 'w') {
            string k;
            int v;
            cin >> k >> v >> ws;
            map[k] = v;
        }
        else if (c == 'r'){
            string k;
            cin >> k >> ws;
            auto it = map.find(k);
            if(it != map.end()) {
                cout << it->second << endl;
            }
            else {
                cout << "-" << endl;
            }
        }
    }
    
    return 0;
}
