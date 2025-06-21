#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct city {
    string name;
    int population;
    float citysize;
    float GDP;
    bool isineurope;
};
int main() {
string type[4] = {"Population","CitySize","GDP","Location"};
string chosen;
// Used for picking a game
int thedifference;
int popanswer = 8554631;
// Used for population
int citysizeguesses = 0;
int citysizeguesses2 = 0;
float whatthefuckisakilometer;
float whatinbloodyhellisafoot = 67.04;
float wtrbttle;
float waterbottle = 3236;
// Used for city size
int combinedGDP = 1116.06;
int GDPguess;
// Used for GDP
int Guessess = 0;
int Guesses2 = 0;
int answer;
int answer2;
//This is for the location game

city London, Newark;
London.name = "London, Great Britain";
London.population = 8866180;
London.citysize = 8382;
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
cout << "Area size: " << London.citysize << " kilometers" << endl;
cout << "GDP: " << '$' << London.GDP << " dollars" << endl << endl;

cout << "City name: " << Newark.name << endl;
cout << "Population size: " << Newark.population << endl;
cout << "Area size: " << Newark.citysize << " sq mile" << endl;
cout << "GDP: " << '$' << Newark.GDP << " dollars" << endl;
//Basically the basic info

cout << "Write Population, CitySize, GDP, or Location: ";
cin >> chosen;

if (chosen == type[0]) {
    cout << "What is the difference between the two population sizes?" << endl;
    cin >> thedifference;
    if(thedifference == popanswer){
        cout << "You win";
    }else{
    cout << "You lose";}
}
// To be honest, this was kinda a last minute idea, so its pretty shit

if (chosen == type[1]) {
    while(citysizeguesses < 10){
    cout << "How many kilometers is Newark?" << endl;
    cin >> whatthefuckisakilometer;
    if(whatthefuckisakilometer == whatinbloodyhellisafoot){
        cout << "How big is London in freedom units?";
        break;
    }else{
    cout << "You lose" << endl;}
    citysizeguesses++;
    }
    if(citysizeguesses == 10){
        cout << "Please don't fail the next one..." << endl << "ok, so how big is London in SQUARE METERS" << endl;
    }
    while(citysizeguesses2 < 7){
        cin >> wtrbttle;
        if(waterbottle == wtrbttle){
            cout << "You win";
            break;
        }else{
        cout << "Try again" << endl;}
        citysizeguesses2++;
    }
    cout << "Guesses for number 1: " << citysizeguesses << endl;
    cout << "Guesses for number 2: " << citysizeguesses2 << endl;
    if(citysizeguesses == 10 && citysizeguesses2 == 10){
        cout << "You're a dumbass" << endl;
    }else if(citysizeguesses ==10 || citysizeguesses2 == 10){
    cout << "You're not really that dumb" << endl;
    }else{
    cout << "You're smart at least" << endl;
    }
}
if (chosen == type[2]) {
    cout << "What is the combined GDP of both cities?" << endl;
    cin >> GDPguess;
    if(GDPguess = combinedGDP){
        cout << "You win!";
    }else{
    cout << "You lose";}
}
if(chosen == type[3]){
cout << "Your objective is to find out if London is in Europe and if Newark is in Europe. Good luck" << endl;
while(Guessess < 5){
    cout << "Is London in Europe? 1 for yes, 0 for no" << endl;
    cin >> answer;
    if(answer == London.isineurope){
            cout << "Is Newark in Europe?" << endl;
            break;
            }else{
                cout << "Try Again" << endl;
            }
                Guessess++;
                /* Would count guesses, but I think
                it only counts it after the 1st attempt*/
                if(Guessess == 5){
                    cout << "You suck at this. Anyways, is Newark in Europe?" << endl;
                }
    }
while(Guesses2 < 3){
    cin >> answer2;
    if(answer2 == Newark.isineurope){
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
}