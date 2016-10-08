#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int t,tc=1;
	long long a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<"Case "<<tc++<<": "<<a*2+b*3<<endl;
	}
}