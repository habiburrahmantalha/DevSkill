#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int t,tc=1,i,j,m,n,c;
	char G[110][110];
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=0;i<n;i++){
			cin>>G[i];
		}
		cout<<"Case "<<tc++<<":"<<endl;
		c=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(G[i][j]=='$')
				{
					cout<<i+1<<","<<j+1<<endl;
					c++;
				}
			}
		}
		if(c==0)
		cout<<"No Gold Found"<<endl;
	}
}