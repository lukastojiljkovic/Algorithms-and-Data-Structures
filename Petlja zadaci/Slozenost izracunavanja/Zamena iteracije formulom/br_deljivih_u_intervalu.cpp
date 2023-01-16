#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

int main(){

	int a, b, k;
	cin >> a >> b >> k;

	int zbir;
	if(a != 0)
		zbir =  (b / k + 1) - ((a - 1) / k + 1);
	else
		zbir =  (b / k + 1);

	cout << zbir << endl;

	return 0;
}