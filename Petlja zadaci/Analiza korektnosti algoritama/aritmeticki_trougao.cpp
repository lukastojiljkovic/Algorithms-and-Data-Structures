#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;


int main(){
	
	
	long long k;
	cin >> k;
	
	long long rez = k*k * (k*k + 1);
	long long drugi = (k-1)*(k-1) * ((k-1)*(k-1)+1);
	rez -= drugi;
	rez /= 2;
	cout << rez << endl; 
		
	return 0;
}