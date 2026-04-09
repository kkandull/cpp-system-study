// Section 10 - 10.4 ~ 10.6
// Focus: association
#include <iostream>
#include <vector>
#include <string>

class Doctor; // foward declartion

class Patient
{
private:
    std::string n_name;
    std::vector<Doctor*> m_doctors;
public:
    Patient(std::string name_in) : n_name(name_in) {}
    
    void addDoctor(Doctor * new_doctor)
    {
        m_doctors.push_back(new_doctor);
    }

    friend class Doctor;

    void meetDoctors();
    
};

class Doctor
{
private:
    std::string n_name;
    std::vector<Patient*> m_patient;
public:
    Doctor(std::string name_in) : n_name(name_in) {}

    void addPatient(Patient * new_patient)
    {
        m_patient.push_back(new_patient);
    }
    
    friend class Patient;

    void meetPatient()
    {
        for(auto& ele : m_patient)
            std::cout << "Meet Patient: " << ele->n_name << "\n";
    }
};

void Patient::meetDoctors()
{
    for(auto& ele : m_doctors)
        std::cout << "Meet doctor: " << ele->n_name << "\n";
}

int main() 
{   
    Patient *p1 = new Patient("Jack Jack");
    Patient *p2 = new Patient("kkandull");
    Patient *p3 = new Patient("dash");
    
    Doctor *d1 = new Doctor("Doctor K");
    Doctor *d2 = new Doctor("Doctor L");

    p1->addDoctor(d1);
    d1->addPatient(p1);

    p2->addDoctor(d2);
    d2->addPatient(p2);

    p2->addDoctor(d1);
    d1->addPatient(p2);

    p1->meetDoctors();
    d1->meetPatient();

    // delete
    delete p1;
    delete p2;
    delete p3;
    delete d1;
    delete d2;
    
    return 0;
}