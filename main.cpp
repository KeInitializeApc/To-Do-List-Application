#include <iostream>
#include <string>
using namespace std;

// structur to hold a task

struct Task {
    string description;
    bool completed;
    int taskCount = 0;
};

const int MAX_TASKS = 100;
Task tasks[MAX_TASKS];


int option;

int main() {
    do {
        cout << "Simple Todo List Manager" << endl << endl;
        cout << "[1] Add a task" << endl;
        cout << "[2] View tasks" << endl;
        cout << "[3] Mark task as completed" << endl;
        cout << "[4] Exit" << endl << endl;
        cout << "Option: ";
        cin >> option;

        // handle different options here

        switch (option) {
        case 1: {
            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, tasks[tasks->taskCount].description);
            tasks[tasks->taskCount].completed = false;
            tasks->taskCount++;
            break;
        }
        case 2: {
            cout << "Tasks:" << endl;
            for (int i = 0; i < tasks->taskCount; i++) {
                cout << i + 1 << ". ";
                if (tasks[i].completed)
                    cout << "[Completed] ";
                cout << tasks[i].description << endl;
            }
            cout << endl;
            break;
        }
        case 3: {
            int taskNumber;
            cout << "Enter the task number to mark as completed: ";
            cin >> taskNumber;
            if (taskNumber >= 1 && taskNumber <= tasks->taskCount) {
                tasks[taskNumber - 1].completed = true;
                cout << "Task " << taskNumber << " marked as completed." << endl;
            }
            else {
                cout << "Invalid task numbe." << endl;
            }
            break;
        }
        case 4: {
            cout << "Bye!" << endl;
            break;
        }
        default: {
            cout << "Invalid option. try again baby bro." << endl;
            break;
        }
        }

        cout << endl;

    } while (option != 4);

    return 0;
}