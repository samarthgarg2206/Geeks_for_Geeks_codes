// all_palindrome_partition_string.cpp

#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool is_palindrome(string s,int start,int end){
	while (start<end){
		if(s[start]!=s[end])
			return false;
		start++;
		end--;

	}
	return true;
}
void all_parts_util(vector <vector<string> > &all_parts,vector <string> &cuur_part,int start,int n,string s){
	if(start>=n){
		all_parts.push_back(cuur_part);
		return;
	}
	for(int i=start;i<n;i++){
		if(is_palindrome(s,start,i)){
			cuur_part.push_back(s.substr(start,i-start+1));
			all_parts_util(all_parts,cuur_part,i+1,n,s);
			cuur_part.pop_back();
		}
	}

}
void all_part(string s){
	int n = s.length();
	vector <string> cuur_part;
	vector <vector<string> > all_parts;
	all_parts_util(all_parts,cuur_part,0,n,s);
	for(int i=0;i<all_parts.size();i++){
		for(int j=0;j<all_parts[i].size();j++){
			cout<<all_parts[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	string s;
	cin>>s;
	all_part(s);
}