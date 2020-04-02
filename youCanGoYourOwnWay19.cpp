#include<iostream>
#include<cstring>
using namespace std;
// Test Case 1 and 2 passed but RE in 3rd case :(
int main(){
    int it = 0;
    int k=1;
    cin>>it;
    while(it>0){
        char a[50000];
        int maze;
        cin>>maze;
        cin>>a;
        int i=0;
        cout<<"Case #"<<k<<": ";
        
        while(a[i]!='\0'){
            if(a[i]=='S'){cout<<'E';}else{cout<<'S';}
            i++;
        }
        cout<<"\n";
        k++;
        it--;}

}
