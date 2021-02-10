// count_bits_a_b.cpp
#include <iostream>
using namespace std;
int func(int a,int b){
	int ans=0;
	while(a>0 or b>0){
		if((a%2==0 && b%2==1) or (a%2==1 && b%2==0))
			ans+=1;
		a/=2;
		b/=2;
	}
	return ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	// cout<<func(a,b)<<endl;
	int n,d;
	cin>>n>>d;
	cout<<(n<<d)<<endl;
	cout<<((n<<d) | (n>>(32-d)))<<endl;

}