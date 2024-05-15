#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	// example below
	// assuming a != b != c for sake of example
	if(a > b){
		if(a > c){
			if(b > c){
				cout<<"a b c\n";
			} else{
				cout<<"a c b\n";
			}
		} else{
			cout<<"c a b\n";
		}
	} else{
		if(b > c){
			if(a > c){
				cout<<"b a c\n";
			} else{
				cout<<"b c a\n";
			}
		} else{
			cout<<"c b a\n";
		}
	}
}