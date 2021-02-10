// next_sparse_number.cpp
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	vector <int> v;
	while(x>0){
		v.push_back(x%2);
		x/=2;
	}
	v.push_back(0);
	// cout<<endl;
	int last_final = 0;
	for(int i=1;i<v.size()-1;i++){
		if (v[i]==1 && v[i-1]==1 && v[i+1]!=1){
			v[i+1] = 1;
			for(int j=i;j>=last_final;j--)
				v[j]= 0;
			last_final=i+1;
		} 
	}
	int ans=0;
	for(int i=0;i<v.size();i++){
		// cout<<v[i]<<" ";
		ans+= (v[i]*pow(2,i));
	}
	cout<<ans<<endl;
}