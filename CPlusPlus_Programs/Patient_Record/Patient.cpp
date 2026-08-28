//Functions from Patient.h

#include <iostream>
#include "Patient.h"
#include <string>
using namespace std;

void Patient::accept()
{
    cout<<"Enter Patient ID: ";
    cin>>patient_id;

    cout<<"Enter Patient Name: ";
    getline(cin>>ws, patient_name);
    
    cout<<"Enter Age: ";
    cin>>age;

    cout<<"Enter Gender: ";
    cin>>gender;  //for only one word
}

void Patient::displayData()
{
    cout<<"Patient ID: "<<patient_id<<endl;
    cout<<"Patient Name: "<<patient_name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
}

string Patient::getPatientName()
{
    return patient_name;
}