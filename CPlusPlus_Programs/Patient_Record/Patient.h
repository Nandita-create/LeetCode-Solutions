//Base Class Patient
#include <iostream>
#include <string>

#ifndef PATIENT_H
#define PATIENT_H

class Patient{
    protected:
    int patient_id;
    std::string patient_name;
    int age;
    std::string gender;

    public:
    void accept();
    void displayData();
    std::string getPatientName();  //getter
};

#endif