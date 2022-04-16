#include <bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n)
{
    int cp=0;
    int sw=0;
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            cp++;
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);
        sw=sw+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\ncomparisons = "<<cp<<"\nswaps = "<<sw;
}


int main()
{
    int t;
    cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       selectionsort( a,n);
   }

    return 0;
}
