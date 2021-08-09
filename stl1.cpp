#include <iostream>
#include <vector>

using namespace std;
using std::vector;
int main()
{
    //vector 

    vector<int> v1;
    for (int i=1; i<10; i++){
        v1.push_back(i);
    }
    cout<<"Elements in the vector are: "<<endl;
    for (auto i = v1.begin(); i!=v1.end(); i++){
        cout << *i <<" ";
    }
    cout<<"\nElements in reverse order of the vector are: "<<endl;
    for (auto i = v1.rbegin(); i!=v1.rend(); i++){
        cout << *i <<" ";
    }
    cout<<"\ncapacity of the vector is "<<v1.capacity()<<endl;
    cout<<"max size of the vector is "<<v1.max_size()<<endl; 
    cout<<"current size of the vector is "<<v1.size()<<endl;

    //print the minimum element without sorting
    vector<int> myvec{33,44,65,1,23,44,11,22,67};
   
    cout<< "minimum element of the above vector myvec is : "<<*min_element(myvec.begin(),myvec.end())<<endl;

     //print the maximum element

    cout<< "maximum element of the above vector myvec is : "<<*max_element(myvec.begin(),myvec.end())<<endl;

    //sort 
    vector<int> v4{3,4,5,6,2,8,9};
    sort(v4.begin(),v4.end());
    //binary search 
    if(binary_search(myvec.begin(),myvec.end(),24)) 
    {
        cout<<"found in the vector"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }
    //find 
    auto it = find(myvec.begin(),myvec.end(),44);
    if(it!=myvec.end()){
        cout<<"Found at the index: "<<it-myvec.begin()<<endl;

    }else{
        cout<<"Not found in the vector"<<endl;
    } 
    //Upper Bound and Lower Bound

    // Upper bound points to an integer which is strictly greater than the specified key where as the lowerbound points to the key which is greaterthan or equalto the mentioned key
    // We can use this for finding the frequency of a particular element in the list

    vector<int> fre{1,2,6,2,4,5,2,8,3,4,5,6};
    auto itr = upper_bound(fre.begin(),fre.end(),2);
    auto itr2 = lower_bound(fre.begin(),fre.end(),2);
    cout<<"Frequency of 2 is: "<<itr-itr2<<endl;
    return 0;
}

