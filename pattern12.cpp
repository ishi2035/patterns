/*
1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x1=0,x=1,c;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            c=x;
            x+=x1;
            x1=c;
            
        }
        cout<<endl;
    }
        
}
