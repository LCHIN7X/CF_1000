//helmet in night light

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<pair<long long,long long>>v(n);
        vector<long long>a(n),b(n);

        for (int i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)
            cin>>b[i];
        
        for(int i=0;i<n;i++)
            v[i]={b[i],a[i]};

            sort(v.begin(),v.end());
            long long min = p;
            long long shared = 1;

            for(auto it:v){
                long long can_share = it.second;
                long long sharing_cost = it.first;

                if(sharing_cost>=p){
                    break;
                }
                if(shared+can_share>n){
                    min += (n-shared)*sharing_cost;
                    shared = n;
                    break;
                }
                else{
                    min += can_share * sharing_cost;
                    shared += can_share;
                }
            }

            min +=(n-shared)*p;
            cout<<min<<endl;

        
        }
        return 0;
}