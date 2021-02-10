// largest_subarray_contiuous_elements.cpp
#include <iostream>
#include <algorithm>
using namespace std;
int func(int a[],int n){
	sort(a,a+n);
	int cnt = 0;
	int ans = 0;
	for(int i=1;i<n;i++){
		if (a[i]==a[i-1]+1){
			cnt++;
		}
		else{
			ans = max(ans,cnt);
			cnt=0;
		}
	}
	ans = max(ans,cnt);
	return ans+1;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<func(a,n);
	return 0;
}