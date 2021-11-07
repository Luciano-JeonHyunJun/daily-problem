#include <iostream>
using namespace std;

int main()
{
	int a , b , c; //고정금액 , 가변금액 , 노트북 가격
	cin >> a >> b >> c;
	
	int total = a + b; // 총 금액 
	int bep; // 손익 분기점 
	
	if(b >=c)
		{
			cout << "-1";
			return 0;
		}
		
		cout << a/(c-b) + 1;
		
	}
