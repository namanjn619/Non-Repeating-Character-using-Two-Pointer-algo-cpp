#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);

	int left = 0;
	int right = left+1;
	char ch;
	int cnt = 1;
	while(left!=right){

		if(s[left] == s[right] and right==left+1){
			char temp;
			temp = s[right];
			s[right] = s[s.size()-1];
			s[s.size()-1] = temp;
			left = left+2;
			right = left+1;
		}

		if(s[left] == s[right]){
			char temp;
			temp = s[right];
			s[right] = s[s.size()-1];
			s[s.size()-1] = temp;
			left = left+1;
			right = left+1;
		}
		if(s[left]!=s[right] and right==s.length()){
			ch = s[left];
			break;
		}
		if(s[left]!=s[right]){
			right++;
		}
	}
	cout<<ch;
	return 0;
}
