/*
   1     1 
    2   2
      3
    4   4
   5     5
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k= 1;

    for(int i=(n-1)/2; i>0;i--){

      for(int j=n-i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       for(int j=2*i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       k++;
       cout<<endl;
    }


    for(int i=0;i<=n;i++){
        cout<<" ";
    }
    cout<<k++<<endl;


    for(int i=1;i<(n/2+1);i++){
       for(int j=n-i;j>0;j--){
           cout<<" ";
       }
       cout<<k<<" ";
       for(int j=2*i;j>0;j--){
           cout<<" ";
       }
       cout<<k++<<" ";
       cout<<endl;

    }

        
}
