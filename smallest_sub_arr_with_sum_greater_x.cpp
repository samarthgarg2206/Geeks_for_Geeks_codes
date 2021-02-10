// smallest_sub_arr_with_sum_greater_x.cpp
#include<iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n>>x;
	vector <int> v;
	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		v.push_back(z);
	}
	int i=0;
	int j=0;
	int sum = accumulate(v.begin(), v.end(),0);
	if(x>=sum){
		cout<<"Not Possible\n";
		return 0;
	}
	for (int i=0;i<n;i++){
		if (v[i]>x){
			cout<<"1\n";
			return 0;
		}
	}
	
	sum = 0;
	while (j<n){
		while (sum<=x && j<n){
			sum+=v[j++];
		}
		while(sum>x && i<n){
			length = min(length,j-i);
			sum-=v[i++];

		}


	}
	cout<<length<<endl;
	return 0;
}