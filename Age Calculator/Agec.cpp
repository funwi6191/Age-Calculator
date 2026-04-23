#include <iostream>
using namespace std;

int yearBorn;
int Currentyear = 2026;
int Month = 02;
int option;





void information(){
    cout << "\n ==========================================="<<endl;
    cout << "   Age Calculator "<<endl;
    cout << "=============================================="<<endl;
    cout << ""<<endl;
    cout << "Enter your Birth Year: ";
    cin>> yearBorn;
    cout << "Enter your Birth Month: "<<endl;
    cout << "1. January"<<endl;
    cout << "2. Febuary"<<endl;
    cout << "3. march"<<endl;
    cout << "4. April"<<endl;
    cout << "5. May"<<endl;
    cout << "6. June"<<endl;
    cout << "7. July"<<endl;
    cout << "8. August"<<endl;
    cout << "9. September"<<endl;
    cout << "10. October"<<endl;
    cout << "11. November"<<endl;
    cout << "12. December"<<endl;
    cout << "Choose Option (1-12): ";
    cin>>option;

   
    if (option == 1){

        int Age = Currentyear - yearBorn;
        int MonthA = option + 1;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout << option + 10 << " Months To Your Birth Month"<<endl;
    }
    else if(option == 2){

        int Age = Currentyear - yearBorn;
        int MonthA = option - 2;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout<< "It's Your Birth Months !!!"<<endl;
    }
    else if(option == 3){

        int Age = Currentyear - yearBorn;
        int MonthA = option + 8;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout << option - 2 << " Months To Your Birth Month"<<endl;
    }
    else if(option == 4){

        int Age = Currentyear - yearBorn;
        int MonthA = option + 6;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout << option - 2 << " Months To Your Birth Month"<<endl;
    }
    else if(option == 5){

        int Age = Currentyear - yearBorn;
        int MonthA = option + 4;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout << option - 2 << " Months To Your Birth Month"<<endl;
    }
    else if(option == 6){

        int Age = Currentyear - yearBorn;
        int MonthA = option + 2;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout << option - 2 << " Months To Your Birth Month"<<endl;
    }
    else if(option == 7){

        int Age = Currentyear - yearBorn;
        int MonthA = option;

        cout << "Age: "<<Age<<endl;
        cout << "Month: "<<MonthA<<endl;
        cout << "You Are "<< Age << " Years And " << MonthA << " Months Old Today"<<endl;
        cout << option - 2 << " Months To Your Birth Month"<<endl;
    }
    
    

}


int main(){

    information();
    return 0;
}