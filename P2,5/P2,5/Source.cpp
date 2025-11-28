#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    double avg;
    Student* next;
};


void add(Student*& head, string name, double avg) {
    Student* s = new Student{ name, avg, nullptr };

    if (!head) {
        head = s;
        return;
    }

    Student* t = head;
    while (t->next)
        t = t->next;
    t->next = s;
}


void sortList(Student*& head) {
    if (!head) return;

    bool swapped;
    do {
        swapped = false;
        Student* cur = head;
        while (cur->next) {
            if (cur->avg < cur->next->avg) {
                swap(cur->name, cur->next->name);
                swap(cur->avg, cur->next->avg);
                swapped = true;
            }
            cur = cur->next;
        }
    } while (swapped);
}


void printList(Student* head) {
    while (head) {
        cout << head->name << " — " << head->avg << endl;
        head = head->next;
    }
}


void printTop(Student* head) {
    if (!head) return;

    double maxAvg = head->avg;

    cout << "\nУчні з найвищим середнім балом (" << maxAvg << "):\n";
    while (head && head->avg == maxAvg) {
        cout << head->name << " — " << head->avg << endl;
        head = head->next;
    }
}

int main() {
    Student* head = nullptr;

    int n;
    cout << "Введіть кількість учнів: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        double avg;
        cout << "Ім'я учня #" << i + 1 << ": ";
        cin >> ws;
        getline(cin, name);
        cout << "Середній бал: ";
        cin >> avg;
        add(head, name, avg);
    }

    sortList(head);

    cout << "\n=== Відсортований список (за спаданням) ===\n";
    printList(head);

    printTop(head);

    return 0;
}
