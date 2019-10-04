#include<bits/stdc++.h>
using namespace std;
int randomfunc(int j)
{
    return rand()%j;
    }
int main()
{
    cout<<"Enter the number of entries \n";
    srand(unsigned(time(0)));
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        cin>>s[i];
    }
    
    random_shuffle(s.begin(),s.end());
    random_shuffle(s.begin(),s.end(),randomfunc);
    cout<<"Array Contains:";
    for(int i=0;i<l;i++)
    {
        cout<<" "<<i;
    }
    return 0;
    
}