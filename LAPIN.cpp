#include<iostream>
#include<string>
#include<map>
using namespace std;

bool IsSame(string s1, string s2){
	map<char,int> m1;
	for(int i=0; i<s1.length(); i++){
		if(m1.find(s1[i]) != m1.end()){
			map<char,int>::iterator it = m1.find(s1[i]);
			it->second += 1;		
		}else{
			m1.insert(pair<char,int>(s1[i],1));
		}
	}
	
	for(int i=0; i<s2.length(); i++){
		if(m1.find(s2[i]) != m1.end()){
			map<char,int>::iterator it = m1.find(s2[i]);
			if(it->second == 0)
			    return false;
			 it->second -= 1;
		}else{
			return false;
		}
	}
	return true;
}


int main(){
	int t;
	cin>>t;
	while(t-- > 0){
		string s;
		cin>>s;
		int l = s.length();
		bool isLapin;
		string s1,s2;
		if(l % 2 == 0){
			int mid = l/2;
			s1 = s.substr(0,mid);
			s2 = s.substr(mid,mid);
		}else{
			int mid = l/2;
			s1 = s.substr(0,mid);
			s2 = s.substr(mid+1,mid);
		}
		if(IsSame(s1,s2))
				cout<<"YES\n";
			else
				cout<<"NO\n";
	}
}
