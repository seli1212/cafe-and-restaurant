#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string.h>
#include <ctime>
using namespace std;

struct Customer{
    string firstName;
    string lastName;
    int cid;
    int phoneNum;
    int creditCardNum;
}c[100]={{"Tesfamariam", "Amsalu", 21, 123345677, 3479},
        {"Rahwa", "Berhane",30,83312305,1245},
        {"Selina","Yeshanew",25,5645757,4578},
        {"Rahel","Hailu",34,346790,7890}};

struct food{
    string type;//breakfast or lunch
    string name;
    float price;
    float cost;
    int quantity;
}bkfast[21]={{"breakfast", "enkulal firfir ",21 , 16, 20},
            {"breakfast", "firfir besega",21 , 16, 20},
            {"breakfast", "chicken ",21 , 16, 20},
            {"breakfast", "scrambled egg ",21 , 16, 20},
            {"breakfast", "normal firfir",21 , 16, 20},
            {"breakfast", "special sandwich",21 , 16, 20},
            {"breakfast", "siga sandwich",21 , 16, 20},
            {"breakfast", "Ekulal sandwich",21 , 16, 20}},
 lun[21]={{"lunch", "Beyaynet ",21 , 16, 20},
          {"lunch", "Siga wet",21 , 16, 20},
          {"lunch", "Siga Tibs ",21 , 16, 20},
          {"lunch", "Minchet ",21 , 16, 20},
          {"lunch", "Pasta Be Atikilt ",21 , 16, 20},
          {"lunch", "Rice ",21 , 16, 20},
          {"lunch", "shro Wet ",21 , 16, 20},
          {"lunch", "Tegabino ",21 , 16, 20}},

 din[21]={{"dinner", "Beyaynet ",21 , 16, 20},
          {"dinner", "Siga wet",21 , 16, 20},
          {"dinner", "Siga Tibs ",21 , 16, 20},
          {"dinner", "Minchet ",21 , 16, 20},
          {"dinner", "Pasta Be Atikilt ",21 , 16, 20},
          {"dinner", "shero ",21 , 16, 20},
          {"dinner", "Rice",21 , 16, 20},
          {"dinner", "Tegabino ",21 , 16, 20}
            },
 des[21]={{"dessert", "cake ",21 , 16, 20},
          {"dessert", "mushebek",21 , 16, 20},
          {"dessert", "donat ",21 , 16, 20},
          {"dessert", "black forest ",21 , 16, 20},
          {"dessert", "chocolate cake",21 , 16, 20},
          {"dessert", "Ice Cream ",21 , 16, 20},
          {"dessert", "Halwa ",21 , 16, 20},
          {"dessert", "Baklaba ",21 , 16, 20}};

struct Drink{
    string name;
    float cost;
    int quantity;
    float price;
}dk[7]={ {" COCACOLA", 16, 99, 21},
         { " SPRITE", 16, 99, 20},
         { " MIRINDA", 16, 99, 21},
         { " FANTA",  16, 99, 20},
         { " MILK", 14, 99, 20},
         { " JUCIE", 21, 99, 20}
    };

struct sale{
    int date;
    food name;
}sales;

struct Delivery{
    string type;
    Customer client;
    string address;
    string status;
};


struct prepaid_card{
    string name;
    int phone;
    int period;
    int card_num;
    int money;
}p_card[100];

void firstScreen();
void back_to_menu();
void mainMenu();
void adminsterator();
void customer(/*Customer c[100]*/);
//Customer newCustomer();
float menu();
float breakFast();
float lunch();
float dinner();
float dessert();
float drinks();
float logic(float bill);
void customer_table();
void prepaid();
void card();
void delivery();

float bill, quantity;
int n=1, id;

int main(){
     firstScreen();
     mainMenu();
    return 0;
}

void firstScreen(){
    system("color ");
    cout <<setw(72) << "________________________________________________________"<< endl;
    cout <<setw(72) << "| |--------------------------------------------------| |"<< endl;
    cout <<setw(72) << "| |             DEGE CAFE AND RESTAURANT             | |"<< endl;
    cout <<setw(72) << "| |**************************************************| |"<< endl;
    cout <<setw(72) << "| |****************** WELCOME ***********************| |"<< endl;
    cout <<setw(72) << "| |**************************************************| |"<< endl;
    cout <<setw(72) << "| |__________________________________________________| |"<< endl;
    cout <<setw(72) << "|______________________________________________________|"<< endl<< endl<< endl;
    system("pause");
    system("cls");
}

void mainMenu(){
    int preferedNum;
    again:
    system("cls");


    cout <<setw(72) << "+---------------------------------------------------------+"<<endl;
    cout <<setw(72) << "|                     MAIN MENU:                          |"<< endl;
    cout <<setw(72) << "|_________________________________________________________|"<<endl;
    cout <<setw(72) << "|     1. ADMINSESTRATER                                   |"<<endl;
    cout <<setw(72) << "|     2. NEW CUSTOMER                                     |"<<endl;
    cout <<setw(72) << "|     3. CUTSTOMER                                        |"<<endl;
    cout <<setw(72) << "|     4. GET A PREPAID CARD                               |"<<endl;
    cout <<setw(72) << "|     5. EXIT                                             |"<<endl;
    cout <<setw(72) << "|_________________________________________________________|"<<endl;
    cout <<setw(72) << "|                 THANK YOU FOR THE VISIT:                |"<<endl;
    cout <<setw(72) << "+---------------------------------------------------------+"<<endl;
    cout <<setw(44)<<" Please select your prefered number:- ";
    cin >> preferedNum;

    switch(preferedNum){

        case 1:
            adminsterator();
            break;
        case 2:
            customer(/*New*/);
            break;
        case 3:
            system("exit");
            break;
        default:
            cout <<" INVALID INPUT PLEASE INTER THE CORECT CHOICE OF NUMBER: ";
            system("pause");
            goto again;
    }
}

void adminsterator(){
    system("cls");
    string admin, pass;
    int adminChoice;
    cout <<"____________________________________________________"<< endl;
    cout <<"|**************************************************|"<< endl;
    cout <<"|                 PLEASE LOGIN                     |"<< endl;
    cout <<"|**************************************************|"<< endl;
    cout <<"|__________________________________________________|"<< endl;
    cout <<" Admin user:";  cin >> admin;
    cout <<" Password: "; cin >> pass;

    if(admin=="admin" || pass=="21"){
        restart:
        system("cls");
        cout << "--------------- SUCCESSFULLY LOGED IN   -------------\n";
        cout << "***************    welcome admin        *************\n";
        cout << "\t\t 1) see menu\n";
        cout << "\t\t 2) amount of ingredient\n";
        cout << "\t\t 3) Daily sales report \n";
        cout << "\t\t 4) compute profit\n";
        cout << "\t\t 5) see customer list\n";
        cout << "\t\t 6) remove a customer from customer list\n\n\n";
        cout << "Please enter your choice: ";
        cin >>adminChoice;
        switch(adminChoice){
                 case 1:
                menu();
                break;
            case 2:
                prepaid();
                break;
            case 3:
                customer_table();
                break;
            default:
                cout <<" INVALID INPUT PLEASE INTER THE CORECT CHOICE OF NUMBER: ";
                system("pause");
                goto restart;
                break;


        }
    }
}
void customer(/*Customer c[100]*/){
    restart:
     char a; int b=0;

    system("cls");

    cout << "please enter your customer ID: "; cin >> id;
    for(int i=0; i<100; i++){
        if(id == c[i].cid){
            cout << "welcome "<< c[i].firstName<<" " <<c[i].lastName<< endl;
            system("pause");
            menu();
            b++;
        }}
        //break;
        if(b==0) {
            cout << "you have entered a wrong customer id, do you want to try again(y)"; cin >> a;
            if(a=='y'){
                goto restart;
            }
        }
}

float menu(){

    again:
    system("cls");

    cout << setw(19) << "    _____\n";
    cout << setw(43) << "   /     \\   ____   ____    __ __\n";
   	cout << setw(44) << "  /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
  	cout << setw(44) << "/    Y    \\  ___/|   |   \\|  |  |\n";
  	cout << setw(44) << " \\____|____/\\____>____|____|_____|\n";
  	cout << "\n\t+  ___________________________________ +" << endl;
	cout << "\n\t|  ----------------------------------- |" << endl;
	cout << setw(48)<<" |1)    BREAKFAST                       |" << endl;
    cout << setw(48)<<" |2)    LUNCH                           |"   << endl;
	cout << setw(48)<<" |3)    DINNER                          |"	<< endl;
	cout << setw(48)<<" |4)    DeSSERT                         |"	<< endl;
	cout << setw(41)<<"\t| ____________________________________ |"	<< endl;
	cout << setw(41)<<"\t+ ------------------------------------ +\n\n" << endl;
	cout <<"\t Enter the your choice number: ";
	int choiceNum;
	cin >>choiceNum;

	switch(choiceNum){
        case 1:
            bill = breakFast();
            break;
        case 2:
            bill = lunch();
            break;
        case 3:
            bill = dinner();
            break;
        case 4:
            bill = dessert();
            break;
        case 5:
            bill = drinks();
            break;
        default:
            cout << "Invalid input, please enter the correct input";
            goto again;
            system("pause");
            break;
	}
	logic(bill);
}

void back_to_menu(){
    restart:
    cout <<"*******************************************************\n";
    cout <<"*          [1] TO SEE THE BILL                        *\n";
    cout <<"*******************************************************\n";
    cout <<"*******************************************************\n";
    cout <<"*          [2] TO GO BACK TO MENU                     *\n";
    cout <<"*******************************************************\n";
    char r;
    cin >>r;
    switch(r){
        case '1':
            break;
        case '2':
            mainMenu();
            break;
        default:
            cout << "invalid input ";
            system("pause");
            goto restart;
    }
}

float breakFast(){
    int n,m; char option;

    system("cls");
    cout << "\n\t        -----------------------------------------------"<<endl;
    cout << "\t       |                Breakfast - MENU              |"<<endl;
	cout << "\t        -----------------------------------------------\n"<<endl;
    cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<bkfast[0].name<<"             |\t       |\t"  <<bkfast[1].name<<"             |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<bkfast[0].price<<"br. \t\t     |\t       |\t"<<bkfast[1].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<bkfast[2].name<<"       |\t       |\t"  <<bkfast[3].name<<"            |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<bkfast[2].price<<"br. \t\t     |\t       |\t"<<bkfast[3].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<bkfast[4].name<<"                |\t       |\t"  <<bkfast[5].name<<"      |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<bkfast[4].price<<"br. \t\t     |\t       |\t"<<bkfast[5].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 ---------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<bkfast[6].name<<"               |\t       |\t"  <<bkfast[7].name<<"           |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<bkfast[6].price<<"br. \t\t     |\t       |\t"<<bkfast[7].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << " Enter your choice number: ";
	cin>>n;

	cout<< "how many of your choice do you want to have: "; cin>>m;
    bkfast[n-1].quantity--;

	a:
	cout << "do you like to get some drinks as well(y/n): "; cin >>option;
	cout<<bkfast[n-1].quantity;
	system("pause");

	if(option== 'n' || option =='N'){
        back_to_menu();
        return n*m;
	}
	else if(option =='y' || option== 'Y'){
	    float drink_total = drinks();
        return ((n*m)+drink_total);
	}
	else{
        goto a;
	}
}

float lunch(){
    int n,m; char option;

    system("cls");
    cout << "\n\t\t ------------------------------------------------"<<endl;
	cout << "\t\t |                    Lunch - MENU                 |" <<endl;
	cout << "\t\t  -----------------------------------------------\n"<<endl;
    cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<lun[0].name<<"             |\t       |\t"  <<lun[1].name<<"             |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<lun[0].price<<"br. \t\t     |\t       |\t"<<lun[1].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<lun[2].name<<"       |\t       |\t"  <<lun[3].name<<"            |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<lun[2].price<<"br. \t\t     |\t       |\t"<<lun[3].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<lun[4].name<<"                |\t       |\t"  <<lun[5].name<<"      |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<lun[4].price<<"br. \t\t     |\t       |\t"<<lun[5].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 ---------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<lun[6].name<<"               |\t       |\t"  <<lun[7].name<<"           |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<lun[6].price<<"br. \t\t     |\t       |\t"<<lun[7].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << " Enter your choice number: ";
	cin>>n;
	n=bkfast[n-1].price;
	cout<< "how many of your choice do you want to have: "; cin>>m;
	a:
	cout << "do you like to get some drinks as well(y/n): "; cin >>option;

	if(option== 'n' || option =='N'){
            back_to_menu();
        return n*m;
	}
	else if(option =='y' || option== 'Y'){
	    float drinktotal = drinks();
	     back_to_menu();
        return ((n*m)+drinktotal);
	}
	else{
        goto a;
	}
}

float dinner(){
    int n,m; char option;

    system("cls");
    cout << "\n\t\t ------------------------------------------------"<<endl;
	cout << "\t\t |                Dinner - MENU                 |" <<endl;
	cout << "\t\t  -----------------------------------------------\n"<<endl;
    cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<din[0].name<<"             |\t       |\t"  <<din[1].name<<"             |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<din[0].price<<"br. \t\t     |\t       |\t"<<din[1].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<din[2].name<<"       |\t       |\t"  <<din[3].name<<"            |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<din[2].price<<"br. \t\t     |\t       |\t"<<din[3].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<din[4].name<<"                |\t       |\t"  <<din[5].name<<"      |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<din[4].price<<"br. \t\t     |\t       |\t"<<din[5].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << " Enter your choice number: ";
	cin>>n;
	n=bkfast[n-1].price;
	cout<< "how many of your choice do you want to have: "; cin>>m;
	a:
	cout << "do you like to get some drinks as well(y/n): "; cin >>option;

	if(option== 'n' || option =='N'){
            back_to_menu();
        return n*m;
	}
	else if(option =='y' || option== 'Y'){
	    float drinktotal = drinks();
	     back_to_menu();
        return ((n*m)+drinktotal);
	}
	else{
        goto a;
	}
}

float dessert(){
  int n,m; char option;

    system("cls");
    cout << "\n\t\t ------------------------------------------------"<<endl;
	cout << "\t\t |                  Dessert - MENU                 |" <<endl;
	cout << "\t\t  -----------------------------------------------\n"<<endl;
    cout << "\n        +----------- ^-^ #1 ---------+ \t       +---------- ^-^ #2 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<des[0].name<<"             |\t       |\t"  <<des[1].name<<"             |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<des[0].price<<"br. \t\t     |\t       |\t"<<des[1].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #3 ---------+ \t       +---------- ^-^ #4 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<des[2].name<<"       |\t       |\t"  <<des[3].name<<"            |" << endl;
	cout << "\t|                            |\t       |                            |" << endl;
	cout << "\t|\t"<<des[2].price<<"br. \t\t     |\t       |\t"<<des[3].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+" << endl;
	cout << "\n\n        +----------- ^-^ #5 ---------+ \t       +---------- ^-^ #6 ----------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<des[4].name<<"                |\t       |\t"  <<des[5].name<<"      |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<des[4].price<<"br. \t\t     |\t       |\t"<<des[5].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << "\n\n        +----------- ^-^ #7 ---------+ \t       +---------- ^-^ #8 ---------+"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<des[6].name<<"               |\t       |\t"  <<des[7].name<<"           |" << endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|                            |\t       |                            |"<<endl;
	cout << "\t|\t"<<des[6].price<<"br. \t\t     |\t       |\t"<<des[7].price<<"br.      \t    |" << endl;
	cout << "\t+----------------------------+\t       +----------------------------+"<<endl;
	cout << " Enter your choice number: ";
	cin>>n;
	n=bkfast[n-1].price;
	cout<< "how many of your choice do you want to have: "; cin>>m;
	a:
	cout << "do you like to get some drinks as well(y/n): "; cin >>option;

	if(option== 'n' || option =='N'){
        back_to_menu();
        return n*m;
	}
	else if(option =='y' || option== 'Y'){
	    float drinktotal = drinks();
	     back_to_menu();
        return ((n*m)+drinktotal);
	}
	else{
        goto a;
	}
}

float drinks(){
    float n,m; char z;

    restart:
    system("cls");
    cout << "\n\t\t  -----------------------------------------------"<<endl;
	cout << "\t\t |               Drinks - MENU                  |"<<endl;
	cout << "\t\t  -----------------------------------------------\n"<<endl;
    cout << "\n\t\t\t + ----------------------------- +" << endl;
	cout << "\t\t\t |          DRINKS               |"   << endl;
	cout << "\t\t\t |                               |"   << endl;
	cout << "\t\t\t |     1)  "<<dk[0].name<<"        16br.|"   << endl;
	cout << "\t\t\t |     2)  "<<dk[1].name<<"          16br.|"   << endl;
	cout << "\t\t\t |     3)  "<<dk[2].name<<"          16br.|"   << endl;
	cout << "\t\t\t |     4)  "<<dk[3].name<<"           16br.|"   << endl;
	cout << "\t\t\t |     5)  "<<dk[4].name<<"            14br.|"   << endl;
	cout << "\t\t\t |     6)  "<<dk[5].name<<"           21br.|"   << endl;
	cout << "\t\t\t + --------------------------- +\n" << endl<<endl<< endl;
	cout << "\t\t\t  Enter your choice number: "; cin >> n;
	cout << "\t\t\t  enter the amount you want: "; cin >> m;
    back_to_menu();
	return n*m;
}

float logic(float bill ){
    restart:
    int payed,x, num; char y; string add;
    system("cls");

    cout << endl<<endl<<endl;
    cout << "\t\t\t__________________________________________________\n";
    cout << "\t\t\t|        DEGE CAFE AND RESTAURANT              \t | \n";
    cout << "\t\t\t|            Bole wello-sefer        \t\t |\n";
    cout << "\t\t\t--------------------------------------------------\n";

    cout << "  Manager: "<< " Dege "<<endl;
    cout << "  Customer: "<<c[id].firstName<<" "<<c[id].lastName<<endl << endl <<endl;
    cout << "  YOUR BILL IS : "<<bill<< "$"<<endl;
    cout <<"  IF YOU HAVE A PREPAID CARD[y/n] : ";
    cin >> y;
    if(y=='y'){
        cout<<"PLEASE ENTER YOUR CARD NUMBER : ";
        cin >> num;
        for(int i = 0; i <100; i++){
            if(p_card[i].card_num = num ){
                cout << "you have sucessfully cashed in \n";
                x =p_card[i].money - bill;
                cout << "your remaining amount from your purchase is : "<<x;
            }
        }
    }
    else{
        cout << "  PLEASE ENTER THE AMOUNT SHOWN : "; cin >> payed;}
        if(payed >= bill){
            x = payed - bill;
            cout <<"\n  YOUR CHANGE : "<<x ;
        }
        else {
            cout << "please enter the suficent amount!!";
            system("pause");
            goto restart;
    }

    cout << "\n do you need your item to be delivered[y/n]";
    cin >> y;
    if(y=='y'){
        cout << "\n enter your address :"; cin >> add;
        cout << "\n we have your phone and address your item should be there soon";
    }

    cout <<"\n\n\n\t\t\t THANK YOU, PLEASE COME AGAIN\n\n\n";
    cout << "   [R] To return to the menu\n";
    char r;
    cin >> r;
    if(r=='r'|| r=='R'){
        menu();
    }

    return 0;
}


void customer_table(){

    cout << "\t\t\t CUSTOMER LIST\n";
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout << "|   FIRST NAME  |   LAST NAME   |   CUSTOMER-ID |   CREDIT NUMBER  |\n";
    cout << "--------------------------------------------------------------------\n";
    for(int i = 0; i < n; i++){
        cout <<setw(12)<< c[i].firstName<<setw(14)<< c[i].lastName<<setw(16)<< c[i].cid<<setw(21)<< c[i].creditCardNum<<endl;
        }
    system("pause");
    adminsterator();

}

void prepaid(){
    system("cls");
    int option; float payed;
    cout << "\t\t\t______________________________________________________________________\n";
    cout << "\t\t\t|                DEGE CAFE AND RESTAURANT              \t\t    | \n";
    cout << "\t\t\t|                     Bole wello-sefer        \t\t\t    |\n";
    cout << "\t\t\t______________________________________________________________________\n";
    cout <<"\t\t\t     welcome here you can buy a prepaid card with great discount    \n";
    cout << "\t\t\t----------------------------------------------------------------------\n\n\n";
    cout <<"\t 1] GET A MONTHLY SUBSCRIPTION FOR A MONTH \t\t\t PRICE 1200br. \n";
    cout <<"\t 2] GET A 3 MONTH SUBSCRIPTION FOR A MONTH \t\t\t PRICE 3500br. \n";
    cout <<"\t 3] GET A 6 MONTHLY SUBSCRIPTION FOR A MONTH \t\t\t PRICE 7200br. \n";
    cout << "\t  ENTER WHAT EVERY PACKAGE YOU LIKE : ";    cin >> option;

    switch(option){
        case 1:
            start:
            cout << " please enter your full name :";               cin>>c[n].firstName >> c[n].lastName;
            cout << "\n please enter your phone number :";          cin>> c[n].phoneNum;
            cout <<"\n please enter your credit card number : ";    cin >> c[n].creditCardNum;
            cout << " please pay 1200 for you to get a card \n";    cin >> payed;

            p_card[n].name = c[n].firstName;
            p_card[n].phone = c[n].phoneNum;
            p_card[n].period = 1;
            p_card[n].money = 1200;

            if(payed >= 1200){
                float change = payed -change;
//                srand((unsigned) time(0));
                int r =(rand()%100)+1;
                c[n].cid=r;
                p_card[n].card_num=r;
                cout << "your change is : "<<change;
                cout <<"your id is: "<<r<<"\n\n\n";
                n++;
                cout << "\n now you can sign in with your ID: \n";
                system("pause");
                card();
                }
            else{ goto start;}
                break;
        case 2:
            startt:
            cout << " please enter your full name :";               cin>>c[n].firstName >> c[n].lastName;
            cout << "\n please enter your phone number :";          cin>> c[n].phoneNum;
            cout <<"\n please enter your credit card number : ";    cin >> c[n].creditCardNum;
            cout << " please pay 3500 for you to get a card \n";    cin >> payed;

            p_card[n].name = c[n].firstName;
            p_card[n].phone = c[n].phoneNum;
            p_card[n].period = 3;
            p_card[n].money = 3500;

            if(payed >= 3500){
                float change = payed -change;
//                srand((unsigned) time(0));
                int r =(rand()%100)+1;
                c[n].cid=r;
                p_card[n].card_num=r;
                cout << "your change is : "<<change;
                cout <<"your id is: "<<r<<"\n\n\n";
                n++;
                cout << "\n now you can sign in with your ID: \n";
                system("pause");
                card();
                }
            else{ goto startt;}
                break;
        case 3:
            starttt:
            cout << " please enter your full name :";               cin>>c[n].firstName >> c[n].lastName;
            cout << "\n please enter your phone number :";          cin>> c[n].phoneNum;
            cout <<"\n please enter your credit card number : ";    cin >> c[n].creditCardNum;
            cout << " please pay 7200 for you to get a card \n";    cin >> payed;

            p_card[n].name = c[n].firstName;
            p_card[n].phone = c[n].phoneNum;
            p_card[n].period = 6;
            p_card[n].money = 7200;

            if(payed >= 7200){
                float change = payed -change;
               // srand((unsigned) time(0));
                int r =(rand()%100)+1;
                c[n].cid=r;
                p_card[n].card_num=r;
                cout << "your change is : "<<change;
                cout <<"your id is: "<<r<<"\n\n\n";
                n++;
                cout << "\n now you can sign in with your ID: \n";
                system("pause");
                card();
                }
            else{ goto starttt;}
                break;
    }
}

void card(){
    system("cls");
    cout << "\t\t\t__________________________________________________\n";
    cout << "\t\t\t|        DEGE CAFE AND RESTAURANT              \t | \n";
    cout << "\t\t\t|            Bole wello-sefer        \t\t |\n";
    cout << "\t\t\t___________________________________________________\n";
    cout <<"\t\t\t                  PREPAID CARD\n";
    cout << "\t\t\t---------------------------------------------------\n";
 	system("pause");
 	mainMenu();
}

void delivery(){
    system("cls");
    cout << "\t\t\t__________________________________________________\n";
    cout << "\t\t\t|        DEGE CAFE AND RESTAURANT              \t | \n";
    cout << "\t\t\t|            Bole wello-sefer        \t\t |\n";
    cout << "\t\t\t___________________________________________________\n\n\n";
    cout << " _____________________________________________________________________________________\n";
    cout << "|  FIRST NAME      |   LAST NAME    |   TYPE       |   ADDRESS       |    STATUS      |\n";
    cout << " -------------------------------------------------------------------------------------\n";


}






