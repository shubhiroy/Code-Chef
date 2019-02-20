#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int n,b;
        cin>>n>>b;
        int w,h,p,a=-1; 
        for(int i=0;i<n;i++){
            cin>>w>>h>>p;
            if(p<=b){
                int area = w*h;
                if(a<area){
                    a = area;
                }
            }
        }
        if(a!=-1){
            cout<<a<<endl;
        }else{
            cout<<"no tablet\n";
        }
        t--;
    }
    
	return 0;
}
