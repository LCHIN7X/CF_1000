//swap and delete
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.size();
        int count0 = 0,count1 = 0;
        //count how many 1 and 0
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }               
        }
        int length = 0;
        //count the length of number match or not
        for(int i=0;i<n;i++){
            if(s[i] == '0' && count1>0){
                count1--;
                length++;
            }
            else if(s[i]=='1' && count0>0){
                count0--;
                length++;
            }
            else{
                break;
            }

        }
        cout<<n-length<<endl;
    }
    return 0;
}
