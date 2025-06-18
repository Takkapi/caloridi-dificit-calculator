#include <iostream>

using namespace std;

void af_mes() {
    cout << "Introdu factorul activitatii tale\nSedentar - 1.2\nPutin activ - 1.375\nActiv moderat - 1.55\n";
    cout << "Foarte activ - 1.725\nSuper activ - 1.9" << endl;
}

int main() {
    char gender;
    double weight, bmr, tdee, sum, af;
    int age, height;

    cout << "Alege sexul (M sau F): ";
    cin >> gender;

    cout << "Introdu masa in kg (pentru sutimi foloseste caracterul '.'): ";
    cin >> weight;

    cout << "Introdu inaltimea in cm: ";
    cin >> height;

    cout << "Introdu varsta: ";
    cin >> age;

    switch(gender) {
        case 'F':
            bmr = (10 * weight) + (6.25 * height) - (5 * age) - 161;
            af_mes();
            cin >> af;
            tdee = bmr * af;
            if(tdee >= 2000) sum = tdee - 500;
            else sum = tdee - 300;
            break;
        case 'M':
            bmr = (10 * weight) + (6.25 * height) - (5 * age) + 5;
            af_mes();
            cin >> af;
            tdee = bmr * af;
            if(tdee >= 2000) sum = tdee - 500;
            else sum = tdee - 300;
            break;
        default:
            cout << "Gender does not exist" << endl;
    }

    cout << "Dicitul caloric este: " << sum << endl;

}