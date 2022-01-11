/*
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

*/

#include<iostream>
using namespace std;
int no(int r, int c){
    int rf=1, cf=1;

    for(int i =0;i<c;i++){
        rf*=r-i;
        cf*=c-i;
    }
    
        return rf/cf;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){    
        for(int j=1;j<=i;j++){    
               cout<<no(i-1,j-1)<<" ";
            }
            
        cout<<endl;
    }   
}
