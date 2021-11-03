#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eng;
	int count = 1;
	
	getline(cin, eng); // 함수는 입력 스트림에서 문자들을 읽어서, 인자로 받은 문자열에 저장
	
	for(int i = 0; i < eng.length(); i++)
	{
		if(eng[i] == ' ') // 만약 eng index가 공백이라면?
		{
			count ++;
		}	 
	}
	
	if(eng[0] == ' ' || eng[0] == '\0' ){ //처음 공백이 온다면 
		count --; // 카운트에서 - 함 
	}
	
	if(eng[eng.length() -1] == ' ')
	{
		count --;
	}
	
	cout << count;
	
	return 0;
}
