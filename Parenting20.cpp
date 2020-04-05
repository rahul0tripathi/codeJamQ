#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void solve(int q){
   vector<int>c;
    vector<int>j;
   pair<int, int> a[1000];
vector<char> result;
int N;
cin>>N;
for(int i=0;i<N;i++){
   int ao,b;
   cin>>ao>>b;
   a[i] = make_pair(ao,b);
}
for(int i=0;i<N;i++){
if(i==0){
    j.push_back(a[0].first);
   j.push_back(a[0].second);
    result.push_back('J');
}
else if(i==1){
    c.push_back(a[1].first);
     c.push_back(a[1].second);
    result.push_back('C');
}else{
   
    if(a[i].first>=c.back()||a[i].second<=c.front()){
        c.push_back(a[i].first);
        c.push_back(a[i].second);
        sort(c.begin(),c.end());
        result.push_back('C');
    }
    else if(a[i].first>=j.back()a[i].second<=j.front()){
         j.push_back(a[i].first);
        j.push_back(a[i].second);
        sort(j.begin(),j.end());
        result.push_back('J');
    }else{
        cout<<"Case #"<<q<<": "<<"IMPOSSIBLE"<<"\n";
        return;
    }
}
}  
 cout<<"Case #"<<q<<": ";
for(auto i:result)cout<<i;
cout<<"\n";
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
//   solve(1);

 }
