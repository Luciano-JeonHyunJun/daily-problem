#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string eng;
	cin >> eng;
	
	int arr[26] = {0, }; //알파벳 개수(26개의 알파벳) 카운트 하는 배열
	int max = 0;
	int index = 0;
	int count = 0;
	
	for(int i = 0; i < eng.length(); i++)
	{
		int n = eng.at(i);
		
		if(n < 97) // 대문자인 경우
		 	arr[n -65]++; //A의 아스키코드는 65 
		else // 소문자인 경우
			 arr[n -97]++;
			 
	for(int i = 0; i < 26; i++)
	{
	
		if(max < arr[i])
		{
		
			max = arr[i];
			index = i;
			
		}	
	}
	
	// 가장 많이 사용된 알파벳이 여러개인가?
	for(int i = 0; i < 26; i++ )
	{
		if(max == arr[i]) count++;	
	}
	//여러개라면 ? 출력 아니라면 대문자
	if(count > 1) cout << "?";
	else cout << (char)(max + 65); 
	
	}
	return 0;
}
