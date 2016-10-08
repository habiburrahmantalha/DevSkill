#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;
int main(int argc, char *argv[]) {
	
	int t;
	double a,b,c,d,r;
	
	cin>>t;
	
	while(t--){
		
		cin>>a>>b>>c;
		d = a*a+b*b;
		r= d+c*c;
		
		printf("%.2f\n", sqrt(r));
		
	}
	return 0;
}