#include <bits/stdc++.h>
using namespace std;


class Student{
    public:
        string sname;
        int smarks;
        Student(string name, int marks){
            sname = name;
            smarks = marks;
        }
};

bool mycomp(Student A, Student B)
{
    return A.sname>B.sname;
}

int main()
{
    vector<Student> s;
    Student s1("Hemanth", 100), s2("Akash", 20);
    s.push_back(s1);
    s.push_back(s2);
    sort(s.begin(), s.end(), mycomp);
    for(auto x:s)
    {
        cout<<x.sname<<" ";
    }
    return 0;
}