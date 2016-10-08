#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int t,x,tc=1;
	long long s;
	
	cin>>t;
	while(t--){
		cin>>x;
		s=0;
		for(int i=1;i<=x;i++)
			s+=i*i*i;
			
		cout<<"Case "<<tc++<<": "<<s<<endl;
	}
	
}