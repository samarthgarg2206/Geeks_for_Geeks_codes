// binary_convertor.cpp
#include <iostream>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	stack <int> s;
	for(int i=0;i<32;i++){
		if(n & (1<<i))
			s.push(1);
		else
			s.push(0);
	}
	while(s.top()==0)
		s.pop();
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	cout<<endl;
}