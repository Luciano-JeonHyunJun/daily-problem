#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T, R; 
	string S;
	cin >> T;
	
	for(int i = 0; i < T; i++) // 입력받은 T보다 커지거나 같을때까지 반복 
	{
		
		cin >> R >> S;
		for(int k = 0; k < S.length(); k++) // k는 S의 크기만큼 반복 
		{
			for(int j = 0; j < R; j++) //위와 동일하게 R만큼(R의 크기X) 
				cout << S[k]; 
		}
		cout << endl;
	}
	return 0;	
}
