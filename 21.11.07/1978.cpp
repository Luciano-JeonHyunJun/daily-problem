#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int count = 0, max, num, check = 0;
	cin >> max;

	while (max--) {
		cin >> num;

		if (num == 1)
			continue;

		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				check++;
				break;
			}
		}
		if (!check)
			count++;
		check = 0;
	}
	cout << count << endl;
}
