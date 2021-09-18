#include <iostream>
using namespace std;

void insertion_sort(int array[], int len)
{
    int j,key;
    for(int i=1;i<len;i++)
    {
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }

}

int main()
{
    int array[] = {11,23,43,55,64,32,22,333,43,4,5,67,89,32,12,44,55,65,21};
    int size = sizeof(array)/sizeof(array[0]);
    insertion_sort(array,size);
    for(int i=0; i<size; i++) 
        cout<<array[i]<<" ";
    return 0;
}