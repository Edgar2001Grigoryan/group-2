#include <iostream>
#include <string>
using namespace std;

struct Person {

    string firstName;
    string lastName;
    int age;
    float weight;
    bool gender;
    bool status;
    bool maried;
};

int main () {

    string firstNames[] = {"Michael","Tigran","Nvard","Mariam","Edgar","Sasha","Nona","Lilit","Hrach","Armen","Arpine","Ani","Artur"};
    string lastNames[] = {"Sargsyan","Hovhannisyan","Harutyunyan","Karapetyan","Grigoryan","Avagyan","Musaelian",
                          "Melkumyan","Gevorgyan","Abrahamyan","Harutyunyan","Hakobyan","Gasparyan"};
    int ages[] = {17,19,19,21,16,19,19,19,19,19,23,19,25};
    string genderType[] = {"Female","Male"};
    bool statuses[] = {true,true,true,true,true,true,true,true,true,true,true,true,true};
    bool genders[] = {true,true,false,false,true,true,false,false,true,true,false,false,true};
    float weights[] = {53.5,82.5,51,50,65,70,55.5,48,72.5,70,47,51,61};
    bool marieds[] = {false,false,false,false,false,false,false,false,false,false,false,false,false};
    string mariedType[] = {"Not maried","Maried"};

    Person arr[13];
    for (int i = 0; i < 13; i++) {
        Person m;
        m.firstName = firstNames[i];
        m.lastName = lastNames[i];
        m.age = ages[i];
        m.gender = genders[i];
        m.status = statuses[i];
        m.weight = weights[i];
        m.maried = marieds[i];
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
            if (arr[i].maried == true && arr[i].gender == false) {
                cout << "Missis ";
            } else if (arr[i].maried == false && arr[i].gender == false) {
                cout << "Miss ";
            } else {
                cout << "Mister ";
            }
            cout << arr[i].firstName << " ";
            cout << arr[i].lastName << "\n";
            cout << "Age:" << arr[i].age << "\n";
            cout << "Weight:" << arr[i].weight << " kg\n";
            cout << "Gender:" << genderType[arr[i].gender] << "\n";
            cout << "Status:";
            if (arr[i].status == true) {
                cout << "Student" << "\n";
            } else {
                cout << "Not student" << "\n";
            }
            cout << mariedType[arr[i].maried];
            break;
        }
    }
   
    if (k == false) {
        cout << "We do not have such a person!";
    }
    
    cout << "\n";
    for (int i = 0; i < 13; i++) {
        cout << "\n";
        if (arr[i].maried == true && arr[i].gender == false) {
            cout << "Missis ";
        } else if (arr[i].maried == false && arr[i].gender == false) {
            cout << "Miss ";
        } else {
            cout << "Mister ";
        }
        cout << arr[i].firstName << " ";
        cout << arr[i].lastName << "   ";
        cout << arr[i].age << "   ";
        cout << arr[i].weight << " kg   ";
        cout << genderType[arr[i].gender] << "   ";
        if (arr[i].status == true) {
            cout << "Student   ";
        } else {
            cout << "Not student   ";
        }
        cout << mariedType[arr[i].maried];
    }
    return 0;
}
