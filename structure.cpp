#include <iostream>
#include <clocale>
#include <cstring>
#include <stdio.h>
#include <fstream>

using namespace std;

struct Human{
    char legs[10];
    char colorHair[20];
    char name[10];
    char age[10];
};

void search(Human *p, char* lastN);
void print_people(Human* p, int l);

int main(){
    setlocale(LC_ALL, "Russian");
    //Human  person[3];
    Human *person = new Human[3];
    int n = 0;
    char ch = 0;
    char nname[20];
    while (n != 3 && ch != '#'){
        cin >> person[n].legs;
        cin >> person[n].colorHair;
        cin >> person[n].name;
        cin >> person[n].age;
        n++;
    }
    cout << "Enter name for search" << endl;
    cin >> nname;
    search(person, nname);
    cout << endl;
    cout << "massive:" << endl;
    print_people(person, 3);
    
    system("pause");
    return 0;
}


void search(Human *person, char* nname){
    int F = 0;
    for (int i = 0; i < 3; ++i){
        if (strcmp(nname, person[i].name) == 0){
            cout << person[i].legs << "  " << person[i].colorHair << "  " << person[i].name << "  " << person[i].age << endl;
            F = 1;
        }
    }
    if (F == 0) cout << "“‡ÍËı Î˛‰ÂÈ ‚ Ú‡·ÎËˆÂ ÌÂÚ\n";
}

void print_people(Human* person, int l){
    for (int k = 0; k<l; k++){
        cout << person[k].legs << "  " << person[k].colorHair << "  " << person[k].name << "  " << person[k].age << endl;
    }
}

