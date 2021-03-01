#include <iostream>

using namespace std;

int main()
{
   int quantity,no,counter,num1,num2,num3,num4;
   float total,price1,price2,price3,price4;
   string seat;

   cout<<"Welcome to Los Pepes Cinema! :D"<<endl;
   cout<<"Enjoy movies with ATMOS DOLBY at the cheapest price!\n";
   cout<<"***************************************************"<<endl;

   cout<<"\n----------------------------------SCREEN----------------------------------"<<endl;

   cout<<"\nJ10 	J9	J8	J7 	J6	J5	J4 	J3	J2	J1"<<endl;
   cout<<"I10	I9	I8	I7	I6	I5	I4	I3	I2	I1"<<endl;
   cout<<"H10	H9	H8	H7	H6	H5	H4	H3	H2	H1"<<endl;
   cout<<"G10	G9	G8	G7	G6	G5	G4	G3	G2	G1"<<endl;
   cout<<"F10	F9	F8	F7	F6	F5	F4	F3	F2	F1"<<endl;
   cout<<"E10	E9	E8	E7	E6	E5	E4	E3	E2	E1"<<endl;
   cout<<"D10	D9	D8	D7	D6	D5	D4	D3	D2	D1"<<endl;
   cout<<"C10	C9	C8	C7	C6	C5	C4	C3	C2	C1"<<endl;
   cout<<"B10	B9	B8	B7	B6	B5	B4	B3	B2	B1"<<endl;
   cout<<"A10	A9	A8	A7	A6	A5	A4	A3	A2	A1"<<endl;

   cout<<"\nMovie list: "<<endl;
   cout<<"1. Avengers: Infinity War\n";
   cout<<"2. Deadpool 2\n";
   cout<<"3. Jumanji: Welcome To The Jungle\n";
   cout<<"4. Jurassic World: Fallen Kingdom\n";
   cout<<"5. The Incredibles 2\n";
   cout<<"*All the movies are available in ATMOS DOLBY ONLY*"<<endl;

   cout<<"\nPrice list: "<<endl;
   cout<<"1. Senior Citizen          : RM7.00"<<endl;
   cout<<"2. Adult                   : RM10.00"<<endl;
   cout<<"3. Student                 : RM8.00"<<endl;
   cout<<"4. Children                : RM5.00"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   cout<<"*This rate applies to Weekdays, Weekends and Public Holidays!"<<endl;

   cout<<"\nEnter the number of the movie that you would like to watch: ";
   cin>>no;
   if (no==1||no==2||no==3||no==4||no==5){
        cout<<"\nEnter the number of seat: "<<endl;
        cin>>quantity;
   } else {
        cout<<"Invalid input. Please reenter your choice: ";
        cin>>no;
        while ((no==1 || no==2 || no==3|| no==4 || no==5)==false){
        cout<<"Invalid input. Please reenter your choice: ";
        cin>>no;
        if (no==1||no==2||no==3||no==4||no==5){
        cout<<"\nEnter the number of seat: "<<endl;
        cin>>quantity;
        }
        }
   }
   counter =1;
   while (counter<=quantity){
   cout<<"\nEnter the preferred seating number "<<counter<<" :";
   cin>>seat;
   counter++;
   }

    cout<<"Enter the number of Senior Citizens: \n";
    cin>>num1;
    cout<<"Enter the number of Adults: \n";
    cin>>num2;
    cout<<"Enter the number of Students: \n";
    cin>>num3;
    cout<<"Enter the number of Children: \n";
    cin>>num4;

    price1 = 7*num1;
    price2 = 10*num2;
    price3 = 8*num3;
    price4 = 5*num4;

    total = price1 + price2 + price3 + price4;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout.setf(ios::showpoint);

    cout<<"Total price is: RM "<<total<<endl;
    cout<<"Enjoy your movie and please come again :) "<<endl;

}
