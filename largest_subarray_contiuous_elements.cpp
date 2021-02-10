// largest_subarray_contiuous_elements.cpp
#include <iostream>
#include <algorithm>
using namespace std;
int func(int a[],int n){
	int ans = 1;
	for(int i=0;i<n-1;i++){
		int mini = a[i],maxi = a[i];
		for(int j=i+1;j<n;j++){
			mini = min(mini,a[j]);
			maxi = max(maxi,a[j]);
			if ((maxi-mini)==(j-i))
				ans = max(ans,maxi-mini+1);
		}
	}
	return ans;

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