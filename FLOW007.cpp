#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<int> g1;
	while(t-- > 0){
		int n;
		cin>>n;
		int x = 0;
		while(n >= 0){
			int rem = n % 10;
			x += rem;
			x *= 10;
			n /= 10;
		}
		g1.push_back(x);
	}
	for(int i = 0; i <= g1.size(); ++i){
		cout<<g1[i]<<"\n";
	}
}

