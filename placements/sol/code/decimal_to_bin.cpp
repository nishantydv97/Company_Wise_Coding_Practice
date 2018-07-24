#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        string s="";
        while(num!=0){
            s+=to_string(num%2);
            //cout<<num%2;
            num/=2;
        }
        reverse(s.begin(),s.end());
        cout<<s;
        cout<<endl;
    }
    return 0;
}
