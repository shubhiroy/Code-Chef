#include <iostream>

using namespace std;

int res(int s, int e, int x, int y){
    if(s>=e){
        return s;
    }
    int mid = (s+e)/2;
    int points = mid * 2;
    int restPoints = x - points;
    int restMatches = y - mid;
    if(restPoints == restMatches){
        return mid;
    }else if(restPoints > restMatches){
        return res(mid+1,e,x,y);
    }else{
        return res(s,mid-1,x,y);
    }
}

int main() {
    int t;
    cin>>t;
    while(t>0){
        int x,y;
        cin>>x>>y;
        cout<<res(0,y,x,y)<<endl;
        t--;
    }
}
