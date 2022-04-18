#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low-1,j=high+1;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
            return j;
        swap(arr[i],arr[j]);
    }
}
int randomPivot(int arr[],int low,int high)
{
    int random=low+rand()%(high-low);
    swap(arr[random],arr[low]);
    return partition(arr,low,high);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int index=randomPivot(arr,low,high);
        quickSort(arr,low,index);
        quickSort(arr,index+1,high);
    }
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
        quickSort(arr,0,s-1);
        for(int k=0;k<s;k++)
            cout<<arr[k]<<" ";
    }
}
