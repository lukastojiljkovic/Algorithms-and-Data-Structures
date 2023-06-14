/*

 *** Gradnja ***

 За једну дугачку улицу познате су дозвољене локације за градњу. 
 Свака локација је задата по једним целим бројем, растојањем локације од почетка улице. 
 Потребно је изградити N зграда, али тако да суседне зграде буду што даље једна од друге. 
 Инвеститори оцењују квалитет плана градње G (то јест избора N локација) помоћу растојања D(G). 
 Растојање D(G) представља најмање растојање између узастопних зграда при плану градње G. 
 Инвеститоре посебно интересује која је највећа могућа вредност D(G). 
 Напиши програм који за дате дозвољене локације и потребан број кућа исписује највеће растојање које се може постићи.

   * Ulaz *
   У првом реду дат је број планираних зграда N (2≤N≤L), 
   а у другом број расположивих локација L (2≤L≤105). 
   У наредних L редова дати су положаји потенцијалних локација за градњу Xi, (1≤i≤L, 0≤Xi≤109).

   * Izlaz *
   На стандардни излаз исписати највеће могуће минимално растојање између суседних кућа.

   * Primer *
   Ulaz:
   3
   7
   9
   4
   6
   2
   10
   14
   12

   Izlaz:
   5

   * Objasnjenje *
   Дато је 7 локација на којима се граде 3 куће. 
   Ако се оне изграде на локацијама 2, 9 и 14, 
   најмање растојање између кућа је 5 
   (боље решење од овог није могуће).

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

bool rastojanje(int x, int m, vector<int>& location, int n) {
   int l = location[0];
   int d = location[n - 1] - l;

   m--;
   int lastLocation = location[0];
   for(int i = 1; i < n && m > 0; i++) {
      if(location[i] - lastLocation >= x) {
         m--;
         lastLocation = location[i];
      }
   }
   return m == 0;
}

int main(int argc, char const *argv[]) {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   
   int n, l;
   cin >> n >> l;
   vector<int> location(l);
   for(int i = 0; i < l; i++) {
      cin >> location[i];
   }
   sort(location.begin(), location.end());

   int g = 1;
   int d = location[l - 1];
   int resenje = -1;
   while (g <= d) {
      int s = (d+g)/2;
      if(rastojanje(s, n, location, l)) {
         resenje = s;
         g = s + 1;
      }
      else {
         d = s - 1;
      }
   }
   cout << resenje << endl;

    return 0;
}
