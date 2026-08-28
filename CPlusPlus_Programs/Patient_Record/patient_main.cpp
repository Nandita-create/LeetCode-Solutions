//Has main function for Patient
#include <iostream>
#include "InPatient.h"
using namespace std;

int main()
{
    InPatient *patients;
    int n, max, max_index;
    float bill, sum=0, avg;
    cout<<"Enter no. of patients: ";
    cin>>n;

    patients = new InPatient[n];

    cout<<"Enter details of patients: "<<endl;
    for (int i=0 ; i<n ; i++)
    {
        cout<<"Patient "<<i+1<<": "<<endl;
        patients[i].acceptPatientDetails();
        cout<<endl;
    }

    cout<<"PATIENT DETAILS"<<endl;
    cout<<"----------------------------"<<endl;
    for (int i=0 ; i<n ; i++)
    {
        patients[i].displayPatientDetails();
        cout<<"----------------------------"<<endl;
    }

    max_index = 0;
    max = patients[0].calculateBill();
    for(int i=1 ; i<n ; i++)
    {
        bill = patients[i].calculateBill();

        if(max<bill)
        {
            max = bill;
            max_index = i;
        }
    }

    cout<<"Highest Bill Patient: "<<patients[max_index].getPatientName()<<endl;
    //using getter as we cannot directly get variable.patientname. 
    //We need to use a getter that returns patientname as return value

    cout<<"Highest Bill: Rs."<<max<<endl;
    cout<<endl;

    for (int i=0 ; i<n ; i++)
    {
        sum = sum + patients[i].calculateBill();
    }
    avg = sum/n;
    cout<<"Average Hospital Bill: Rs."<<avg<<endl;

    delete[] patients;
    return 0;
}
//to run use:
//cd Patient_Record
//g++ patient_main.cpp Patient.cpp InPatient.cpp -o patient_record to create a patient_main.exe
//then run by entering "./patient_record"