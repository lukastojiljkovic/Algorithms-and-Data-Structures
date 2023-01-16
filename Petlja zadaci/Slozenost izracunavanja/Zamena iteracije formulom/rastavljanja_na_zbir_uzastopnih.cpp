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

	int rez = 0;
	
	for (int a0 = 1; a0 + (a0+1) <= n; a0++){
		int zbir = a0 + (a0+1);
		for(int ai = a0 + 2; zbir < n; ai++)
			zbir += ai;
		if(zbir == n)
			rez++;
	}
	cout << rez << endl;

	return 0;
}