#include <iostream>

using namespace std;

class AbstractEmployee {  // used as a contract
    virtual void askForPromotion()=0;
};

class Employee : AbstractEmployee {
    private:
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


int main() {
    Employee emp1("Ivan", "YT", 25);
    Employee emp2("Zlatan", "YT", 35);

    emp1.askForPromotion();
    emp2.askForPromotion();

    return 0;
}