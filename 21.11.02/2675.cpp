#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S = 0; // S를 R번 반복하고  
	int T,R;
	
	cin >> S >> R;
	
	for(int i = 0; i < T; i++)
	{
		for(int k = 0; k < S.length(); k++)
		{
			for(int j = 0; j < R; j++)
			{
				cout << S[k];
			}
		}
		cout << endl;
	}
	
	return 0;
}
