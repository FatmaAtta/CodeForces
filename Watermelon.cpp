#include <iostream>
using namespace std;
int main() {
	int w;
	//cout << "Enter the weight" << endl;
	cin >> w;
	/*
	while (w<3 || w>100) {
		cout << "Enter a weight from 3 to 100" << endl;
		cin >> w;
	}
	removed it because only one input was allowed
	*/
	if (w>2){
		if (w%2==0) {
		cout << "YES" << endl;
		}
		else {
		cout << "NO" << endl;
		}
	}
	else {
		cout << "NO" << endl;
	}
	//return 0;
}