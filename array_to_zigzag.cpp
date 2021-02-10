// array_to_zigzag.cpp
#include <iostream>
using namespace std;
void swap(int *x,int *y){
	// cout<<*x<<" "<<*y<<endl;
	int t = *x;
	*x = *y;
	*y = t;
}
int main(){
	int n; 
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	// swap(&a[0],&a[1]);
	// cout<<a[0]<<" "<<a[1]<<endl;
	for(int i=0;i<n-1;i++){
		if(i%2==0){
			if (a[i+1]<a[i]){
				swap(&a[i],&a[i+1]);
			}
		}
		else{
			if(a[i+1]>a[i]){
				swap(&a[i],&a[i+1]);
			}
		}
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;
}