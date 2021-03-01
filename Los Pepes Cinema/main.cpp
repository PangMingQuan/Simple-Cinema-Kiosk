#include <iostream>

using namespace std;

int main()
{
   int numberSeats,counter,numberSenior_Citizens,numberAdult,numberStudent,numberChildren;
   float totalPrice,priceSenior_Citizens,priceAdult,priceStudent,priceChildren,numberMovie,ShowTime;
   string numberSeating;

   cout<<"Welcome to Los Pepes Cinema! :D"<<endl;
   cout<<"Enjoy movies with ATMOS DOLBY at the cheapest price!\n";
   cout<<"***************************************************"<<endl;
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

   cout<<"\nEnter the movie that you would like to watch (1/2/3/4/5): ";
   cin>>numberMovie;

   if (numberMovie==1||numberMovie==2||numberMovie==3||numberMovie==4||numberMovie==5){
        cout<<"\nEnter the number of seats: "<<endl;
        cin>>numberSeats;
   } else {
        cout<<"Invalid input. Please reenter your choice: ";
        cin>>numberMovie;
         if (numberMovie==1||numberMovie==2||numberMovie==3||numberMovie==4||numberMovie==5){
        cout<<"\nEnter the number of seats: "<<endl;
        cin>>numberSeats;
        }
        while ((numberMovie==1||numberMovie==2||numberMovie==3||numberMovie==4||numberMovie==5)==false){
        cout<<"Invalid input. Please reenter your choice: ";
        cin>>numberMovie;
        if (numberMovie==1||numberMovie==2||numberMovie==3||numberMovie==4||numberMovie==5){
        cout<<"\nEnter the number of seats: "<<endl;
        cin>>numberSeats;
        }
        }
   }

   cout<<"\nShow Times: 12.00p.m, 2.00p.m, 4.00p.m, 6.00p.m, 8.00p.m";
   cout<<"\n1. 12.00p.m";
   cout<<"\n2. 2.00p.m";
   cout<<"\n3. 4.00p.m";
   cout<<"\n4. 6.00p.m";
   cout<<"\n5. 8.00p.m";
   cout<<"\nEnter your desired show time (1/2/3/4/5): ";
   cin>>ShowTime;
   if ((ShowTime==1||ShowTime==2||ShowTime==3||ShowTime==4||ShowTime==5)){
        counter =1;
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

        while (counter<=numberSeats){
            cout<<"\nEnter the preferred seating number "<<counter<<" :";
            cin>>numberSeating;
            counter++;
            }
   }
        else {
        cout<<"Invalid input, please re-enter your desired show time: ";
        cin>>ShowTime;
        if (ShowTime==1||ShowTime==2||ShowTime==3||ShowTime==4||ShowTime==5){
        counter =1;
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

            while (counter<=numberSeats){
            cout<<"\nEnter the preferred seating number "<<counter<<" :";
            cin>>numberSeating;
            counter++;
            }
        }
        while ((ShowTime==1||ShowTime==2||ShowTime==3||ShowTime==4||ShowTime==5)==false){
        cout<<"Invalid input, please re-enter your desired show time: ";
        cin>>ShowTime;
         if (ShowTime==1||ShowTime==2||ShowTime==3||ShowTime==4||ShowTime==5){
        counter =1;
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

            while (counter<=numberSeats){
            cout<<"\nEnter the preferred seating number "<<counter<<" :";
            cin>>numberSeating;
            counter++;
            }
        }
        }
        }


    cout<<"\nEnter the number of Senior Citizens: \n";
    cin>>numberSenior_Citizens;
    cout<<"\nEnter the number of Adults: \n";
    cin>>numberAdult;
    cout<<"\nEnter the number of Students: \n";
    cin>>numberStudent;

    cout<<"\nEnter the number of Children: \n";
    cin>>numberChildren;

    if ((numberSeats==(numberSenior_Citizens + numberAdult + numberStudent + numberChildren))==true){
       }
    else {
            cout<<"\nError:The total number of people must equal to the number of seats you've chosen";
            cout<<"\nPlease re-enter the number of Senior Citizens: \n";
            cin>>numberSenior_Citizens;
            cout<<"\nPlease re-enter the number of Adults: \n";
            cin>>numberAdult;
            cout<<"\nPlease re-enter the number of Students: \n";
            cin>>numberStudent;
            cout<<"\nPlease re-enter the number of Children: \n";
            cin>>numberChildren;
            if ((numberSeats==(numberSenior_Citizens + numberAdult + numberStudent + numberChildren))==true){
       }
            while ((numberSeats==(numberSenior_Citizens + numberAdult + numberStudent + numberChildren))==false){
                cout<<"\nError:The total number of people must equal to the number of seats you've chosen";
                cout<<"\nPlease re-enter the number of Senior Citizens: \n";
                cin>>numberSenior_Citizens;
                cout<<"\nPlease re-enter the number of Adults: \n";
                cin>>numberAdult;
                cout<<"\nPlease re-enter the number of Students: \n";
                cin>>numberStudent;
                cout<<"\nPlease re-enter the number of Children: \n";
                cin>>numberChildren;
            }
        }

    priceSenior_Citizens = 7*numberSenior_Citizens;
    priceAdult = 10*numberAdult;
    priceStudent = 8*numberStudent;
    priceChildren = 5*numberChildren;

    totalPrice = priceSenior_Citizens + priceAdult + priceStudent + priceChildren;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout.setf(ios::showpoint);

    if (numberMovie==1){
            cout<<"\n#########################################################"<<endl;
            cout<<"\nYour movie is Avengers: Infinity War"<<endl;
    }else if (numberMovie==2){
            cout<<"\n#########################################################"<<endl;
            cout<<"\nYour movie is Deadpool 2"<<endl;
    }else if (numberMovie==3){
            cout<<"\n#########################################################"<<endl;
            cout<<"\nYour movie is Jumanji: Welcome To The Jungle"<<endl;
    }else if (numberMovie==4){
            cout<<"\n#########################################################"<<endl;
            cout<<"\nYour movie is Jurassic World: Fallen Kingdom"<<endl;
    }else if (numberMovie==5){
            cout<<"\n#########################################################"<<endl;
            cout<<"\nYour movie is The Incredibles 2"<<endl;
    }

    if (ShowTime==1){
        cout<<"Total price is: RM "<<totalPrice<<endl;
        cout<<"Your movie will begin at 12.00p.m."<<endl;
        cout<<"Enjoy your movie and please come again :) "<<endl;

        cout<<"\n#########################################################"<<endl;
    }
    else if (ShowTime==2){
        cout<<"Total price is: RM "<<totalPrice<<endl;
        cout<<"Your movie will begin at 2.00p.m."<<endl;
        cout<<"Enjoy your movie and please come again :) "<<endl;

        cout<<"\n#########################################################"<<endl;
    }
    else if (ShowTime==3){
        cout<<"Total price is: RM "<<totalPrice<<endl;
        cout<<"Your movie will begin at 4.00p.m."<<endl;
        cout<<"Enjoy your movie and please come again :) "<<endl;

        cout<<"\n#########################################################"<<endl;
    }
    else if (ShowTime==4){
        cout<<"Total price is: RM "<<totalPrice<<endl;
        cout<<"Your movie will begin at 6.00p.m."<<endl;
        cout<<"Enjoy your movie and please come again :) "<<endl;

       cout<<"\n#########################################################"<<endl;
    }
    else if (ShowTime==5){
        cout<<"Total price is: RM "<<totalPrice<<endl;
        cout<<"Your movie will begin at 8.00p.m."<<endl;
        cout<<"Enjoy your movie and please come again :) "<<endl;

        cout<<"\n#########################################################"<<endl;
    }
    }




