#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[]) {
	double a,b,s,x;
	int t,tc=1,n;
	cin>>t;
	while(t--){
		cin>>n;
		s=0;
		while(n--){
			cin>>a>>b;
			s+=a*b;
		}
		cin>>x;
		cout<<"Case "<<tc++<<": "<<floor(x-s)<<endl;
	}
}