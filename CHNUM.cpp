#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int arr;
	    long long int c1=0,c2=0,zero=0;
	    for(int i=0;i<n;i++){
	        cin>>arr;
	        if(arr<0){
	            c2++;
	        }else if(arr>0){
	            c1++;
	        }else{
	            zero++;
	        }
        }
        if(c1>c2 && c1!=n){
            cout<<(c1+zero)<<" "<<c2<<endl;
        }else if(c2>=c1 && c2!=n){
            cout<<(c2+zero)<<" "<<c1<<endl;
        }else{
            if(c1==n){
                cout<<(c1)<<" "<<c1<<endl;
            }else if(c2==n){
                cout<<(c2)<<" "<<c2<<endl;
            }
        }
	    t--;
	}
}
