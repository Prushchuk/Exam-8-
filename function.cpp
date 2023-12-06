#include "function.h"
void add_tovar(Sklad sklads[], int& sklads_count) {
	if (sklads_count >= 500) {
		cout << "Error!";
		return;
	}

	cout << "Name: ";
	cin >> sklads[sklads_count].name;
	cout << "Creator: ";
	cin >> sklads[sklads_count].creator;
	cout << "Price: ";
	cin >> sklads[sklads_count].price;
	cout << "Name_tovar: ";
	cin >> sklads[sklads_count].name_tovar;
	cout << "Data_sklad: ";
	cin >> sklads[sklads_count].data_sklad;
	cout << "Termin: ";
	cin >> sklads[sklads_count].termin;
};


void delete_tovar(Sklad sklads[], int& sklads_count, int index) {
	if (index < 0 || index >= sklads_count) {
		cout << "Error!";
		return;
	}

	for (int i = index; i < sklads_count - 1; i++)
	{
		sklads[i] = sklads[i + 1];
	}
	
	sklads_count--;
};

void zamina_tovar(Sklad sklads[], int& sklads_count, int index) {
	if (index < 0 || index >= sklads_count) {
		cout << "Error!";
		return;
	}

	cout << "Name: ";
	cin >> sklads[index].name;
	cout << "Creator: ";
	cin >> sklads[index].creator;
	cout << "Price: ";
	cin >> sklads[index].price;
	cout << "Name_tovar: ";
	cin >> sklads[index].name_tovar;
	cout << "Data_sklad: ";
	cin >> sklads[index].data_sklad;
	cout << "Termin: ";
	cin >> sklads[index].termin;
};
void search_tovar(Sklad sklads[], int& sklads_count, int index) {
	int choice;
	cout << "Choose search parameter:\n";
	cout << "1. Name\n";
	cout << "2. Creator\n";
	cout << "3. Price\n";
	cout << "4. Name_tovar\n";
	cout << "5. Data_sklad\n";
	cout << "6. Termin\n";
	cin >> choice;

	switch (choice) {
	case 1: {
		char search_name[50];
		cout << "Enter name: ";
		cin >> search_name;
		for (int i = 0; i < sklads_count; i++)
		{
			if (strcmp(sklads[i].name, search_name) == 0) {
				cout << "Found at index: " << i << endl;
			}
			else {
				cout << "Not founded";
			}
		}
		break;
	}
	case 2: {
		char creator[50];
		cout << "Enter creator: ";
		cin >> creator;
		for (int i = 0; i < sklads_count; i++)
		{
			if (strcmp(sklads[i].creator, creator) == 0) {
				cout << "Found at index: " << i << endl;
			}
			else {
				cout << "Not founded";
			}
		}
		break;
	}
	case 3: {
		int search_price;
		cout << "Enter price: ";
		cin >> search_price;
		for (int i = 0; i < sklads_count; i++) {
			if (sklads[i].price == search_price) {
				cout << "Found at index: " << i << endl;
			}
		}
		break;
	}
	case 4: {
		char creator[50];
		cout << "Enter creator: ";
		cin >> creator;
		for (int i = 0; i < sklads_count; i++)
		{
			if (strcmp(sklads[i].creator, creator) == 0) {
				cout << "Found at index: " << i << endl;
			}
			else {
				cout << "Not founded";
			}
		}
		break;
	}
	case 5: {
		char creator[50];
		cout << "Enter creator: ";
		cin >> creator;
		for (int i = 0; i < sklads_count; i++)
		{
			if (strcmp(sklads[i].creator, creator) == 0) {
				cout << "Found at index: " << i << endl;
			}
			else {
				cout << "Not founded";
			}
		}
		break;
	}
	case 6: {
		char creator[50];
		cout << "Enter creator: ";
		cin >> creator;
		for (int i = 0; i < sklads_count; i++)
		{
			if (strcmp(sklads[i].creator, creator) == 0) {
				cout << "Found at index: " << i << endl;
			}
			else {
				cout << "Not founded";
			}
		}
		break;
	}
	}
};

void sortByTovar(Sklad sklads[], int& sklads_count) {
	for (int i = 0; i < sklads_count - 1; i++) {
		for (int j = 0; j < sklads_count - i - 1; j++) {
			if (strcmp(sklads[j].name_tovar, sklads[j + 1].name_tovar) > 0) {
				Sklad temp = sklads[j];
				sklads[j] = sklads[j + 1];
				sklads[j + 1] = temp;
			}
		}
	}
};