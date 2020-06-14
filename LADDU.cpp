#include<iostream>
using namespace std;

int getContestBonus(int rank){
	if(rank >= 20)
		return 0;
	return (20-rank);
}

int main(){
	int arr[3] = {300, 300, 50};
	int t;
	cin>>t;
	while(t-- > 0){
		int res;
		int a;
		string s;
		cin>>a>>s;
		int totalPoints = 0;
		for(int i = 0; i < a; i++){
			int res;
			string ac;
			cin>>ac;
			if(ac.compare("CONTEST_WON") == 0){
				int rank;
				cin>>rank;
				totalPoints += 300 + getContestBonus(rank);
			}else if(ac.compare("TOP_CONTRIBUTOR") == 0){
				totalPoints += 300;
			}else if(ac.compare("BUG_FOUND") == 0){
				int severity;
				cin>>severity;
				totalPoints += severity;
			}else if(ac.compare("CONTEST_HOSTED") == 0){
				totalPoints += 50;
			}
		}
		if(s.compare("INDIAN") == 0){
			res = totalPoints/200;
		}else{
			res = totalPoints/400;
		}
		cout<<res<<"\n";
	}
}
