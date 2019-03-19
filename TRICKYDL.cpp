#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long int bs2(long long int s, long long int e, long long int a){
    if(s>e){
        return s;
    }
    long long int mid = (s+e)/2;
    long long int chef = pow(2,mid-1);
    long long int diff = (a-chef);
    if(diff <= 0){
        e = mid-1;
    }else{
        s = mid+1;
    }
    return bs2(s,e,a);
} 

long long int bs(long long int s, long long int e, long long int a){
    if(s>e){
        return s;
    }
    long long int mid = (s+e)/2;
    long long int chef = pow(2,mid-1);
    chef = chef + (chef-1);
    long long int total = a*mid;
    long long int diff = (total-chef);
    if(diff < 0){
        e = mid-1;
    }else{
        s = mid+1;
    }
    return bs(s,e,a);
} 

int main(){
    int t;
    cin>>t;
    while(t-- > 0){
       long long int a;
        cin>>a;
        long long int res = bs(0,100,a)-1;
        cout<<res<<" ";
        long long int res2 = bs2(0,100,a)-1;
        cout<<res2<<endl;
        
    }
}