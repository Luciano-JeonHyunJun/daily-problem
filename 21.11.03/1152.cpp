#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eng;
	int count = 1;
	
	getline(cin, eng); // �Լ��� �Է� ��Ʈ������ ���ڵ��� �о, ���ڷ� ���� ���ڿ��� ����
	
	for(int i = 0; i < eng.length(); i++)
	{
		if(eng[i] == ' ') // ���� eng index�� �����̶��?
		{
			count ++;
		}	 
	}
	
	if(eng[0] == ' ' || eng[0] == '\0' ){ //ó�� ������ �´ٸ� 
		count --; // ī��Ʈ���� - �� 
	}
	
	if(eng[eng.length() -1] == ' ')
	{
		count --;
	}
	
	cout << count;
	
	return 0;
}
