#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n,int source,int destination,int auxiliary)
{
    if(n==0)
    return;
    towerOfHanoi(n-1,source ,auxiliary,destination);
    cout<<"Disc moved from tower  "<<source<<"to tower  "<<destination<<endl;
    towerOfHanoi(n-1,auxiliary,destination,source);
}
int main()
{
    int n;
    cout<<"Enter n:\n";
    cin>>n;
    towerOfHanoi(n,1,3,2);//(n,source,destination,auxiliary)
    return 0;
}
