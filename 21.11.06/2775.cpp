#include <iostream>
#include <string>

using namespace std;

int room(int a, int b) {

	if (a == 0) return b; // 층 수가 0일 때는 해당 호수로 return
	if (b == 1)return 1; // 호 수가 1일 때는 무조건 1 return

	// 해당 호수의 같은 층 전 호수 + 해당 호수의 밑에 층 호수 의 수의 합
	// 재귀 함수 호출
	return (room(a - 1, b) + room(a, b - 1));

}

int main() {
	int t;
	cin >> t;

	int k, n;
	int answer = 0;

	for (int i = 0;i < t;i++) {
		cin >> k >> n;
		cout << room(k, n) << endl;
	}


}
