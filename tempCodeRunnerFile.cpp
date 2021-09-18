Student s1("Hemanth", 100), s2("ganesh", 80), s3("Akhil", 50), s4("sunny", 95);
    vector<Student> students;
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);
    sort(students.begin(), students.end(), mycomp);