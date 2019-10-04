#include<bits/stdc++.h>
using namespace std;
void printRandom(int n,int count)
{
    for(int i=0;i<count;i++)
    {
        int num=(rand()%(n+1));
    }
}
int main()
{
    int n;
    cin>>n;
    int count;
    cin>>count;
    string s[1000000];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        
    }
    srand(time(0));
    printRandom(n,count);
    cout<<s[n];
    return 0;
}