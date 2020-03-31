//Could not Pass The Third Test Case
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long;
int main(){
    int it = 0;
    int k=1;
    cin>>it;
    while(it>0){ll int num,sacrificial_num=0,s1=0,s2=0;
        cin>>num;
        sacrificial_num = num;
        s1=num;
        int power = 0;
        while(sacrificial_num>0){
            if(sacrificial_num%10 == 4){
                int temp = pow(10,power);

                s2+=temp;
                s1 -=temp;

            }
            sacrificial_num/=10;
            power++;
        }
        cout<<"Case #"<<k<<": "<<s1<<" "<<s2<<"\n";
        k++;
        it--;}

}
