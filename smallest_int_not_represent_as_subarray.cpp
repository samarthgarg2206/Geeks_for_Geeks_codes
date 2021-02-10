// smallest_int_not_represent_as_subarray.cpp
#include <iostream>
#include <numeric>
using namespace std;
int find_ele(long long int a[],int n){
	if (a[0]>1)
		return 1;
	long long int cnt = a[0];
	for(int i=1;i<n;i++){
		if (a[i]-a[i-1]<=1)
			cnt+=a[i];
		else
			if (a[i]-a[i-1]>=cnt && a[i]-cnt>1){
				// cout<<a[i]<<" "<<a[i-1]<<" "<<cnt<<endl;
				return cnt+1;
			}
			else
				cnt+=a[i];
	}
	return accumulate(a,a+n,0)+1;
}
int main(){
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	// cout<<accumulate(a,a+n,0)<<endl;
	cout<<find_ele(a,n);
}