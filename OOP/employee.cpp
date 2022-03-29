#include <iostream>

using namespace std;

class Employee {    // по дефолт всичко в класа е private
    public:
        string name;
        string company;
        int age;

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
};

/* Access modifiers
    public - всчко, което е публично, може да се достъпва извън класа
    private - всичко, което е частно, няма да може да бъде достъпвано извън класа
    protected - всичко, което е защитено, може да се достъпва само в scope-а на класа и от наследяващите класове
*/

int main() {
    Employee emp1("Ivan", "YT", 25);
    emp1.helloWorld();

    emp1 = Employee("Zlatan", "YT", 30);  // извикваме конструктора на класа
    emp1.helloWorld();

    return 0;
}