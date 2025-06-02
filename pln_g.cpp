//The Cost of Delay
//PLN final round 2025

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<long long>a(n); //store processing time invoice

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

        sort(a.begin(),a.end());

        vector<long long> selete(n+1,0);
        //sum of array
        for(int i=0;i<n;i++){
            selete[i+1]=selete[i]+a[i];
        }   
        
        //minimun penalty
            vector<long long>result(n+1,0);
            for(int k=1;k<=n;k++){
                //all invoice can process in 1 day
                if(k<=m){
                    result[k] = selete[k];
                }
                //m invoice each day
                else{
                    result[k] = selete[k]+result[k-m];
                }
            }
        
    
    for(int k=1;k<=n;k++){
        cout<<result[k]<<" ";
    }
    return 0;
}