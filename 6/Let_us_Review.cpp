#include <iostream>
#include <string.h>
using namespace std;


int main(){ 
    int n, i, j;
    string s, ev, od;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        ev="";
        od="";
        for(j=0; j<s.length();j++){
            
            if(j%2==0) 
                ev += s[j];
            else 
                od += s[j];
        }
        cout<<ev;
        cout<<" "<<od<<endl;
    } 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
