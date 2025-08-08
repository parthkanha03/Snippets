#include <bits/stdc++.h>
using namespace std;
const int n=1e7+10;
vector<int> isPrime(n,1);
vector<int> low(n,0) ,high(n,0);

int main() {
    isPrime[0]=isPrime[1]=0;
    
    for(int i=2 ;i<n;++i){
        if(isPrime[i]){
            low[i]=high[i]=i;
            for(int j=2*i ;j<n ;j+=i){
                isPrime[j]=0;
                high[j]=i;
                if(low[j]==0){
                    low[j]=i;
                }
            }
        }
    }
  
	
	// vector<int> prime_factors;  // using array
	map<int,int> prime_map;
	int num;
	cin>>num;
	while(num>1){
	    int prime_fac=high[num];
	    while(num%prime_fac==0){
	        num/=prime_fac;
	        // prime_factors.push_back(prime_fac);
	        prime_map[prime_fac]++;
	    }
	}
	// reverse(prime_factors.begin(),prime_factors.end());
	for(auto it : prime_map){
	    cout<<it.first<<" "<<it.second<<endl;
	}
	
    return 0;
}
