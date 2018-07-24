#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int j=s.length()-1;
        bool res=true;
        int i=0;
        while(i<j){
            if(s[i]!=s[j]){
                res=false;
            }
            i+=1;
            j-=1;
        }
        if(res){
            cout<<"palindrome "<<endl;
        }else{
            cout<<"not a palindrome"<<endl;
        }
    }
    return 0;
}
