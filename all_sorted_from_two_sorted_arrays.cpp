// all_sorted_from_two_sorted_arrays.cpp
#include <iostream>
using namespace std;
void print_arr(int c[],int n){
	for (int i=0;i<n;i++) cout<<c[i]<<" ";
	cout<<endl;
}
void all_sorted_arr(int a[],int b[],int c[],int i,int j,int m,int n,int len,bool flag){

	if (flag){
		if(len){
			print_arr(c,len+1);
		}
		for(int k=i;k<m;k++){
			if(!len){
				c[len] = a[k];
				all_sorted_arr(a,b,c,i+1,j,m,n,len,!flag);
			}
			else{
				if (a[k]>c[len]){
					c[len+1] = a[k];
					all_sorted_arr(a,b,c,k+1,j,m,n,len+1,!flag);
				}
			}
		}
	}
	else{
		for(int k=j;k<n;k++){
			if (b[k]>c[len]){
				c[len+1] = b[k];
				all_sorted_arr(a,b,c,i,k+1,m,n,len+1,!flag);
			}
		}
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	int c[m+n];
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];

	all_sorted_arr(a,b,c,0,0,m,n,0,true);
}