#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
	int t;
	long long x,r;
	cin>>t;
	
	while(t--){
		
		cin>>x;
		r=992345678901234;
		
		
		long long i;
		if(x%2==0)
			i = 2;
		else i=1;
		
		for(;i*i<=x;i+=2){
			if(x%i==0){
				r=min(r,abs(i-x/i));
				
			}
				
		}
		cout<<r<<endl;
	}
}