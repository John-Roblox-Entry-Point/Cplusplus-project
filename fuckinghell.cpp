#include <iostream>
using namespace std;
struct city {
    string name;
    int population;
    float citysize;
    float GDP;
    bool isineurope;
};
int main() {
int Guessess = 0;
int Guesses2 = 0;
int answer;
int answer2;
//This is for the fun stuff

city London, Newark;
London.name = "London, Great Britain";
London.population = 8866180;
London.citysize = 3236;
London.GDP = 562.2;
London.isineurope = true;
// For London

Newark.name = "Newark, New Jersey";
Newark.population = 311549;
Newark.citysize = 25.88;
Newark.GDP = 553.86;
Newark.isineurope = false;
// For Newark

cout << "City name: " << London.name << endl;
cout << "Population size: " << London.population << endl;
cout << "Area size: " << London.citysize << "sq mile" << endl;
cout << "GDP: " << '$' << London.GDP << " dollars" << endl << endl;

cout << "City name: " << Newark.name << endl;
cout << "Population size: " << Newark.population << endl;
cout << "Area size: " << Newark.citysize << "sq mile" << endl;
cout << "GDP: " << '$' << Newark.GDP << " dollars" << endl;
//Basically the basic info

cout << "Your objective is to find out if London is in Europe and if Newark is in Europe. Good luck" << endl;

while(Guessess < 5){
    cout << "Is London in Europe? 1 for yes, 0 for no" << endl;
    cin >> answer;
    if(answer >= London.isineurope){
            cout << "Is Newark in Europe?" << endl;
            break;
            }else{
                cout << "You failed" << endl;
            }
                Guessess++;
                /* Would count guesses, but I think
                it only counts it after the 1st attempt*/
    }
while(Guesses2 < 3){
    cin >> answer2;
    if(answer2 <= Newark.isineurope){
        cout << "You win" << endl;
        break;
            }else{
            cout << "Try again" << endl;
            }
            Guesses2++;
            /* Would also count guesses, but
            that won't matter because of the
            same problem that's happening
            the other one */
}
cout << "Number of failed guesses taken for London: " << Guessess << endl;
cout << "Number of failed guesses taken for Newark: " << Guesses2;
}
