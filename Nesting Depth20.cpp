#include<iostream>
#include<string>
#include<vector>
#include <cstdlib>
using namespace std;
bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

void solve(int q){
    vector<char>nes;
    vector<char>sec;
  string s;
   cin>>s;
    for(int i=0;i<s.size();i++){
        int lim = s[i] - '0';
        for(int j=0;j<lim;j++){
            nes.push_back('(');
        }
        nes.push_back(s[i]);
        for(int j=0;j<lim;j++){
            nes.push_back(')');
        }
    }
std::string g(nes.begin(),nes.end());
bool k =true;
while(k){k=replace(g,")(","");}
cout<<"Case #"<<q<<": "<<g<<"\n";
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
