#include <bits/stdc++.h>
using namespace std;

void createlps(string s, int n, int lps[]){
    int i = 0;
    int len = 0;
    lps[i++] = len;
    while(i<s.length()){
        if(s[i]==s[len]){
            len++;
            lps[i] = len;
        }else{
            len = len > 0 ? lps[len-1] : 0;
            while(len>0 && s[len]!=s[i]){
                len--;
            }
            if(s[i]==s[len]){
                len++;
                lps[i] = len;
            }else{
                lps[i]=len;
            }
        }
        i++;
    }
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        string s;
        cin>>n>>s;
        int lps[n];
        createlps(s,n,lps);
        int pref[n];
        for(int i=0;i<n;i++){
            pref[i] = 0;
        }
        for(int i=0;i<n;i++){
            pref[lps[i]]++;
        }
        if(pref[0]==n){
            cout<<s<<endl;
        }else{
            int j=-1,end=0;
            for(int i=1;i<n;i++){
                if(pref[i]>=j){
                    j = pref[i];
                    end = i;
                }
            }
            cout<<s.substr(0,end)<<endl;
        }
        t--;
    }
}