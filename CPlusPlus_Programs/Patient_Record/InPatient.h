//Derived Class from Patient
#include <iostream>
#include "Patient.h"

#ifndef INPATIENT_H
#define INPATIENT_H

class InPatient: public Patient{
    protected:
    int room_number;
    float room_charges;
    float med_charges;
    float doctor_charges;
    float total_bill;

    public:
    void acceptPatientDetails();
    float calculateBill();
    void displayPatientDetails();
};

#endif