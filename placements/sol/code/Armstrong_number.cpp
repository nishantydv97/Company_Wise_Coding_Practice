#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int num;
        cin>>num;
        long long int num1=num;
        long long int sum=0;
        long long int power=to_string(num).length();
        while(num1!=0){
//            cout<<pow((num1%10),power)<<"  ";
            sum+=pow((num1%10),power);
            num1/=10;
        }
//      cout<<sum<<endl;
        if(num==sum){
            cout<<"Armstrong number"<<endl;
        }else{
            cout<<"Not a Armstrong number  "<<endl;
        }
    }
    return 0;
}
