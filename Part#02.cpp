#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
   while(low <= high)
   {
      int mid = low + (high - low) / 2; 
      // Check if the target is at mid
      if(arr[mid] == target)
      {
         return mid;
      }
      else if(arr[mid] > target)
      { 
          high = mid - 1;
      }
      else
      {
          low = mid + 1;
      } 
   } 
  return -1;
}

int main()
{
    int arr[6];
    for(int i=1; i<=7; i++)
    {
        cout<<"\n Enter the values of Array at index: "<< i <<" is: "<<"\t";
        cin>>arr[i];
    }
    int size= sizeof (arr) / sizeof (arr[0]);
    int target;
    cout<<"\nEnter the value to be searched: "<<"\t";
    cin>>target;
    int result = binarySearch(arr, size, target);
    if(result!=-1)
    { 
        cout<<"Index " << result <<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}