// C++ program to implement the program
// that illustrates Online shopping
#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

char c1, confirm_quantity;
float quantity;
int selectedNum;
float discounted_price;
double total_amount = 0 ;
int flag = 0;

// Stores items wit h their corresponding
// price
map<string, double> items = {
	{ "Samsung", 750 },
	{ "Redmi", 420 },
	{ "Apple", 989 },
	{ "Macbook", 2500 },
	{ "HP", 400 },
        { "Lenovo", 3500 },
	{ "Panasonic", 3500 },
	{ "SAMSUNG", 1000 },
	{ "Semens", 3000 },
	{ "Philips", 4000 },
	{ "HLG", 3500 },
        { "huawei", 350 },
        { "Sony", 150 },
        { "Xiaomi", 359 },
        { "oppo", 459 },
        { "Bkack Shark", 2290 },
        { "DELL", 800 },
        { "Hisense", 800 },
};

// Stores the selected items with
// their quantity
map<string, int> selected_items;

// Function to print the bill after shopping
// is completed prints the items, quantity,
// their cost along with total amount
void BlackFriday_Discount(){
 
  float discounted_price=(0.2*total_amount);
   cout << "With the Discount of 20% which is " << discounted_price << "$" << endl;
int final_amount = total_amount - discounted_price ;
cout << "Your final amount shall be after Discount"              << final_amount << "$"<< endl;
cout << "-----------------------"
		<< "-------------\n";
	cout << "*****THANK YOU && HAPPY"
		<< " ONLINE SHOPPING*****" << endl;
	cout	<<"For more Discounts and Quality items visit us in kamiha.store ";
}
// Function to ask the basic details of
void 	shopping_Basket(map<string, double> items,
			map<string, int> selected_items,
			float total_amount)
			
{   cout << "your order "<< endl;
	cout << "Item	 "
		<< "Quantity	 "
		<< "Cost\n";

	for (auto j = selected_items.begin();
		j != selected_items.end(); j++) {
		cout << j->first << "	 ";
		cout << j->second << "		 ";
		cout << (selected_items[j->first])
					* (items[j->first])
			<< endl;
	}
	cout << "-----------------------"
		<< "-------------\n";
	cout << "Total amount:			 "
		<< total_amount << endl;
	cout << "-----------------------"
		<< "-------------\n";

}

// any customer
void customerDetails()
{
     char name[20];
	cout<<"\n \t\t\t===========Online shop==============\n";
        cout<<"\n\t\t\tWELCOME TO Soft-Tech  \n";
        cout<<"\n \t\t\t=========================\n\n";
        cout<<"\n \t\t\t* * * * * * * * * * * * ";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);
	cout<<"Hello "<<name<<"\n\nIn which Departement you are interested!?\n\n";
}

// showMenu() is to print the
// menu to the user
void showMenu()
{
	cout << "Menu\n";
	cout << "= = = = = = = = "
		<< " = = = = = \n";
	cout << "1.Mobile-Departement\n2.laptop-Departement\n3"
		<< ".TV-Departement\n";
	cout << "= = = = = = = = "
		<< " = = = = = \n";
}

// Function to display the mobile products
void showMobileMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nItem	 Cost\n";
	cout << "1.Samsung $. 750/-\n";
	cout << "2.Redmi $.420/-\n";
	cout << "3.Apple $.989/-\n";
        cout << "4.huawei $.350 /-\n";
        cout << "5.Xiaomi $.359/-\n";
        cout << "6.oppo $.459/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

// Function to display Laptop products
void showLaptopMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nItem	 Cost\n";
	cout << "1.Macbook $.2500/-\n";
	cout << "2.HP	 $.400/-\n";
	cout << "3.Lenovo $.3500/-\n";
        cout << "4.Sony $.1500/-\n";
        cout << "5.BLack Shark $.2290/-\n";
        cout << "6.DELL $.800/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

// if the user selects computer couses,
// then courses list will be displayed
void showTV_Menu()
{
	cout << "- - - - - - - - - - "
		<< " - -\nItem	 Cost\n";
	cout << "1.Panasonic $. 3500/-\n";
	cout << "2.SAMSUNG $.1000/-\n";
	cout << "3.Semens $.3000/-\n";
	cout << "4.Philips $.4000/-\n";
        cout << "5.HLG $.3500/-\n";
        cout << "6.Hisense $.800/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

// Function to display the mobile category
void selectedMobile()
{
	cout << "Do you wish to conti"
		<< "nue?(for yes"  "press (Y/y ), "
		<< " if no press other letter ): ";
	cin >> c1;

	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3
			|| selectedNum == 4
			|| selectedNum == 5
			|| selectedNum == 6) {

			// Selected Samsung
			if (selectedNum == 1) {

				cout << "selected Samsung\n";
				do {
					cout << "Quantity: ";

					cin >> quantity;

					cout << "You have selected Samsung - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter): ";

					cin >> confirm_quantity;

				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["Samsung"];
					selected_items["Samsung"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}
			if (selectedNum == 2) {

				cout << "selected Redmi\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted Redmi - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["Redmi"];
					selected_items["Redmi"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}
			if (selectedNum == 3) {

				cout << "You have selected Apple\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selected"
						<< " Apple - "
						<< quantity
						<< endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y )"
						<< ", if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["Apple"];
					selected_items["Apple"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}
			if (selectedNum == 4) {

				cout << "selected huawei\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted huawei - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["huawei"];
					selected_items["huawei"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}
			if (selectedNum == 5) {

				cout << "selected Xiaomi\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted Xiaomi - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["Xiaomi"];
					selected_items["Xiaomi"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}
			if (selectedNum == 6) {

				cout << "selected oppo\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted oppo - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["oppo"];
					selected_items["oppo"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}

		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// If Laptop category is selected
void selectedLaptop()
{
	cout << "Do you wish to continue?"
		<< "(for yes press (Y/y ), "
		<< "if no press other letter): ";
	cin >> c1;
	if (c1 == 'Y' || c1 == 'y') {

		cout << "Enter respective number : ";
		cin >> selectedNum;

		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3
			|| selectedNum == 4
			|| selectedNum == 5
			|| selectedNum == 6) {

			// selected Macbook
			if (selectedNum == 1) {
				cout << "selected Macbook\n";
				do {

					cout << "Quantity: ";
					cin >> quantity;

					cout << "You have selected"
						<< " Macbook - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["Macbook"];
					selected_items["Macbook"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}

			// selected HP
			if (selectedNum == 2) {
				cout << "selected HP\n";
				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selected"
						<< " HP - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity
							!= 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["HP"];
					selected_items["HP"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}

			// selected Lenovo
			if (selectedNum == 3) {
				cout << "selected Lenovo\n";
				do {

					cout << "Quantity: ";
					cin >> quantity;

					cout << "You have selected"
							" Lenovo - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< "if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["Lenovo"];
					selected_items["Lenovo"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}
			if (selectedNum == 4) {

				cout << "selected Sony\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted Sony - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["Sony"];
					selected_items["Sony"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}
			if (selectedNum == 5) {

				cout << "selected BLack Shark\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted BLack Shark - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["BLack Shark"];
					selected_items["BLack Shark"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}
			if (selectedNum == 6) {

				cout << "selected DELL\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted DELL - "
						<< quantity << endl;
					cout << "Are you sure?(f"
						<< "or yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["DELL"];
					selected_items["DELL"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}

		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// If computer course
// category is selected
void selectedTV()
{
	cout << "Do you wish to continue?"
		<< "(for yes press (Y/y ), "
		<< " if no press other letter ): ";
	cin >> c1;
	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter the respective number: ";
		cin >> selectedNum;
		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3
			|| selectedNum == 4
			|| selectedNum == 5
			|| selectedNum == 6) {

			if (selectedNum == 1) {
				cout << "selected Panasonic"
					<< " Quality TV\n";
				total_amount += items["Panasonic"];
				selected_items["Panasonic"]++;
				cout << "amount = "
					<< total_amount
					<< endl;
			}

			if (selectedNum == 2) {
				cout << "selected SAMSUNG Quality TV\n";
				total_amount += items["SAMSUNG"];
				selected_items["SAMSUNG"]++;
				cout << "amount = " << total_amount << endl;
			}

			if (selectedNum == 3) {
				cout << "selected Semens Quality TV\n";
				total_amount += items["Semens"];
				selected_items["Semens"]++;
				cout << "amount = " << total_amount << endl;
			}
			if (selectedNum == 4) {
				cout << "selected Philips"
					<< " Quality TV\n";
				total_amount += items["Philips"];
				selected_items["Philips"]++;
				cout << "amount = "
					<< total_amount
					<< endl;
			}
			if (selectedNum == 5) {
				cout << "selected HLG"
					<< " Quality TV\n";
				total_amount += items["HLG"];
				selected_items["HLG"]++;
				cout << "amount = "
					<< total_amount
					<< endl;
			}
			if (selectedNum == 6) {
				cout << "selected Hisense"
					<< " Quality TV\n";
				total_amount += items["Hisense"];
				selected_items["Hisense"]++;
				cout << "amount = "
					<< total_amount
					<< endl;
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// Driver code
int main()
{
	// function call
	customerDetails();

	do {
		showMenu();
		cout << "Do you wish to continue?"
			<< "(for yes press (Y/y ), "
			<< " if no press other letter ): ";
		char c;
		cin >> c;
		if (c == 'Y' || c == 'y') {
			cout << "Enter respective number: ";
			int num;
			cin >> num;
			if (num == 1 || num == 2
				|| num == 3) {
				switch (num) {
				case 1:

					// For Mobile
					showMobileMenu();
					selectedMobile();
					break;

				case 2:

					// For Laptop
					showLaptopMenu();
					selectedLaptop();
					break;

				case 3:

					// For computer course
					showTV_Menu();
					selectedTV();
					break;
				}
			}
			else {
				flag = 1;
			}
		}
		else {
			flag = 1;
		}

	} while (flag == 0);


	// print bill
	shopping_Basket(items, selected_items,
			total_amount);
			
	BlackFriday_Discount();		

}
