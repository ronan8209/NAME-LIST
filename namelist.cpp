#include <iostream>
#include <vector>
using namespace std;
class namelist {
public:
	vector<string> names;
	string aname, rname;
	void add() {
		string aname;
		//add a name
		cout << "enter name: ";
		cin >> aname;
		names.push_back(aname);
	}
	void view() {
		if (names.empty()) {
			//add name first
			cout << "nothing to view"<<endl;
		}
		else {
			for (auto a : names) {
				//name viewed
				cout << "name: " << a << endl;
			}
		}
	}
	void removed() {
		//add name first
		if (names.empty()) {
			cout << "nothing to remove"<<endl;
		}
		else {
			//name to remove
			cout << "enter name to remove: ";
			cin >> rname;
		}
		auto rem = remove(names.begin(), names.end(), rname);
		if (rem != names.end()) {
			//name removed
			names.erase(rem, names.end());
			cout <<rname<< " remove success"<<endl;
		}		
	}
};
int main() {
	cout << "NAME LIST" << endl;
	int choice;
	namelist list;
	do {
		cout << "1.add" << endl;
		cout << "2.view" << endl;
		cout << "3.remove" << endl;
		cout << "4.exit" << endl;
		cout << "enter: " << endl;
		//enter number 1-3 to start
		cin >> choice;
		if (choice == 1) {
			//add
			list.add();
		}
		else if (choice == 2) {
			//view
			list.view();
		}
		else if (choice == 3) {
			//remove
			list.removed();
		}
	} while (choice != 4 );
	cout << "exiting";
	return 0;
}