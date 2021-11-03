#include<iostream>
#include<string>
using namespace std;
 
 
int main() {
	string A, B; // 세자리수 A,B 
	cin >> A >> B;
	
	char Atemp;
	Atemp = A[2];
	A[2] = A[0];
	A[0] = Atemp;
 
	char Btemp;
	Btemp = B[2];
	B[2] = B[0];
	B[0] = Btemp;
 
	string result; // 결과값 담는 변수
 
	if ((int)A[0]>(int)B[0])
	{
		result = A;
	}
	else if ((int)A[0] < (int)B[0])
	{
		result = B;
	}
	else
	{
		if ((int)A[1] > (int)B[1])
		{
			result = A;
		}
		else if ((int)A[1] < (int)B[1])
		{
			result = B;
		}
		else
		{
			if ((int)A[2] > (int)B[2])
			{
				result = A;
			}
			else if ((int)A[2] < (int)B[2])
			{
				result = B;
			}
		}
	}
	cout << result << endl;
}
