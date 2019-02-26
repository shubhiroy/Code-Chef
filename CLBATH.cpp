#include <bits/stdc++.h>

using namespace std;

string checkMix(float v1, float t1, float v2, float t2, float v3, float t3){
    float ratio1 = t2 - t3;
    float ratio2 = t3 - t1;
    float total = ratio1 + ratio2;
    if(v3<=total && v1>=ratio1 && v2>=ratio2){
        return "YES";
    }else{
        if(v3<=total){
            float tr = (float)total/v3;
            float r1 = ratio1/tr;
            float r2 = ratio2/tr;
            if(r1<=v1 && r2<=v2){
                return "YES";
            }else{
                return "NO";
            }
        }else{
            float tr = (float)v3/total;
            float r1 = ratio1 * tr;
            float r2 = ratio2 * tr;
            if(r1<=v1 && r2<=v2){
                return "YES";
            }else{
                return "NO";
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t>0){
        float v1,t1,v2,t2,v3,t3;
        cin>>v1>>t1>>v2>>t2>>v3>>t3;
        if(t3>t2 || t3<t1){
            cout<<"NO"<<endl;
        }else{
            cout<<checkMix(v1,t1,v2,t2,v3,t3)<<endl;
        }
        t--;
    }
}
