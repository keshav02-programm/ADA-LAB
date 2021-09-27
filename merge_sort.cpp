#include <stdio.h>
#include<iostream>
 #include<stdlib.h>
#include<time.h>
using namespace std;
void merge(int [], int, int, int);
void merge_sort(int [],int, int);
void print_array(int arr[],int n){
	for(int i = 0;i <n; i++)
    {
        cout<<arr[i]<<"\n";
    }
}
int main()
{
    int i, size;
 
    cout<<"Enter total number of elements:";
    cin>>size;
    int list[size];
    srand(time(0));
    for(i = 0; i < size; i++)
    {
        list[i]=rand();
    }
   print_array(list,size);
 
    merge_sort(list, 0, size - 1);
    printf("After merge sort:\n");
    print_array(list,size);
   return 0;
}
 
void merge_sort(int list[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        merge_sort(list, low, mid);
        merge_sort(list, mid + 1, high);
        merge(list, low, mid, high);
    }
}
 
void merge(int list[],int low,int mid,int high)
{
    int i, mi, k, lo, temp[high];
 
    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }
 
    for (k = low; k <= high; k++)
    {
        list[k] = temp[k];
    }
}
