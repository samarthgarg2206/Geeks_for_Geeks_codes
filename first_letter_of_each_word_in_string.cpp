// first_letter_of_each_word_in_string.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	bool v = false;
	vector<char> vec;
	vec.push_back(s[0]);
	for(int i=0;i<s.length();i++){
		if(s[i]==' ')
			v = true;
		else if(s[i]!=' ' && v==true){
			vec.push_back(s[i]);
			v=false;
		}
	}
	for(int i=0;i<vec.size();i++)
		cout<<vec[i];
	cout<<endl;
}