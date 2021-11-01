#include <iostream>
#include <string>
using namespace std;

int main()
{

	string S; //문제에서 단어 S 가 주어진다고 함 
	string eng = "abcdefghijklmnopqrstuvwxyz"; // 소문자 알파벳 
	cin >> S; // 입력 받는 단어 s 
	
	for(int i = 0; i < eng.length(); i++) // i 가 eng 길이를 넘길때까지 + 
	
		cout <<	(int)S.find(eng[i]) << " " ; //	int형으로 출력해야 -1까지 가능  
		
	return 0;
}
