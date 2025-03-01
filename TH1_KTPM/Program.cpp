#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


int main(){
	cout <<  " == MENU== " << endl;
	cout << "1. Kiem tra so nguyen to" << endl;
	cout << "2. Kiem tra nam nhuan" << endl;
	int ctrl;
	cout << "-> ";
	cin >> ctrl;
	switch (ctrl) {
	case 1: {
		cout << "Nhap so: ";
		int num;
		cin >> num;
		if (isPrime(num)) {
			cout << num << " la so nguyen to" << endl;
		}
		else cout << num << " khong la so nguyen to" << endl;
	}
	}
	return 0;
}