#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = {3 , 3 , 3 , 4 , 4 , 4 , 5 , 5 , 5 , 6 , 6 , 6 , 7 , 7 , 7 , 8 , 8 , 8 , 8, 9 , 9 , 9 , 10 , 10 , 10 , 10}; 
	int sum = 0;
	string s;
	
	cin >> s;
	
	for(int i = 0; i < s.length(); i++)
	{
		int index = s[i] - 65; // index라는 변수는 s라는 배열 인덱스 빼기 65 해서 index에 접근 
		sum += arr[index]; 
	}
	
		cout << sum << endl;
	
	return 0;
}
