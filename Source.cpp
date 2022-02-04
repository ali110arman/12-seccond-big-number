#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int n,max1, max2,x;
	cout << "inter count of your numbers\n";
	cin >> n;
	cout << "inter your numbers" << endl;
	cin >> x;
	max1 = x;
	n = n - 1;
	cin >> x;
	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else {
		max2 = x;
	}
	n = n - 1;
	while (n != 0) {
		cin >> x;
		if (x > max1) {
			max2 = max1;
			max1 = x;
		}
		if (x > max2 && x < max1) {
			max2 = x;
		}
		n = n - 1;
	}
	cout << "your seccond big number is "<< max2;
}
