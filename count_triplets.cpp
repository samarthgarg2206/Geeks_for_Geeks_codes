// count_triplets.cpp
#include <iostream>
#include <algorithm>
using namespace std;
int count_triplet(int *a,int sum,int n){
	int ans=0;
	sort(a,a+n);
	for(int  i=0;i<n;i++){
		int j=i+1,k=n-1;
		while(j<k){
			if (a[i]+a[j]+a[k]>=sum)
				k--;
			else{
				ans+=(k-j);
				j++;
			}
		}
	}
	return ans;

}
int main(){
	int n,sum;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>sum;
	cout<<count_triplet(a,sum,n);
	return 0;
	
}