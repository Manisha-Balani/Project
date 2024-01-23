#include<iostream>
#include<fstream>
using namespace std;

class User {
private:
    string first_name;
    string last_name;
    string mail_id;
    string password;
    long long int mobile_no;

public:
    User(string fs,string ls,string mail,string pass,long long int mob){
		first_name = fs;
		last_name = ls;
		mail_id  = mail;
		password = pass;
		mobile_no = mob;
	}

    string get_username()const{
        return first_name + "." + last_name;
    }

    long long int get_mobile()const{
        return mobile_no;
    }

    void write_to_file()const{
        ofstream file("user_info1.txt", ios::app);

        if (file.is_open()) {
            file << get_username() << " " << get_mobile() << endl;
            file.close();
        }
        else {
            cout << "Unable to open file for writing" << endl;
        }
    }
};

int read_from_file(const string &name){
        ifstream file("user_info1.txt");
	string u_sername;
        if (file.is_open()) {
            //string u_sername;
            while(file >> u_sername){
		    if(name == u_sername){
			    file.close();
			    return 1;
		    }
	    }
            file.close();
        }
        else {
            cout << "Unable to open file for reading" << endl;
        }
        return 0;
    }
    

int main(){
    int ch;
    cout << "----------------------------------" << endl;
    cout << " Enter your choice " << endl;
    cout << " 1 Registration \n 2 Login " << endl;
    cout << "----------------------------------" << endl;
    while(1){
	    cin >> ch;
    if(ch == 1){
        string fs,ls,mail,pass,conf_pass,pass_word;
        long long int mob;
        cout << "First Name : ";
        cin >> fs;
        cout << "Last Name : ";
        cin >> ls;
        cout << "Mail_ID : ";
        cin >> mail;
        cout << "Password : ";
        cin >> pass;
        cout << "Confirm Password : ";
        cin >> conf_pass;
        if(pass == conf_pass){
            pass_word = pass;
        }
        else{
            cout << "Password Not Matched" << endl;
	    cout << "----------------------------------" << endl;
	    break;
        }
        cout << "Mobile No. : ";
        cin >> mob;
        User u(fs,ls,mail,pass_word,mob);
        u.write_to_file();
        cout << u.get_username() << " Registration Successfully " << endl;
	cout << "-------------------------------------------------" << endl;
    }
    else if(ch == 2){
        string us;
	int rus;
        cout << " Enter the login credentials " << endl;
        cout << "Username : ";
        cin >> us;
        rus = read_from_file(us);
        if(rus){
            cout << us << " login successfully " << endl;
        }
        else{
            cout << " Invalid Credentials " << endl;
        }
    }
    else{
	    cout << "!!!Invalid Input!!!" << endl;
	    break;
    }
    cout << "-------------------------------------------------" << endl;
    }
    return 0;
}
