#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-- > 0){
		int n;
		cin>>n;
		int arr[n], arr2[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		arr2[0] = arr[0];
		int count = 1;
		for(int i = 1; i < n; i++){
			if(arr2[i-1] > arr[i]){
				arr2[i] = arr[i];
				count++;
			}else{
				arr2[i] = arr2[i-1];
			}
		}
		cout<<count<<"\n";
	}
}
