#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T, R; 
	string S;
	cin >> T;
	
	for(int i = 0; i < T; i++) // �Է¹��� T���� Ŀ���ų� ���������� �ݺ� 
	{
		
		cin >> R >> S;
		for(int k = 0; k < S.length(); k++) // k�� S�� ũ�⸸ŭ �ݺ� 
		{
			for(int j = 0; j < R; j++) //���� �����ϰ� R��ŭ(R�� ũ��X) 
				cout << S[k]; 
		}
		cout << endl;
	}
	return 0;	
}
