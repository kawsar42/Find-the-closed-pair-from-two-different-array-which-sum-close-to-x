#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(int ar[],int br[],int n,int m,int x)
{
    int l=0;
    int r=m-1;
    int ind1,ind2;
    int dif=INT_MAX;
    while(l<n && r>=0)
    {
        int sum=ar[l]+br[r];
        if(abs(sum-x)<dif)
        {
            dif=abs(sum-x);
            ind1=l;
            ind2=r;
        }
        if(sum>x)r--;
        else l++;
    }
    cout <<"(" << ar[ind1] << " " << br[r] << ")" << " \n" << ar[ind1]+br[ind2] << endl;
}
int main()
{
    int n,m,x;
    cin >> n;
    int ar[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    cin >> m;
    int br[m+5];
    for(int i=0; i<m; i++)
    {
        cin >> br[i];
    }
    sort(br,br+m);
    cin >> x;
    solve(ar,br,n,m,x);
    return 0;

}
/*
5
1 2 3 4 5
5
5 7 8 9 10
x=15
*/
