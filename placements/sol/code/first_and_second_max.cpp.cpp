#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max=INT_MIN,smax=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i]>smax){
                if(arr[i]>=max){
                    max=arr[i];
                }else{
                    smax=arr[i];
                }
            }
        }
        cout<<"max element is "<<max<<endl;
        cout<<"second max element is "<<smax<<endl;
    }
    return 0;
}
