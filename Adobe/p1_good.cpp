
/*
This Question asked in Adobe placement paper

In this problem, a String is composed of lowercase alphabets and wildcard characters i.e. '?'. Here, '?' can be replaced by any of the lowercase alphabets. Now you have to classify the given String on the basis of following rules:

If there are more than 3 consonants together or more than 5 vowels together, the String is considered to be "BAD". A String is considered "GOOD" only if it is not “BAD”.

NOTE: String is considered as "BAD" if the above condition is satisfied even once. Else it is "GOOD".

Input:
The first line consists of an integer T i.e number of test cases. The first and only line of each test case consists of a string s. 

Output:
If the string is GOOD,  Print "1"  else print "0".

Constraints: 
1<=T<=100
1<=|Length of string|<=100

Example:
Input:
2
aeioup??
bcdaeiou??

Output:
1
0

*/




#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int vo=0,co=0;
        int b=0;
        int cnt=0;
        int flag=0;
        for(int j=0;j<s.size();j++){
			if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='?'){
				flag=1;
			}
            if(flag==1){
            	cnt++;
            	flag=0;
            	if(cnt>5){
            	vo=1;
            	break;
            }
            }else{
            	cnt=0;
            }
        }
        if(cnt<6){
            cnt=0;
            flag=0;
                    for(int j=0;j<s.size();j++){
			if(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'){
				flag=1;
			}
            if(flag==1){
            	cnt++;
            	flag=0;
            	if(cnt>3){
            	co=1;
            	break;

            }
            }else{
            	cnt=0;
            }
        }
        }
        if(vo==1||co==1){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}

