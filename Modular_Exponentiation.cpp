// Modular_Exponentiation.cpp
#include <iostream>
#include<queue>
using namespace std;
int main(){
	// int x,y,p;
	// cin>>x>>y>>p;
	// int res = 1;
	// while(y>0){
	// 	if (y&1){
	// 		res=(res*x)%p;
	// 	}
	// 	y=y>>1;
	// 	x=(x*x)%p;
	// }
	// cout<<res<<endl;
	int n;
	cin>>n;
	int arr[n];
	priority_queue<int> heap;
	vector <int > v;
	for(int i=0;i<n;i++)
		cin>>arr[i];
    for(int i=0;i<n;i++){
        // heap.push(arr[i])
        if(heap.size()==2){
            if(heap.top()<arr[i]){
                heap.pop();
                heap.push(arr[i]);
            }
        }
        else
            heap.push(arr[i]);
        
    }
    // while(!heap.empty()){
    // 	v.push_back(heap.top());
    //     cout<<heap.top()<<" ";
    //     heap.pop();
    for(int i=0;i<heap.size();i++)
    	cout<<heap[i]<<" ";
        
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<" ";

    }
    cout<<endl;

}