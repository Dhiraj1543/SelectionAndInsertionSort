1. Which of the following is true about selection sort:
a) In each iteration we find the minimum element in the unsorted part of the array.
b) In each iteration we find the index of the minimum element in the unsorted part of the array.
c) We swap the index of the minimum element with the first element of the array.
d) It takes O(n^2) swaps.
Solution :

b)In each iteration we find the index of the minimum element in the unsorted
part of the array.

2.Which of the following examples represent the worst case input for an insertion sort?
a) array in sorted order
b) large array
c) normal unsorted array
d) array sorted in reverse order
Solution :
d) array sorted in reverse order.

3.How many passes would be required during insertion sort to sort an array of 5 elements?
a) 1
b) Depends on order of elements
c) 4
d) 5
Solution :
c) 4

4.Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
two numbers formed from digits of the array. Please note that all digits of the given array must be
used to form the two numbers.

#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,1,5,5,2,3};
    int n=6;
    for(int i=1;i<n;i++){
    int j=i;
    while(j>=1 && arr[j]<arr[j-1])
    {
        swap(arr[j],arr[j-1]);
        j--;
    }
}
int x=0;
for(int i=0; i<n;i++)
{
    x*=10;
    x+=arr[i];
}
// For second minimum we need to swap;
 for(int i=n-1;i>=1;i--)
 {
    if(arr[i]!=arr[i-1])
    {
        swap(arr[i],arr[i-1]);
        break;
    }
 }
 int y=0;
for(int i=0; i<n;i++)
{
    y*=10;
    y+=arr[i];
}
cout<<"Minimum Sum is"<<x+y; 
}

5.
Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
and display the sorted array.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string varr[5]={"dheeraj","anand","nitesh","himanshu","saurav"};
    int n=5;
    // bubble sort
       for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (varr[j] > varr[j + 1]) {
                swap(varr[j],varr[j+1]);
            }
        }
    }

    // Output the sorted vector
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << varr[i] << " ";
    }
    cout << endl;

    return 0;
}