#include <iostream>
#include "Man.cpp"
#include "Linked_list.cpp"
using namespace std;

int main()
{
    Man man1{ "Nikita", 26 };
    Man man2{ "Sasha", 29 };
    Man man3{ "Oksana", 18 };
    Man man4{ "Dima", 50 };

    Linked_list <Man> list1;

    cout << "AddToHead: " << endl;
    list1.addToHead(man1);
    list1.addToHead(man2);
    list1.addToHead(man3);
    list1.show();

    cout << "AddToTail: " << endl;
    list1.addToTail(man4);
    list1.show();

    cout << "DeleteFromHead: " << endl;
    list1.deleteFromHead();
    list1.show();

    cout << "DeleteFromTail: " << endl;
    list1.deleteFromTail();
    list1.show();

    cout << "DeleteAll: " << endl;
    list1.deleteAll();
    list1.show();
}

