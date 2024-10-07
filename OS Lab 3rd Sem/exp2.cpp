#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
    int nop;
    cout<<"Enter number of processes: \n";
    cin>>nop;
    int arrnop[nop];
    
    int arrPID[nop];
    int arrPAT[nop];
    int arrPBT[nop];
    int arrCT[nop]; 
    
    for(int i=0; i<nop; i++){
        cout<<"\nEnter PID: ";
        cin>>arrPID[i];
        cout<<"\nEnter Process Arrival Time: ";
        cin>>arrPAT[i];
        cout<<"\nEnter Process Burst Time: ";
        cin>>arrPBT[i];
    }
    
    for (int i = 0; i < nop - 1; i++) {
        for (int j = 0; j < nop - i - 1; j++) {
            if (arrPAT[j] > arrPAT[j + 1]) {

                int temp = arrPAT[j];
                arrPAT[j] = arrPAT[j + 1];
                arrPAT[j + 1] = temp;

                temp = arrPID[j];
                arrPID[j] = arrPID[j + 1];
                arrPID[j + 1] = temp;

                temp = arrPBT[j];
                arrPBT[j] = arrPBT[j + 1];
                arrPBT[j + 1] = temp;
            }
        }
    }
  int currentTime = 0;
    for (int i = 0; i < nop; i++) {
        if (currentTime < arrPAT[i]) {
            currentTime = arrPAT[i];
        }
        currentTime += arrPBT[i];
        arrCT[i] = currentTime;
    }

    cout << "\nProcesses sorted based on Arrival Time with Completion Time:\n";
    for (int i = 0; i < nop; i++) {
        cout << "PID: " << arrPID[i] << ", Arrival Time: " << arrPAT[i] << ", Burst Time: " << arrPBT[i] << ", Completion Time: " << arrCT[i] << endl;
    }
    
    return 0;
}