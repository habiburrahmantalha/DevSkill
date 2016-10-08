#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[]) {
	
	int n,h,d,x[110];
	
	while(cin>>h>>n){
		
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		sort(x,x+n);
		d=0;
		while(h>0){
			
			for(int i=n-1;i>=0;i--){
				h-=x[i];
			}
			d++;
			
		}
		if(d==1)
		cout<<"Project will finish within "<<d<<" day."<<endl;
		else {
			cout<<"Project will finish within "<<d<<" days."<<endl;
		}
	}
	return 0;
}