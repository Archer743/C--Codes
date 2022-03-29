#include <iostream>

using namespace std;

class AbstractEmployee {  // used as a contract
    virtual void askForPromotion()=0;
};

class Employee : AbstractEmployee {
    protected:
        string name;
        string company;
        int age;
        bool promoted;
    
    public:
        Employee(string name, string company, int age) {
            this->name = name;
            this->company = company;
            this->age = age;
            this->promoted = false;
        }

        void helloWorld() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
            cout << "Company: " << this->company << endl;
        }


        // Setters
        void setName(string name) {
            this->name = name;
        }

        void setCompany(string company) {
            this->company = company;
        }

        void setAge(int age) {
            if (age >= 18) this->age = age;
        }


        // Getters
        string getName() {
            return name;
        }

        string getCompany() {
            return company;
        }

        int getAge() {
            return age;
        }

        void askForPromotion() {
            if (age > 30) {
                cout << name << " got promoted!" << endl;
                promoted = true;
            }else cout << "Nope" << endl;
        }
};

class Developer : public Employee {
    private:
        string favProgrammingLanguage;
    
    public:                                             // favProgrammingLanguage
        Developer(string name, string company, int age, string fpl) : Employee(name, company, age)
        {
            this->favProgrammingLanguage = fpl;
        }

        void fixBug() {
            cout << name << " fixed a bug using " + favProgrammingLanguage << "!" << endl;
        }
};

class Teacher : public Employee {
    private:
        string subject;
    
    public:
        Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
        {
            this->subject = subject;
        }

        void prepareLesson() {
            cout << name << " is preparing " << subject << endl;
        }
};

int main() {
    Developer dev1("Popcorn", "YT", 30, "Python");
    Developer dev2("Duner", "YT", 53, "Assembly");

    dev1.fixBug();
    dev2.fixBug();

    Teacher t1 = Teacher("Pepa", "YT", 20, "OOP");
    return 0;
}