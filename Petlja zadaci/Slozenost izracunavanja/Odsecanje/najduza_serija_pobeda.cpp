#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

int main(){

	int n, t, j;
	cin >> n;
	vector<int> niz(n);
	for(int i = 0; i < n; i++){
		cin >> t;
		if(t == 1)
			niz[j]++;
		if(t == -1)
			j++;
	}

	cout << *max_element(niz.begin(), niz.end()) << endl;

	return 0;
}