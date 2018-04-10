#include <iostream>
#include <string>
using namespace std;

struct Person {

    string firstName;
    string lastName;
    int age;
    string gender;
    bool status;

};

int main () {

    string firstNames[] = {"Michael","Tigran","Nvard","Mariam","Edgar","Sasha","Nona","Lilit","Hrach","Armen","Arpine","Ani","Artur"};
    string lastNames[] = {"Sargsyan","Hovhannisyan","Harutyunyan","Karapetyan","Grigoryan","Avagyan","Musaelian",
                          "Melkumyan","Gevorgyan","Abrahamyan","Harutyunyan","Hakobyan","Gasparyan"};
    int ages[] = {17,21,21,21,16,21,21,21,21,21,21,21,25};
    string genders[] = {"Male","Male","Female","Female","Male","Male","Female","Female","Male","Male","Female","Female","Male"};
    bool statuses[] = {true,true,true,true,true,true,true,true,true,true,true,true,true};

    Person arr[13];
    for (int i = 0; i < 13; i++) {
        Person m;
        m.firstName = firstNames[i];
        m.lastName = lastNames[i];
        m.age = ages[i];
        m.gender = genders[i];
        m.status = statuses[i];
        arr[i] = m;
    }
    
    string firstName;
    string lastName;
    cout << "Enter first name:";
    cin >> firstName;
    cout << "Enter last name:";
    cin >> lastName;
    
    bool k = false;
 
    for (int i = 0; i < 13; i++) {
        if (arr[i].firstName == firstName && arr[i].lastName == lastName) {
            k = true;
            cout << arr[i].firstName << " ";
            cout << arr[i].lastName << "\n";
            cout << "Age:" << arr[i].age << "\n";
            cout << "Gender:" << arr[i].gender << "\n";
            cout << "Status:";
            if (arr[i].status == true) {
                cout << "Student";
            } else {
                cout << "Not student";
            }
            break;
        }
    }
   
    if (k == false) {
        cout << "We do not have such a person!";
    }
    
    cout << "\n";
    for (int i = 0; i < 13; i++) {
        cout << "\n" << arr[i].firstName << " " << arr[i].lastName << " " << arr[i].age << " " << arr[i].gender << " ";
          if (arr[i].status == true) {
                cout << "Student";
            } else {
                cout << "Not student";
            }

    }
    return 0;
}
