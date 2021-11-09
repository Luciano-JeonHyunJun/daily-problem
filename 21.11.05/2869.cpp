#include <iostream>
using namespace std;

int main()
{
	int v; // 나무 막대의 값 
	int a; // 올라가는 값 
	int b; // 미끄러지는 값 
	
	int day = 1; // 며칠이 걸리는지 
	
	cin >> a >> b >> v;
	
	day = (v - b - 1) / (a - b) + 1;
	
	cout << day << endl;	
	
}

// 하루에 A-B만큼 올라가며,
// 도착하는 날에는 미끄러지지 않는것을 생각할 때 
// (V-B)높이를 올라간다고 생각할 수 있습니다.
