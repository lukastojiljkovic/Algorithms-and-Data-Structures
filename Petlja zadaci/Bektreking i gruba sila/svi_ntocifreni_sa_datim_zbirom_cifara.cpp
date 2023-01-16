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

void ispisi(vector<int> particija) {
  for (int x : particija)
    cout << x;
  cout << endl;
}

void ispisiJednocifreneParticije(int n, vector<int>& particija, int k) {
  if (k == particija.size()) {
    ispisi(particija);
  } else {
    int preostaloCifara = particija.size() - k;
    int maksZbirIza = 9 * (preostaloCifara - 1);
    int minC = max(k == 0 ? 1 : 0, n - maksZbirIza);
    int maksC = min(9, n);
    for (int c = minC; c <= maksC; c++) {
      particija[k] = c;
      ispisiJednocifreneParticije(n-c, particija, k+1);
    }
  }
}

void ispisiJednocifreneParticije(int n, int brojCifara) {
  vector<int> particija(brojCifara);
  ispisiJednocifreneParticije(n, particija, 0);
}

int main() {
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int brojCifara;
  cin >> brojCifara;
  ispisiJednocifreneParticije(n, brojCifara);
  return 0;
}