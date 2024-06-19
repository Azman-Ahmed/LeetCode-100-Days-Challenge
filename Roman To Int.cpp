#include <bits/stdc++.h>
#define lli long long int

using namespace std;

void roman_to_int()
{
    string s;
    cin>>s;
    lli n = s.size(), ans = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='I') ans+=1;
        else if(s[i]=='V')
        {
            if(i-1!=-1 && s[i-1]=='I')
            {
                ans--;
                ans+=4;
            }
            else ans+=5;
        }
        else if(s[i]=='X')
        {
            if(i-1!=-1 && s[i-1]=='I')
            {
                ans--;
                ans+=9;
            }
            else ans+=10;
        }
        else if(s[i]=='L')
        {
            if(i-1!=-1 && s[i-1]=='X')
            {
                ans-=10;
                ans+=40;
            }
            else ans+=50;
        }
        else if(s[i]=='C')
        {
            if(i-1!=-1 && s[i-1]=='X')
            {
                ans-=10;
                ans+=90;
            }
            else ans+=100;
        }
        else if(s[i]=='D')
        {
            if(i-1!=-1 && s[i-1]=='C')
            {
                ans-=100;
                ans+=400;
            }
            else ans+=500;
        }
        else if(s[i]=='M')
        {
            if(i-1!=-1 && s[i-1]=='C')
            {
                ans-=100;
                ans+=900;
            }
            else ans+=1000;
        }
//            else if(s[i]=='L') ans+=50;
//            else if(s[i]=='C') ans+=100;
//            else if(s[i]=='D') ans+=500;
//            else if(s[i]=='M') ans+=1000;
        }
        cout<<ans<<endl;
}

int main()
{
    int t = 1;
    cin>>t;
    while(t--) roman_to_int();

}
