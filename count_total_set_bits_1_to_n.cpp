// count_total_set_bits_1_to_n.cpp

#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans=0;
	for(int j=0;j<32;j++){
		int count = 0;
		for (int i = 1; i <= n; ++i)
		{
			if(i &(1<<j))
				count+=1;
		}
		ans+=count;
	}
	
	cout<<ans<<endl;

}