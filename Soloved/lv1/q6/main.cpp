#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {
	string s;
	cin >> s;
	int def=96;
	for(int i=0;i<s.size();i++){
		if(s[i]=='{'){
			cout<<s[i];
		}
		else if(s[i]=='_')
		{
			cout<<"_";
		}
		else if(s[i]=='}'){
			cout<<'}';
		}
		else{
			int n=(int(s[i])-def+23) % 26 + def;
			cout<<char(n);
		}
	}
	cout<<endl;
	return 0;
}
