#include <iostream>

using namespace std;

class Employee {
    private:
        string name;
        string company;
        int age;
    
    public:
        Employee(string name, string company, int age) {
            this->name = name;
            this->company = company;
            this->age = age;
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
};

int main() {
    Employee emp1("Ivan", "YT", 25);
    emp1.helloWorld();

    cout << emp1.getAge() << endl;
    emp1.setName("Zlatan");
    cout << emp1.getName() << endl;

    return 0;
}