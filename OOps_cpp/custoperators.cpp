#include <bits/stdc++.h>
using namespace std;


class Student{
        public:
            string name;
            int marks;
        Student( string sname, int marks){
            this->name = sname;
            this->marks = marks;
        }
        bool operator<(const Student A)const{
            return this->marks>A.marks;
        }

    };

int main()
{
    Student s1("Hemanth", 100);
    Student s2("Kittu", 80);
    Student s3("Chinnu", 70);
    Student s4("Akshara", 90);
    Student s5("Sreeja", 80);
    vector<Student> students;
    students.push_back(s1);
    students.push_back(s2);
    map<Student, int> mp;
    mp[s1] = 19;
    mp[s2] = 19;
    mp[s3] = 22;
    mp[s4] = 17;
    mp[s5] = 18;
    
    for(auto x:mp)
    {
        cout<<x.first.name<<endl;
    }
    
    
    return 0;
}