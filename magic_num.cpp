// magic_num.cpp
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans = 0;
	int i = 1;
	while (n>0){
		ans+=((n%2)*pow(5,i));
		i++;
		n/=2;
	}
	cout<<ans<<endl;

}