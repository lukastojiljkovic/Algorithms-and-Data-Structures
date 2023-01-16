#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;
	vector<int> niz(n);

	for(int i = 0; i < n; i++){
		cin >> niz[i];
	}

	int tmp = 0, zbir = 0;
	for(int i = 0; i < n-1; i++){
		if(niz[i] < niz[i+1])
			tmp++;
		else
			tmp = 0;
		zbir += tmp;
	}

	cout << zbir << endl;

	return 0;
}