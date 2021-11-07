#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; // 단어의 갯수 N개 
	cin >> n; 

		
	int cnt = 0;
	
	string eng; 
	
	for(int i = 0; i<n; i++) 
	{
		cin >> eng;
		int size = eng.length(); // size 변수는 eng의 크기 
		bool flag = true;
		
		for(int j = 0; j < size; i++) // eng크기보다 j가 커질때까지 
		{
			for(int k= 0; k < j; k++)
			{
				if(eng[j] != eng[j-1] && eng[j] == eng[k])
				{
					flag = false;
					break;
				}
			}
		}
		if(flag) cnt++;
	}
	
	cout << cnt;
	
	
	return 0;
}
