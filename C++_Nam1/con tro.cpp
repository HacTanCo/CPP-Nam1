#include <iostream>
using namespace std;
struct Student
{
    string name;
    int age;
};

int main()
{
    int n;
    cin >> n;
    Student students[n];
    Student *ptr = students;
    for (int i = 0; i < n; i++)
    {
        getline(cin, students[i]->name);
        cin >> students[i]->age;
    }
    for (int i = 0; i < n; i++)
    {
        cout << (ptr + i)->name << endl;
        cout << (ptr + i)->age << endl;
    }
    return 0;
}
