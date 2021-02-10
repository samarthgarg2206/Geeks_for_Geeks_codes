// Pythagorean_Triplet_in_an_array.cpp
#include <iostream>
#include <algorithm>
using namespace std;
bool search_pythagorean(int a[],int n){
	for(int i=0;i<n;i++)
		a[i] = (a[i]*a[i]);
	sort(a,a+n);
	for(int i=0;i<n-2;i++){
		int j=i+1;
		int k=n-1;
		while (j<k){
			// cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;

			if (a[i]+a[j]==a[k]){
				return true;
			}
			else if (a[i]+a[j]<a[k])
				k--;
			else if (a[i]+a[j]>a[k])
				j++;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	if(search_pythagorean(a,n)) cout<<"True\n";
	else cout<<"False\n";
	
}
