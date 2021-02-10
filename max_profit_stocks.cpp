// max_profit_stocks.cpp
#include <iostream>
#include <vector>
using namespace std;

int max_profit(vector <int> v,int n){
	int i=0;
	int profit = 0;
	while(i<n-1){
		if(v[i+1]>v[i])
			profit+=(v[i+1]-v[i]);
		i+=1;
	}
	return profit;
}
vector<vector<int> > max_profit_days(vector <int> v,int n){
	int i=0;
	int profit = 0;
	vector <int> x;
	vector <vector<int> > ans;
	bool ok =false;
	int p=0;
	int q=0;
	while(i<n){
		if(i<n-1 && v[i+1]>=v[i]){
			profit+=(v[i+1]-v[i]);
			if((v[i+1]-v[i])>0){
        		q+=1;
        		ok = true;
			}
			else if(!ok){
			    p=i+1;
			    q=p;
			}
			else
			    q+=1;
        	
		}
		else if(ok){
			x.push_back(p);
			x.push_back(q);
			ok = false;
			p=i+1;
			q=p;
			ans.push_back(x);
			x.clear();
		}
		else{
			p=i+1;
			q=p;
		}
		i++;
	}
	return ans;
	// cout<<profit<<endl;
	// return profit;
}

int main(){
	int n;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);

	}
	cout<<max_profit(v,n)<<endl;
	max_profit_days(v,n);

}