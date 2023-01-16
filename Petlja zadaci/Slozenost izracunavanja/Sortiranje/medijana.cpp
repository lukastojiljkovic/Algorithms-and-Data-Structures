#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

double medijana(vector<unsigned>& a) {
  sort(a.begin(), a.end());
  if (a.size() % 2 != 0)
    return a[a.size() / 2];
  else
    return ((double)a[a.size() / 2 - 1] + (double)a[a.size() / 2]) / 2.0;
}

int main() {
  int n;
  cin >> n;
  unsigned c0, c1;
  cin >> c0 >> c1;
  vector<unsigned> a(n);
  cin >> a[0];
  for (int i = 1; i < n; i++)
    a[i] = c0 * a[i-1] + c1;
  cout << fixed << showpoint << setprecision(2) << medijana(a) << endl;
  return 0;
}