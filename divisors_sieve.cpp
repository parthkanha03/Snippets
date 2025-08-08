#include <bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int> divisors[n];

int main() {
     for(int i=2 ;i<n;++i){
            for(int j=i ;j<n ;j+=i){
                divisors[j].push_back(i);
            }
        
    }
    for(int i=1 ; i<=10 ;++i){
        for(auto it : divisors[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
return 0;
}


// OUTPUT : 
// 2 
// 3 
// 2 4 
// 5 
// 2 3 6 
// 7 
// 2 4 8 
// 3 9 
// 2 5 10
