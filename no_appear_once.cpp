// no_appear_once.cpp
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans= 0;
	for(int i=0;i<32;i++){
		int count = 0;

		for(int j=0;j<n;j++){
			if(a[j] & (1<<i)){
				count++;
			}
		}
		if(count%3!=0)
			ans += (pow(2,i));
	}
	cout<<ans<<endl;
}