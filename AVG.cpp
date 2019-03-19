#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-- > 0){
        int n,k,v;
        cin>>n>>k>>v;
        int total=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            total+=a;
        }
        total = (n+k)*v - total;
        int val = (total % k);
        if(val == 0 && (total/k) > 0){
            cout<<(total/k)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}
