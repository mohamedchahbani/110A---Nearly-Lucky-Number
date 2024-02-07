#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int nb1, c,nb=0;
    cin>>n;
    while(n!=0){
        c=n%10;
        if((c==7)||(c==4)){
            nb++;
        }
        n=n/10;
    }
    if(nb!=0){
        c=nb%10;
        while ((nb!=0)&&((c==7)||(c==4)))
        {
            nb=nb/10;
            c=nb%10;
        }
        if (nb==0)
        {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}