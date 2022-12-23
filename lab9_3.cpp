#include<iostream>
using namespace std;

int main(){
int ages;
int heights;
int bounty;
cout << "Enter your age: ";
cin >> ages;
    if(ages <= 25){
        cout << "Enter your height: ";
        cin >> heights;
            if(heights < 100){
                cout << "Your character = " << "Chopper";
            }
            else if(heights < 180){
                cout << "Your character = " << "Usopp";
            }
            else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                    if(bounty <= 1100000000){
                        cout << "Your character = " << "Sanji";
                    }
                    else{
                        cout << "Your character = " << "Zoro";
                    }
            }
    }
    else if(ages <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty ;
            if(bounty > 500000000){
                cout << "Your character = " << "Jinbe";
            }
            else{
                cout << "Your character = " << "Franky";
            }
    }
    else{
        cout << "Your character = " << "Brook" ;
    }
}

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
