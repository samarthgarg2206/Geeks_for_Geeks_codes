// sum_bit_diff.cpp

#include <iostream>
#include<vector>
using namespace std;
int count_one(int x){
	int p=0;
	while(x>0){
		p+=(x%2);
		x/=2;
	}
	return p;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int ans=0;
	vector<int> v;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<32;i++){
		int count = 0;
		for(int j=0;j<n;j++){
			if(a[j] & (1<<i)){
				count++;
			}
		}
		ans += count*(n-count)*2;
	}
	cout<<ans<<endl;


}