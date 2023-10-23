#include <iostream>
#include <vector>
#include <string>

class Task {
public:
    Task(std::string name, std::string description)
        : name(name), description(description) {}
    
    std::string getName() const { return name; }
    std::string getDescription() const { return description; }
    
private:
    std::string name;
    std::string description;
};

class TaskManager {
public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void listTasks() const {
        for (const Task& task : tasks) {
            std::cout << "Task Name: " << task.getName() << std::endl;
            std::cout << "Description: " << task.getDescription() << std::endl;
        }
    }

private:
    std::vector<Task> tasks;
};

int main() {
    TaskManager taskManager;

    while (true) {
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. List Tasks" << std::endl;
        std::cout << "3. Quit" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string name, description;
            std::cout << "Enter task name: ";
            std::cin >> name;
            std::cout << "Enter task description: ";
            std::cin >> description;

            Task task(name, description);
            taskManager
