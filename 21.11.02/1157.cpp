#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string eng;
	cin >> eng;
	
	int arr[26] = {0, }; //���ĺ� ����(26���� ���ĺ�) ī��Ʈ �ϴ� �迭
	int max = 0;
	int index = 0;
	int count = 0;
	
	for(int i = 0; i < eng.length(); i++)
	{
		int n = eng.at(i);
		
		if(n < 97) // �빮���� ���
		 	arr[n -65]++; //A�� �ƽ�Ű�ڵ�� 65 
		else // �ҹ����� ���
			 arr[n -97]++;
			 
	for(int i = 0; i < 26; i++)
	{
	
		if(max < arr[i])
		{
		
			max = arr[i];
			index = i;
			
		}	
	}
	
	// ���� ���� ���� ���ĺ��� �������ΰ�?
	for(int i = 0; i < 26; i++ )
	{
		if(max == arr[i]) count++;	
	}
	//��������� ? ��� �ƴ϶�� �빮��
	if(count > 1) cout << "?";
	else cout << (char)(max + 65); 
	
	}
	return 0;
}
