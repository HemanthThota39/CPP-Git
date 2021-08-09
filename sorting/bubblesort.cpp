//repeatedly swapping the adjacent elements

#include <iostream>
#include <stdlib.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
//bubble sort algorithm
void bubblesort(int array[], int len)
{
    
    while (1)
    {   
        int no_of_swaps = 0;
        for (int i=0; i<len-1; i++)
        {  
            if (array[i]>array[i+1]){
                swap(array[i],array[i+1]);
                no_of_swaps++;
            }
        }
        if(no_of_swaps == 0){break;}     
    }      
}

int main()
{
    int len;
    cout<<"Enter the number of elements to be contained in the array: ";
    cin>>len;
    int *array = new int(len);
    
    cout<<endl;
    cout<<"Enter all the elements of the array"<<endl;
    for (int i=0; i<len; i++)
    {
        cin>>array[i];
    }
    bubblesort(array, len);
    cout<<"Elements after soring are: "<<endl;
    for (int i=0; i<len; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}