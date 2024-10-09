
#include <iostream>
using namespace std;
int main (){
    int i,a,b;
    cout<<"heyyy "<<"brooo "<<"what's "<<"up"<<endl;
    cout<<"enterr 2 no";
    cin>>a>>b;

    for(i=(a<b?a:b);i>=1;i--){
        if(a%i==0&b%i==0){
            break;
        }
    }
    cout<<"HCF of "<<a<<"and "<<b<<"is "<<i<<endl;

    cout<<"lcm of "<<a<<"and "<<b<<"is "<<(a*b)/i<<endl;
}
