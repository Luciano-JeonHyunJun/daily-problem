#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	
	int h , w, n;
	
	for(int i = 0; i < t; i++)
	{
		cin >> h , w , n;
		
		int H1 , W1;
		
		H1 = n%h;
		W1 = n/h;
		
		if(H1 > 0)
			W1++;
		else
			H1 = h;
			cout << H1 * 100 + W1 << '\n';
	}	
}
