#include <bits/stdc++.h>
using namespace std;
const int n=1e7+10;
vector<int> isPrime(n,1);

int main() {
    isPrime[0]=isPrime[1]=0;
    for(int i=2 ;i<n;++i){
        if(isPrime[i]){
            for(int j=2*i ;j<n ;j+=i){
                isPrime[j]=0;
            }
        }
    }
    
    for(int i=0 ;i<100 ;++i){
        if(isPrime[i]){
            cout<<i<<" "; 
        }
    }
    cout<<endl;
	
    return 0;
}
