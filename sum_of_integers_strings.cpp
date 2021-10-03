#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    
    int c=0;
    string s;
    for(auto ch:str)
    {   
        if(isdigit(ch))
        {
            s=s+ch;
        }
        else{
            if(s.size()>0)
            c=c+stoi(s);
            s="";
        }
    }
    if(s.size()>0)
    c+=stoi(s);
    cout<<c;
}
