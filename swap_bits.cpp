// swap_bits.cpp
#include<iostream>
// #include <bits/stdc++.h>
using namespace std;

unsigned int swapbit(int x){
	unsigned int m = x & 0xAAAAAAAA;
	unsigned int n = x & 0x55555555;
	m>>=1;
	n<<=1;
	return m|n;
}

int main(){
	int x;
	cin>>x;
	cout<<swapbit(x);
}