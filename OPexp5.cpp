#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> pid(n), bt(n), wt(n), tat(n);

    
    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;
        cout << "Enter Burst Time for P" << pid[i] << ": "<<endl;
        cin >> bt[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i] > bt[j]) {
                swap(bt[i], bt[j]);
                swap(pid[i], pid[j]);
            }
        }
    }

    
    wt[0] = 0;

    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    
    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

   
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }

    // Average times
    float avgWT = 0, avgTAT = 0;

    for (int i = 0; i < n; i++) {
        avgWT += wt[i];
        avgTAT += tat[i];
    }

    avgWT /= n;
    avgTAT /= n;

    cout << "\nAverage Waiting Time = " << avgWT;
    cout << "\nAverage Turnaround Time = " << avgTAT;

    return 0;
}