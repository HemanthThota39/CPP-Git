#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3.14, 2.56};
    cout<<arr[1]<<endl;
    cout<<arr[0]<<endl;
    //cin>>int (input_value); This gives an error
    //double wage = sallary = 200.01; This gives us a error
    extern int i;
    //cout<<i; we will get an run-time error when we try to print a value which is not defined implicitly or explicitly
    int value = 10;
    int &refValue1 = value;//It just acts a synonym
    cout<<refValue1<<endl;
    const int value2 = 100;
    int *ptr = &value2;//error: this is a plain pointer
    const int *ptr2 = &value2;//This works
    return 0;    
}