#include <iostream>
using namespace std;
int main() {
    int num; // 숫자 N을 Num으로 표현하기 
    
    cin >> num;
    
    int i = 0; // 숫자를 세주고 출력 시켜주는 역할 
    
    for(int sum=2; sum <= num; i++) // sum은 2부터 시작하는데 입력과 같거나 더 커질때까지 까지 i는 ++ 
        sum += 6*i; // sum은 오른쪽 연산을 왼쪽에 대입한다 ! 
        
    if(num == 1) i=1;  // 만약 숫자가 1이라면 i도 1  
    cout << i;
    
    
    return 0;
}
