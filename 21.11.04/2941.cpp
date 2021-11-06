#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eng;
	cin >> eng;
	
	int index;

	string arr[8] = {"c=" , "c-" , "dz=" , "d-" , "lj" , "nj" , "s=" , "z=" };
	
	for(int i = 0; i < 8; ++i) //8개인 이유는 arr에 들어간 크로아티아 알파벳을 변경 한것이 8개 이기때문에 
	{
		while (1) {
		
		index = eng.find(arr[i]);
		if(index == string::npos)	// npos는 원하는 단어나 문장을 찾아주고 검색후 string::npos()를 통하여 알수 있음	
			break; 
			
		eng.replace(index , arr[i].length(), "a"); // 문자열 일부를 바꿔주는 replace 
		}	
	} 
	
	cout << eng.length();

	return 0;
}
