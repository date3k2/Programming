#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Student
{
    string id;
    string name;
};

int main()
{
    int maxStudents = 10000; // Số lượng tối đa sinh viên (có thể thay đổi)
    vector<Student> studentList;

    while (true)
    {
        // Menu chức năng
        cout << "====================" << endl;
        cout << "Chon chuc nang: " << endl;
        cout << "1. Them sinh vien" << endl;
        cout << "2. Sap xep danh sach theo ABC" << endl;
        cout << "3. In danh sach" << endl;
        cout << "4. Thoat" << endl;

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            // Chức năng 1: Thêm sinh viên
            if (studentList.size() < maxStudents)
            {
                Student student;
                cout << "Nhap ma so sinh vien va ten sinh vien:\n";
                cout << "MSSV: ";
                cin >> student.id;
                cout << "Ho va ten: ";
                cin.ignore();
                getline(cin, student.name);
                studentList.push_back(student);
                cout << "\nSinh vien da duoc them." << endl;
            }
            else
            {
                cout << "Danh sach da day, khong the them sinh vien moi." << endl;
            }
        }
        else if (choice == 2)
        {
            // Chức năng 2: Sắp xếp danh sách theo thứ tự ABC
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b)
                 { return a.name < b.name; });
            cout << "Danh sach da duoc sap xep theo thu tu ABC." << endl;
        }
        else if (choice == 3)
        {
            // Chức năng 3: In danh sách
            if (studentList.empty())
            {
                cout << "Danh sach rong." << endl;
            }
            else
            {
                cout << "Danh sach sinh vien:" << endl;
                for (const Student &student : studentList)
                {
                    cout << student.name << " - " << student.id << endl;
                }
            }
        }
        else if (choice == 4)
        {
            // Chức năng 4: Thoát
            cout << "Ket thuc chuong trinh." << endl;
            break;
        }
        else
        {
            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
        }
    }

    return 0;
}
