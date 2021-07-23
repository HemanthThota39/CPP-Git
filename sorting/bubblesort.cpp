//repeatedly swapping the adjacent elements

#include <iostream>
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
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    bubblesort(array, sizeof(array)/sizeof(array[0]));
    for (int i=0; i<sizeof(array)/sizeof(array[0]); i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}