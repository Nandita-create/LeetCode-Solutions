//From InPatient.h
#include <iostream>
#include "InPatient.h"
using namespace std;

void InPatient::acceptPatientDetails()
{
    accept();
    cout<<"Enter Room No.: ";
    cin>>room_number;

    cout<<"Enter Room Charges: ";
    cin>>room_charges;

    cout<<"Enter Medicine Charges: ";
    cin>>med_charges;

    cout<<"Enter Doctor Charges: ";
    cin>>doctor_charges;
}

float InPatient::calculateBill()
{
    total_bill = room_charges + med_charges + doctor_charges;
    return total_bill;
}

void InPatient::displayPatientDetails()
{
    displayData();
    cout<<"Room No.: "<<room_number<<endl;
    cout<<"Room Charges: Rs."<<room_charges<<endl;
    cout<<"Medicine Charges: Rs."<<med_charges<<endl;
    cout<<"Doctor Charges: Rs."<<doctor_charges<<endl;
    cout<<"Total Bill: Rs."<<calculateBill()<<endl;
}