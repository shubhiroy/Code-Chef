#include<iostream>                                                                                                                                                                                                                            #include<vector>                                                                                                                                                                                                                             using namespace std;                                                                                                                                                                                                                                                                                                                                                                                                                                                                      int main(){                                                                                                                                                                                                                                          vector<int> g1;                                                                                                                                                                                                                              int n;                                                                                                                                                                                                                                       scanf("%d",n);                                                                                                                                                                                                                               while(n!=42){                                                                                                                                                                                                                                        g1.push_back(n);                                                                                                                                                                                                                             scanf("%d",n);                                                                                                                                                                                                                       }                                                                                                                                                                                                                                            for(vector<int>::iterator ir = g1.begin(); ir != g1.end(); ++ir){                                                                                                                                                                                    printf("%d\n",*ir);                                                                                                                                                                                                                  }                                                                                                                                                                                                                                    }  #include<stdio.h>
#include<vector>
using namespace std;

int main(){
	vector<int> g1;
	int n;
	cin>>n;
	while(n!=42){
		g1.push_back(n);
		cin>>n;
	}
	for(vector<int>::iterator ir = g1.begin(); ir != g1.end(); ++ir){
		cout<<*ir<<"\n";
	}
}

