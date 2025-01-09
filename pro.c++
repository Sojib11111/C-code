#include <iostream>
using namespace std;

struct Process {
    string pid;         
    int burstTime;       
    int arrivalTime;     
    int completionTime; 
};

void Arrival(Process processes[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (processes[j].arrivalTime > processes[j + 1].arrivalTime) {
                Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }
}

void calCompletion(Process processes[], int n) {
    int currentTime = 0;

    for (int i = 0; i < n; ++i) {
        if (currentTime < processes[i].arrivalTime) {
            currentTime = processes[i].arrivalTime; 
        }
        currentTime += processes[i].burstTime; 
        processes[i].completionTime = currentTime; 
    }
}

int main() {

    Process processes[] = {{"P2", 2, 0}, {"P4", 5, 2}, {"P1", 3, 3}, {"P3", 5, 5}};
    int n = sizeof(processes) / sizeof(processes[0]); 
    
    Arrival(processes, n);
    calCompletion(processes, n);
    
    cout << "\nProcess ID\tArrival Time\tBurst Time\tCompletion Time\n";
    for (int i = 0; i < n; ++i) {
        cout << processes[i].pid << "\t\t" << processes[i].arrivalTime << "\t\t" 
             << processes[i].burstTime << "\t\t" << processes[i].completionTime << "\n";
    }

    return 0;
}
