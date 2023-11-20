#include<bits/stdc++.h>
using namespace std;
void Primality_test(int a)
{
    if(a<2||a%2==0&&a!=2){
        cout<<a<<" "<<"Is not Prime number"<<endl;
        return;
    }
    if(a<=3){
        cout<<a<<" "<<"Is a Prime number"<<endl;
        return;
    }
    bool ok=true;
    for(int i=3;i*i<=a;i+=2){
        if(a%i==0){
            ok=false;
        }
    }
    if(ok==true){
        cout<<a<<" "<<"Is a Prime number"<<endl;
    }
    else{
        cout<<a<<" "<<"Is not Prime number"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        Primality_test(a);
    }
}

