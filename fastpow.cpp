#include <iostream>
using namespace std;

int fast_pow(int a, int n)
{
    if(n==0) return 1;
    int s = fast_pow(a, n/2);
    s*=s;
    
    if(n&1) return s*a;
    return s;
}

int main() {
	
	int a, n;
	cin>>a>>n;
	cout<<fast_pow(a,n);
	return 0;
}
