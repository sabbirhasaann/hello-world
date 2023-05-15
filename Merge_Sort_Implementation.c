//I have learnt merge sort implementation, and i want to share it.
//Merge sort implementation
#include <stdio.h>

void merge_sort(int a[],int left,int right);
void merge(int a[],int left,int mid,int right);
int main()
{
  int n;
  printf("Enter how many elements you want to store? ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  
  merge_sort(a,0,n-1);
  printf("After sorting array elements are : \n");
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
void merge_sort(int a[],int left,int right)
{
  if(left<right)
  {
    int mid;
    mid = left + (right-left)/2;
    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);
    
    merge(a,left,mid,right);
  }
}

void merge(int a[],int left,int mid,int right)
{
}


