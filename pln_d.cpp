//Destiny of Computer Science
//PLN final round 2025

#include <bits/stdc++.h>
using namespace std;

int main(){
    double p; 
    int n;
    cin>>p>>n;

    vector<int>weight(n);
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    sort(weight.begin(),weight.end());
    double minWeight = weight[0];
    double maxWeight = weight.back();

    if (minWeight/maxWeight>p){
        count<<0<<endl;
        return 0;
    }
    int left =0;
    int right = 500;

    int answer = 500;
    while(left <= right){
        int mid = left + (right - left)/2;
        if()
    }
}
