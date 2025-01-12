#include<iostream>
#include<iomanip>    // Precision handling
#include<fstream>   // File handling
#include<windows.h>
#include<stdlib.h>

using namespace std;
int count = 3;
int choice_hotel, packages_hotel;
bool selection;
void menu();
void modeSelection();
char txt[999];


class Mainmenu
{
protected:
    string user_Name; 

public:

    Mainmenu()
    {
    	modeSelection();
        menu(); 
    }

    ~Mainmenu() {} 
};

class Taxi{
	public:
		
		Taxi(){
			if (selection==1)
				cout << "Taxi-Constructor"<<endl;
		}

		int cab;
    	int distance;
    	float cab_cost;
    	static float l_CabCost;
		
		
		void displayDetails(){
		cout << "You can get amazing deals in our agency" << endl;
        cout << "-----------Colombo Taxi-----------\n" << endl;
        cout << "1) Rent a Zip(normal) Taxi (Rs.180 for 1KM)" << endl;
        cout << "2) Rent a Premier Taxi (Rs.250 per 1KM)" << endl;
        
        cout << "\nPlease select the option that you want" << endl;
        cout << "\nEnter which kind of Taxi you need: ";
        cin >> cab;
        cout << "Enter Kilometers you have to travel: ";
        cin >> distance;
        
        int hireCab;
        char c;

        if (cab == 1) {
            cab_cost = distance * 180;
            cout << "\nYour trip cost is " << cab_cost << " rupees for a Zip(normal) Taxi" << endl;
            cout << "\nPress 1 to hire this Taxi: ";
            cout << "Press 2 to select another Taxi: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1) {
                l_CabCost = cab_cost;
                cout << "\nYou have successfully hired Zip(normal) cab" << endl;
                cout << "Go to Menu to take the receipt" << endl;
            }
            else if (hireCab == 2) {
                displayDetails();
            }
            else {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                displayDetails();
            }
        }
        else if (cab == 2) {
            cab_cost = distance * 250;
            cout << "\nYour tour will cost " << cab_cost << " rupees for a luxury cab" << endl;
            cout << "\nPress 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1) {
                l_CabCost = cab_cost;
                cout << "\nYou have successfully hired luxury cab" << endl;
                cout << "Go to Menu to take the receipt" << endl;
            }
            else if (hireCab == 2) {
                displayDetails();
            }
            else {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                displayDetails();
            }
        }
        else {
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            //menu();
        }

        cout << "\nEnter any key to Redirect Main Menu: ";
        cin >> c;
        system("CLS");
        if (c == 'c') {
            menu();
        }
        else {
            menu();
        }
        }
};

class Hotel;
class Booking{
	public:
		Booking(){
			if (selection==1)
				cout << "Booking-Constructor"<<endl;
		}
		static float hotel_cost;
		char go_to_menu;
	
	public:
		void Hotel_booking(){
			cout << "Select the package that you want to book: ";
			cin >> packages_hotel;
			
			if(choice_hotel==1 && packages_hotel == 1){
				 hotel_cost = 15000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}
				
			else if(choice_hotel==1 && packages_hotel == 2){
				 hotel_cost = 25000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}
							 
			else if(choice_hotel==1 && packages_hotel == 3){
				 hotel_cost = 50000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}
						
			else if(choice_hotel==2 && packages_hotel == 1){
				 hotel_cost = 12300.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}	
						 
			else if(choice_hotel==2 && packages_hotel == 2){
				 hotel_cost = 22000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}			
			else if(choice_hotel==2 && packages_hotel == 3){
				 hotel_cost = 45000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}				 	 	 	 	 
			else if(choice_hotel==3 && packages_hotel == 1){
				 hotel_cost = 10000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}				 
			else if(choice_hotel==3 && packages_hotel == 2){
			 	 hotel_cost = 16000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;
			}				 
			else if(choice_hotel==3 && packages_hotel == 3){
				 hotel_cost = 43000.00;
				 cout << "\nYour booking has been confirmed\n" << endl;
				 cout << "You can see your final receipt in the main menu" << endl;	
			}
			
			else{
				system("CLS");
				cout << "You have selected an incorrected option";
				Sleep(1200);
				system("CLS");
				//Hotel::display_hotel_packages();	
			}
			
				
			cout << "\nEnter any key to Redirect Main Menu: ";
            cin >> go_to_menu;
            system("CLS");
            if (go_to_menu == '1') {
            	system("cls");
                menu();
            }
            else {
            	system("cls");
                menu();
            }
		}			
};


class Customer{
	public:
		Customer(){
			if (selection==1)
				cout << "Customer-Constructor"<<endl;
		}
    	string name, gender, address;
    	int age, mobile_no, menu_back;
    	static int cusID;
    	char txt[999];

    void getDetails()
    {
        ofstream out("Customers.txt", ios::app); //opening the file using append mode to write customer details
        {
            cout << "\nEnter Customer ID: ";
            cin >> cusID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> mobile_no;
            cout << "Address: ";
            cin >> address;
            cout << "Gender: ";
            cin >> gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobile_no << "\nAddress: " << address << "\nGender: " << gender << endl;
        out.close(); //File closing
        cout << "\nSaved \nNOTE: We save your details record for future purposes.\n" << endl;
         }
             
         
    // Showing old customer records     
    void showDetails() 
    {
        ifstream in("Customers.txt");
        {
            if (!in)
            {
                cout << "File Error!" << endl;
            }
            while (!(in.eof()))
            {
                in.getline(txt, 999);
                cout << txt << endl;
            }
            in.close(); // Closing the file
        }
    }
};

class Hotel: public Booking{
	private:
		string hotelName;
		
	public:
		Hotel(){
			if (selection==1)
				cout << "Hotel-Constructor"<<endl;
		}
		void add_name(string x){
			hotelName = x;
		}
		void view_list(){
			cout << hotelName << endl;
		}
		
		void display_hotel_packages(){
			if(choice_hotel == 1){
				system("CLS");
				cout << "Packages Offered by Galadari: \n" << endl;
				
				cout << "1. Basic Pack:  ";
            	cout << "\t Rs.15000.00 for a day" << endl;
            	cout << "2. Intermideate Pack:  ";
            	cout << "\t Rs.25000.00 for a day" << endl;
            	cout << "3. Luxary Pack:  ";
            	cout << "\t Rs.50000.00 for a day" << endl;
			}
			
			else if(choice_hotel == 2){
				system("CLS");
				cout << "Packages Offered by Cinnamon: \n" << endl;
				
				cout << "1. Basic Pack:  " ;
            	cout << "\t Rs.12300.00 for a day" << endl;
            	cout << "2. Intermideate Pack:  " ;
            	cout << "\t Rs.22000.00 for a day" << endl;
            	cout << "3. Luxary Pack:  " ;
            	cout << "\t Rs.45000.00 for a day" << endl;
			}
			
			else if(choice_hotel == 3){
				system("CLS");
				cout << "Packages Offered by Hilton: \n" << endl;
				
				cout << "1. Basic Pack:  " ;
            	cout << "\t Rs.10000.00 for a day" << endl;
            	cout << "2. Intermideate Pack:  ";
            	cout << "\t Rs.16000.00 for a day" << endl;
            	cout << "3. Luxary Pack:  " ;
            	cout << "\t Rs.43000.00 for a day" << endl;
			}
			
			else{
				system("CLS");
				cout << "Invalid input selected";
				Sleep(1200);
				system("CLS");
				cout<< "1. Galadari"<<endl;
				cout<< "2. Cinnamon"<<endl;
				cout<< "3. Hilton"<<endl;
				diplay_hotel_menu();
				
			}
		}
		
		void diplay_hotel_menu(){
			cout << "Enter the choice of the hotel that you want to book: ";
    		cin >> choice_hotel;
	
			if(choice_hotel == 1)
				display_hotel_packages();
	
			if(choice_hotel == 2)
				display_hotel_packages();
		
			if(choice_hotel == 3)
				display_hotel_packages();
		}
		
		
		
};

float Booking::hotel_cost;
float Taxi::l_CabCost;
int Customer::cusID;

class Bill:public Taxi, public Hotel {
	
	public:
			Bill(){
				if (selection==1)
				cout << "Bill-Constructor"<<endl;
			}
		   void printBill()
    		{
       			ofstream outf("receipt.txt");
       			{
           		outf << "----------City Travels----------" << endl;
            	outf << "-------------Receipt-------------" << endl;
            	outf << "_________________________________" << endl;
            	outf << "Description\t\t Total" << endl;
            	outf << "Hotel cost:\t\t " << fixed << setprecision(2) << Booking::hotel_cost << endl;
            	outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << Taxi::l_CabCost << endl;
            	outf << "_________________________________" << endl;
            	outf << "Total Charge:\t\t " << fixed << setprecision(2) << Booking::hotel_cost + Taxi::l_CabCost << endl;
            	outf << "_________________________________" << endl;
            	outf << "\n------------THANK YOU------------" << endl;
        		}
        		outf.close();
    		}
    		
    		 void showBill()
    		{
        		ifstream inf("receipt.txt");{
            		if(!inf)
            		{
                		cout << "File Error!" << endl;
            		}
            		while(!(inf.eof()))
            		{
            	  	  inf.getline(txt, 999);
               		 cout << txt << endl;
           			}
        		}
        		inf.close();
    		}
};



// Function for the main menu
void menu() 
			{	

    			int mainChoice;
    			int inChoice;
    			char gotoMenu;
    			 
    			
    			
    			
    			
    			
    			cout << "\t\t      * City Travels *\n" << endl;
   				cout << "-------------------------Main Menu--------------------------" << endl;

    			cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    			cout << "\t|\t\t\t\t\t|" << endl;
    			cout << "\t|\tCustomer Management -> 1\t|" << endl;
    			cout << "\t|\tTaxi Management     -> 2\t|" << endl;
    			cout << "\t|\tBookings Management -> 3\t|" << endl;
   			 	cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    			cout << "\t|\tExit                -> 5\t|" << endl;
    			cout << "\t|\t\t\t\t\t|" << endl;
   				cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;
	
   				cout << "\nEnter Choice: ";
    			cin >> mainChoice;
				Hotel hotelArray[10];
    			system("CLS");
			
				
	
				hotelArray[0].add_name("Galadari");
				hotelArray[1].add_name("Cinnamon");
				hotelArray[2].add_name("Hilton");

    			
    			if (mainChoice == 1) {
    				Customer a2;
       	   			cout << "------Customers------\n" << endl;
        			cout << "1. Enter New Customer" << endl;
        			cout << "2. See Old Customers" << endl;

        			cout << "\nEnter choice: ";
        			cin >> inChoice;

        			system("CLS");
        		
       				if (inChoice == 1) {
            			a2.getDetails();
        			}
        		
        			else if (inChoice == 2) {
            			a2.showDetails();
       			 	}
       			 
       				else{
            			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            			Sleep(1100);
            			system("CLS");
            			menu();
        			}
        		
        			cout << "Enter any key to Redirect Main Menu: ";
       				cin >> gotoMenu;
        			system("CLS");
        			
        			if (gotoMenu == '1') {
            			menu();
       				}
       			
       				else {
           				menu();
        			}
    			}
    			
    			
    			if (mainChoice == 2) {
    				Taxi a3;
    				Taxi T1;
       				a3.displayDetails();
    			}	
						
    			else if (mainChoice == 3) {
    				Hotel a4;
    				
    				Booking B1;
       				cout << "### Book your favourite hotel in a discounted price ###\n" << endl;
       				
       				for(int i=0; i< count;i++){
						cout<< i+1<<". ";
						hotelArray[i].view_list();
					}
					
        			a4.diplay_hotel_menu();
        			a4.display_hotel_packages();
        			B1.Hotel_booking();
    				}
    				
    			else if (mainChoice == 4) {
    				
    				Bill a5;
    				Hotel h1;
        			cout << "###   Get your receipt   ###\n" << endl;
       				a5.printBill();
       				a5.showBill();
        			cout << "\nYou can also see your printed receipt in the file path\n" << endl;
        			cout << "Enter any key to Redirect Main Menu: ";
        			cin >> gotoMenu;
        			
            				if (gotoMenu == 1) {
            					system("cls");
                				menu();
            				}
            			
            				else {
            					system("cls");
                				menu();
            				}
										
   					}
   					
    			else if (mainChoice == 5) {
        			cout << "\n\n\t--Thank you!--" << endl;
        			cout << "\n\n\t--Come again--" << endl;
        			Sleep(1200);
        			system("CLS");
    			}
    			
    			else {
        			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
       				Sleep(1200);
        			system("CLS");
    			}
			}


void modeSelection(){
	
	cout<< "Select the mode "<<endl;
	cout<< "Enter 0 for Regular mode and Enter 1 for Education mode: "; 
	cin >> selection;
	
	system("CLS");
}


int main(){
	Hotel h1;
	Taxi T1;
	Hotel hotelArray[10];
	
	hotelArray[0].add_name("Galadari");
	hotelArray[1].add_name("Cinnamon");
	hotelArray[2].add_name("Hilton");
	
	Mainmenu M1;
	
	
	return 0;
}
