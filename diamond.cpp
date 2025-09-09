#include<iostream>
using namespace std;
int main(){
    int i,j,k,n=3;
    for(i=1;i<=n;i++){
        for(j=n-1;j>=i;j--){
            cout<<"  ";}
            for(k=1;k<=2*i-1;k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            cout<<"  ";
        }
        for(k=5;k>=(2*i)-1;k--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}