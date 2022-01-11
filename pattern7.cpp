/*
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
5 4 3 2 1 0
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=1;
    
    for(int i=0;i<=n;i++){

        k=5;
        for(int j=0;j<=i;j++){
                cout<<k--<<" ";
        }
         cout<<endl;
    }
    for(int i=n; i>0;i--){
         k=5;
        for(int j=0;j<i;j++){
                cout<<k--<<" ";
        }
         cout<<endl;
    }

        
}
