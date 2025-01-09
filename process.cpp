#include <iostream>
#include <algorithm>

using namespace std;

struct Process {
    int pid;          
    int burstTime;    
    int arrivalTime;  
    int completionTime; 

};
void calculateCompletionTime(Process processes[], int n) {
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
    int n; 
    
    cout << "Enter the number of processes: ";
    cin >> n;
       Process processes[n]; 
      for (int i = 0; i < n; ++i) {
        cout << "Enter arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].pid = i + 1; 
    }
    
    sort(processes, processes + n, [](Process a, Process b) {
        return a.arrivalTime < b.arrivalTime;
    });
    calculateCompletionTime(processes, n);
 
    cout << "\nProcess ID\tArrival Time\tBurst Time\tCompletion Time\n";
    for (int i = 0; i < n; ++i) {
        cout << processes[i].pid << "\t\t" << processes[i].arrivalTime << "\t\t" 
             << processes[i].burstTime << "\t\t" << processes[i].completionTime << "\n";
    }

    return 0;
}
