#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int key,c=0,sh=0;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        sh++;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            c++;
            sh++;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ncomparisons = "<<c<<"\nshifts = "<<sh<<endl;

}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        int arr[s];
        for(int j=0;j<s;j++)
        {
            cin>>arr[j];
        }
        insertion(arr,s);
    }
    return 0;
}


