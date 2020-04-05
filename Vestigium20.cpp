#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#define ll long long ;
using namespace std;
//int c =0;
void solve(int q){
    int N;
    cin>>N;
     vector<vector<long long int> > a( N , vector<long long int> (N));
    int k=0,r=0,c=0;
    for(int i=0;i<N;i++){
 for(int j=0;j<N;j++){
     cin>>a[i][j];
 }
    }
    bool rcheck = true;
    bool check  = true;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        if(i==j){
            k+=a[i][j];
        }
    }
    }
   for(int i=0;i<N;i++)
   {
       rcheck = true;
       for(int j=0;j<N;j++){
           for(int m=0;m<N;m++){
               if(a[i][j] == a[i][m] && j!=m){
                  
                   rcheck = false;
                   r+=1;
                   break;
               }
           }if(rcheck == false){break;}
       }
   }
   for(int j=0;j<N;j++){
       check = true;
       for(int i=0;i<N;i++){
           for(int m =0;m<N;m++){
               if(a[i][j] == a[m][j] && i!=m){
                 
                   check =false;
                   c+=1;
                   break;
               }
              
           }
            if(check == false){break;}
       }
   }
    cout<<"Case #"<<q<<": "<<k<<" "<<r<<" "<<c<<"\n";
    }
   

int main(){
   std::ios_base::sync_with_stdio(false);
   int t;
   cin>>t;
   t+=1;
   int i = 0;
   while(--t){i++;
   solve(i);
   }
   

 }
 

 
