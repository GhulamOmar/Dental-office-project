// Name: Omar Ahmad
// Email: gomar@dmacc.edu
// 12/04/2108
// Project Name: Dental Office
// This is a class for Patient that creates the fields of first name, last name, 
//street addres, phone 1, Date,emergency contact phone,emergency Contact FirstName, emergency Contact LastName,fillings,Complete_exams,Crowns_bridges.
// It has getters and setter for each of the fields.And there are two patients.
// The user can enter in Make appointment, Remove patient, Lookup patient, Writ to file, write to a file, and exit the program.
#include <iostream>
//#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Patient // A class for holding all the patient information.
{
private:
	string firstName,
		lastName,
		streetAddress,
		phone1,
		Date,
		emergencyContactFirstName,
		emergencyContactLastName,
		emergencyPhone;

	int fillings,
		Complete_exams,
		Cosmetic_dentistry,
		Implants_placement,
		Crowns_bridges;
public:
	void setFirstName(string fname);
	void setLastName(string lname);
	void setAddress(string address);
	void setPhone1(string phone1);
	void setDate(string date);
	void setfillings(int filling);
	void setComplete_exams(int Completeexams);
	void setCosmetic_dentistry(int Cosmeticdentistry);
	void setImplants_placement(int Implantsplacement);
	void setCrowns_bridges(int Crownsbridgest);
	void setEmergContactFirstName(string efname);
	void setEmergContactLastName(string elname);
	void setemergencyPhone(string ph2);

	string getFirstName();
	string getLastName();
	string getAddress();
	string getPhone1();
	string getDate();
	string getEmergContactFirstName();
	string getEmergContactLastName();
	string getemergPhone();
	int getfilling();
	int getComplete_exams();
	int getCosmetic_dentistry();
	int getImplants_placement();
	int getCrowns_bridges();

	Patient();

	Patient(int filling, int Completeexams, int Cosmeticdentistry, int Implantsplacement, int Crownsbridges, string fname, string lname, string address, string date, string ph1, string ename, string ephone);
};

//default constructor
Patient::Patient()

{

}
Patient::Patient(int filling, int Completeexams, int Cosmeticdentistry, int Implantsplacement, int Crownsbridges, string fname, string lname, string address, string date, string ph1, string ename, string ephone)
{

}
// Setters.
void Patient::setFirstName(string fname)
{
	firstName = fname;
}
void Patient::setLastName(string lname)
{
	lastName = lname;
}

void Patient::setAddress(string address)
{
	streetAddress = address;
}

void Patient::setPhone1(string ph1)
{
	phone1 = ph1;
}

void Patient::setemergencyPhone(string ephone)
{
	emergencyPhone = ephone;
}
void Patient::setEmergContactFirstName(string efname)
{
	emergencyContactFirstName = efname;
}
void Patient::setEmergContactLastName(string elname)
{
	emergencyContactLastName = elname;
}
void  Patient::setfillings(int filling)
{
	fillings = filling;
}
void  Patient::setComplete_exams(int Completeexams)
{
	Complete_exams = Completeexams;
}
void  Patient::setCosmetic_dentistry(int Cosmeticdentistry)
{
	Cosmetic_dentistry = Cosmeticdentistry;
}
void  Patient::setDate(string date)
{
	Date = date;
}
void  Patient::setImplants_placement(int Implantsplacement)
{
	Implants_placement = Implantsplacement;
}
void  Patient::setCrowns_bridges(int Crownsbridges)
{
	Crowns_bridges = Crownsbridges;
}
// Getters.

string Patient::getFirstName()
{
	return firstName;
}

string Patient::getLastName()
{
	return lastName;
}

string Patient::getAddress()
{
	return streetAddress;
}

string Patient::getPhone1()
{
	return phone1;
}
string Patient::getDate()
{
	return Date;

}
string Patient::getEmergContactFirstName()
{
	return emergencyContactFirstName;
}
string Patient::getEmergContactLastName()
{
	return emergencyContactLastName;
}
string Patient::getemergPhone()
{
	return emergencyPhone;
}
int Patient::getfilling()
{
	return fillings;
}
int Patient::getComplete_exams()
{
	return Complete_exams;
}
int Patient::getCosmetic_dentistry()
{
	return Cosmetic_dentistry;
}

int Patient::getImplants_placement()
{
	return Implants_placement;
}
int  Patient::getCrowns_bridges()
{
	return Crowns_bridges;
}
// Constants for Main menus.
const int MAINMENU = 1,
REMOVEPATIENT = 2,
VIEWPATIENT = 3,
MAINMEWriteFile = 4,
MAINMENUQUIT = 5;
// Constants for default patients.
const int FIRSTPATIENT = 1,
SECONDPATIENT = 2;

int main()
{
	// Variables used in the program.
	string firstName,
		lastName,
		streetAddress,
		phone1,
		Date,
		emergencyContactFirstName,
		emergencyContactLastName,
		emergencyPhone,
		newUserName,
		userName,
		password = "";
	int fillings = 80,
		duration = 1,
		Complete_exams = 200,
		Cosmetic_dentistry = 800,
		Implants_placement = 1000,
		Crowns_bridges = 100,
		removeElement = 0,
		addPatient = 0,
		addPatient1 = 0,
		removePatient = 0,
		editPatient = 0,
		viewPatient = 0,
		writeFile = 0,
		exit = 0;
		// Makng a couple of patients.
	vector<Patient> firstpatient;
	vector<Patient> secondpatient;

	Patient JameSmith;
	Patient MariaRodriguez;
      // Making  default patient for each vector.
	JameSmith.setFirstName("Jame");
	JameSmith.setLastName("Smith");
	JameSmith.setAddress("1409 NE 25th ST");
	JameSmith.setPhone1("56456545655");
	JameSmith.setDate("10-12-2018");
	JameSmith.setfillings(80);
	JameSmith.setEmergContactFirstName("Mary");
	JameSmith.setEmergContactLastName("Smith");
	JameSmith.setemergencyPhone("515-456-7891");
	firstpatient.push_back(JameSmith);

	MariaRodriguez.setFirstName("Maria");
	MariaRodriguez.setLastName("Rodriguez");
	MariaRodriguez.setAddress("1409 NE 25th ST");
	MariaRodriguez.setPhone1("455454545454");
	MariaRodriguez.setDate("12-12-2018");
	MariaRodriguez.setComplete_exams(200);
	MariaRodriguez.setEmergContactFirstName("Larry");
	MariaRodriguez.setEmergContactLastName("Lint");
	MariaRodriguez.setemergencyPhone("515-456-7891");
	secondpatient.push_back(MariaRodriguez);
     // Asking the user for a username and password.
	cout << "Welcome to the Dental office database!" << endl; 
	cout << "Default username: dental | Default password: patient" << endl;
	cout << endl;
	cout << "Username: ";
	cin >> userName;
	cout << "Password: ";
	cin >> password;
   // If the username and password are correct check with the do-while loop.
	if (userName =="dental" && password =="patient") 
	{
		do // Do this.
		{
			cout << endl; // Main menu output
			cout << "Welcome " << userName << " please select what you'd like to choose." << endl;
			cout << "1. Make appointment" << endl;
			cout << "2. Remove patient" << endl;
			cout << "3. Lookup patient" << endl;
			cout << "4. Writ to file" << endl;
			cout << "5. Quit" << endl;
			cin >> addPatient;
			cout << endl;

			Patient newPatient;
			switch (addPatient)
			{

			case MAINMENU: // CASE MAINMENU.
				cout << endl; // Space for the output.
				cout << "Dentist Service List." << endl;
				cout << "1. Complete exams" << endl;
				cout << "2. Fillings" << endl;
				cout << "3. Cosmetic dentistry." << endl;
				cout << "4. Implants - placement." << endl;
				cout << "5. Crowns, bridges." << endl;
				cout << endl;
				cin >> addPatient;
				newPatient.setemergencyPhone(emergencyPhone);
				if (addPatient == 1) // if statement for dental Services.
				{
					cout << "Patient needs Complete exams, x-rays, and dental cleanings." << endl;
					cout << "Service cost" << "-$" << Complete_exams << endl;
					cout << "Service duratin" << " " << duration << "hour/s" << endl << endl;
				}
				if (addPatient == 2)
				{
					cout << "Patient needs Fillings, root canals, and extractions." << endl;
					cout << "Service cost" << "-$" << fillings << endl;
					cout << "Service duratin" << " " << duration << "hour/s" << endl << endl;
				}
				if (addPatient == 3)
				{
					cout << "Patient needs Cosmetic dentistry, such as whitening, porcelain and composite veneers." << endl;
					cout << "Service cost" << "-$" << Cosmetic_dentistry << endl;
					cout << "Service duratin" << " " << duration << "hour/s" << endl << endl;
				}
				if (addPatient == 4)
				{
					cout << "Patient needs Implants - placement and restoration." << endl;
					cout << "Service cost" << "-$" << Implants_placement << endl;
					cout << "Service duratin" << " " << duration << "hour/s" << endl << endl;
				}
				if (addPatient == 5)
				{
					cout << "Patient needs Crowns, bridges, full and partial dentures." << endl;
					cout << "Service cost" << "-$" << Crowns_bridges << endl;
					cout << "Service duratin" << " " << duration << "hour/s" << endl << endl;
				}   // Ask for all information
				cout << "Please enter Patient's informaton." << endl; 
				cout << "First name." << endl;
				cin >> firstName;
				newPatient.setFirstName(firstName);
				cout << "last name." << endl;
				cin >> lastName;
				newPatient.setLastName(lastName);
				cout << "Phone number (EXAMPLE: 515-931-5576)." << endl;
				cin >> phone1;
				newPatient.setPhone1(phone1);
				cout << "Address." << endl;
				cin >> streetAddress;
				newPatient.setAddress(streetAddress);
				cout << "Date. (EXAMPLE: M/D/Y)." << endl;
				cin >> Date;
				newPatient.setDate(Date);
				cout << "Enter a new Patient's emergency contact's first name." << endl;
				cin >> emergencyContactFirstName;
				newPatient.setEmergContactFirstName(emergencyContactFirstName);
				cout << "Enter a new Patient's emergency contact's last name." << endl;
				cin >> emergencyContactLastName;
				newPatient.setEmergContactLastName(emergencyContactLastName);
				cout << "Enter a new Patient's emergency phone (EXAMPLE: 515-931-5576)." << endl;
				cin >> emergencyPhone;
				cout << endl;
				switch (removePatient)
			case FIRSTPATIENT:
				for (int i = 0; i < firstpatient.size(); i++)
				{
				cout << i + 1 << ". " << firstpatient[i].getFirstName() << " " << firstpatient[i].getLastName() << endl;

				break;
				 // Temperary exit.
				cout << "Do you want to exit? (1 - yes or 2 - no)" << endl; 
				cin >> exit;
				} while (exit == 1);
				break;

			case VIEWPATIENT: // case view Patient.
				cout << endl;
				cout << "What Patient do you want to check: " << endl;
				cout << "1. First Patient  " << endl;
				cout << "2. Second Patient" << endl;
				cout << endl;
				cin >> viewPatient;
				cout << endl; // Space for the output.

				switch (viewPatient)
				{
				case FIRSTPATIENT:
					cout << "----------------------------------------------------------" << endl;
					if (!firstpatient.empty()) // If  patient' isn't empty print information for each patient.
					{
						for (int i = 0; i < firstpatient.size(); i++) // For loop to print the first patient's information.
						{
							cout << "First patient's information." << endl << endl;
							cout << "patient's name :" << " " << firstpatient[i].getFirstName() << " " << firstpatient[i].getLastName() << endl;
							cout << "Address: " << firstpatient[i].getAddress() << endl;
							cout << "Phone Number: " << firstpatient[i].getemergPhone() << endl;
							cout << "Emergancy Contact: " << firstpatient[i].getEmergContactFirstName() << " " << firstpatient[i].getEmergContactLastName() << endl;
							cout << "Emergancy Phone : " << firstpatient[i].getemergPhone() << endl;
							cout << "Date: " << firstpatient[i].getDate() << endl;
							cout << "Service received : Fillings, root canals, and extractions." << endl;
							cout << "Service cost :" << "-$" << firstpatient[i].getfilling() << endl;
							cout << "Service duratin :" << " " << duration << "hour/s" << endl << endl;
						}
					}
					else // If there are no  patient' in the vector print this.
					{
						cout << "There are currently no managers." << endl;
						cout << "----------------------------------------------------------" << endl;
					}
					break;
				case SECONDPATIENT:
					cout << "----------------------------------------------------------" << endl;
					if (!secondpatient.empty())
					{
						for (int i = 0; i < secondpatient.size(); i++) // For loop to print the second patient's information.
						{
							cout << "Second patient's information." << endl << endl;
							cout << "patient's name  " << secondpatient[i].getFirstName() << " " << secondpatient[i].getLastName() << endl;
							cout << "Address: " << secondpatient[i].getAddress() << endl;
							cout << "Phone : " << secondpatient[i].getPhone1() << endl;
							cout << "Emergancy Contact : " << secondpatient[i].getEmergContactFirstName() << " " << secondpatient[i].getEmergContactLastName() << endl;
							cout << "Emergancy Phone : " << secondpatient[i].getemergPhone() << endl;
							cout << "Date: " << secondpatient[i].getDate() << endl;
							cout << "Service received : Complete exams, x-rays, and dental cleanings." << endl;
							cout << "Service cost :" << secondpatient[i].getComplete_exams() << endl;
							cout << "Service duratin :" << " " << duration << "hour/s" << endl << endl;
						}
					}
					else
					{
						cout << "There are currently no Second patient." << endl;
						cout << "----------------------------------------------------------" << endl;
					}
				}
			case MAINMEWriteFile: // Case Write to file.
				cout << "Which information would like to save." << endl;
				cout << endl;
				ofstream file;
				file.open("Patient's iformation.txt");
				cout << "1. First Patient  " << endl;
				cout << "2. Second Patient" << endl;
				cin >> writeFile;
				cout << endl; // Space for the output.

				switch (writeFile)
				{
				case FIRSTPATIENT:
					cout << "----------------------------------------------------------" << endl;
					if (!firstpatient.empty())
					{
						for (int i = 0; i < firstpatient.size(); i++) // For loop to write First patient's information.
						{
							file << "First patient's information." << endl << endl;
							file << "patient's name :" << " " << firstpatient[i].getFirstName() << " " << firstpatient[i].getLastName() << endl;
							file << "Address: " << firstpatient[i].getAddress() << endl;
							file << "Phone Number: " << firstpatient[i].getemergPhone() << endl;
							file << "Emergancy Contact: " << firstpatient[i].getEmergContactFirstName() << " " << firstpatient[i].getEmergContactLastName() << endl;
							file << "Emergancy Phone : " << firstpatient[i].getemergPhone() << endl;
							file << "Date: " << firstpatient[i].getDate() << endl;
							file << "Service received : Fillings, root canals, and extractions." << endl;
							file << "Service cost :" << "-$" << firstpatient[i].getfilling() << endl;
							file << "Service duratin :" << " " << duration << "hour/s" << endl << endl;
							cout << "First patient's information was saved in a file (patient's information.txt)" << endl;
						}
					}
					else // If there are no patient in the vector print this.
					{
						cout << "There are currently no First patient." << endl;
						cout << "----------------------------------------------------------" << endl;
					}

					break;

				case SECONDPATIENT:
					cout << "----------------------------------------------------------" << endl;
					if (!secondpatient.empty())
					{
						for (int i = 0; i < secondpatient.size(); i++) // For loop to write the second patient information.
						{
							file << "Second patient's information." << endl << endl;
							file << "patient's name  " << secondpatient[i].getFirstName() << " " << secondpatient[i].getLastName() << endl;
							file << "Address: " << secondpatient[i].getAddress() << endl;
							file << "Phone : " << secondpatient[i].getPhone1() << endl;
							file << "Emergancy Contact : " << secondpatient[i].getEmergContactFirstName() << " " << secondpatient[i].getEmergContactLastName() << endl;
							file << "Emergancy Phone : " << secondpatient[i].getemergPhone() << endl;
							file << "Date: " << secondpatient[i].getDate() << endl;
							file << "Service received : Complete exams, x-rays, and dental cleanings." << endl;
							file << "Service cost :" << secondpatient[i].getComplete_exams() << endl;
							file << "Service duratin :" << " " << duration << "hour/s" << endl << endl;
							cout << "<<<---Second patient's information was saved to a file (patient's information.txt)--->> " << endl;
						}
					}
					else
					{
						cout << "There are currently no Second patient." << endl;
						cout << "----------------------------------------------------------" << endl;
					}

					break;
				}
			}
		} while (addPatient != MAINMENUQUIT); // user exit option.
	}
	else // If the username and password are nt correct.
	{
		cout << endl;
		cout << "The username or password is incorrect, please try again." << endl;
	}
	return 0;
}



