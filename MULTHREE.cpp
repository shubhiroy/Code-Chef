#include<bits/stdc++.h>
using namespace std;

int main(){
	//ios_base::sync_with_studio(false);
	//cin.tie(NULL);
	int t;
	cin>>t;
	while(t-- > 0){
		long long int k,res;
		int d0,d1;
		cin>>k>>d0>>d1;
		int sum = d0 + d1;
		if(k == 2) {
			res = sum;
		}
		else{
		long long int m;
		int modk = (k-3)%4;
		m = ((k-3)-modk)/4;
		int n = 0;
		switch(modk){
			case 3:
				n += ((8*sum)%10);
			case 2:
				n += ((4*sum)%10);
			case 1:
				n += ((2*sum)%10);
			       break;
			default:
				n += 0;	
		}
		int c = ((2*sum)%10) + ((4*sum)%10) + ((8*sum)%10) + ((6*sum)%10);
		 res = (m*c) + n + (sum%10) + sum;
		}
		//cout<<"Res : "<<res<<"\n";
		if(res%3 == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
