#include <iostream>
#include <string>
using namespace std;

int main() {
    string tasks[50];
    int n = 0;
    int choice, pos;

    do {
        cout << "\n1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter task: ";
            cin.ignore();
            getline(cin, tasks[n]);
            n++;
        }

        else if(choice == 2) {
            if(n == 0)
                cout << "No tasks added yet.\n";
            else {
                cout << "\nTasks:\n";
                for(int i=0;i<n;i++) {
                    cout << i+1 << ". " << tasks[i] << endl;
                }
            }
        }

        else if(choice == 3) {
            cout << "Enter task number to delete: ";
            cin >> pos;

            if(pos < 1 || pos > n)
                cout << "Invalid position.\n";
            else {
                for(int i=pos-1;i<n-1;i++) {
                    tasks[i] = tasks[i+1];
                }
                n--;
                cout << "Task deleted.\n";
            }
        }

    } while(choice != 4);

    cout << "Exiting...\n";
    return 0;
}
