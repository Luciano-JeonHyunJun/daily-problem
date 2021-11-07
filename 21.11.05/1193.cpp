#include <iostream>
using namespace std;

int main()
{
	
	int denominator = 0; //분모
	int molecule = 0; //분자
	int input;
	int cnt = 1; // 몇번째 줄인지  
	cin >> input;
	
	while(cnt < input) //몇번째줄에 있는지 검사 해주고 
	{
		input = input - cnt; 
		cnt++;
	}
	
	//만약 14일 경우 5(줄)4번째
	
	if(cnt % 2 == 0) // 짝수일때 
	{
		
		//분모 1씩 감소 분자 1씩 증가 
		for(int i = cnt; i > 0; i--)
		{
			denominator = i;
			molecule ++;
			
			input--;
			if(input == 0)
			{ 
				break;
			}
			
		}
	} 
	else{ //홀수일때를 대비함 
		
		//분모 1씩 증가 분자 1씩 감소 
		for(int i = cnt; i > 0; i--)
		{
			molecule = i;
			denominator++;
			
			input--;
			if(input == 0)
			{
				break;
			}
		}
	}
	cout << molecule  << "/" << denominator; // 분수 형태로 출력
	
	return 0;	 
}
