#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <map>

using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(), a.end());

	for(int i = 0; i < n; i++)
		cout << a[i] << endl;

	return 0;
}