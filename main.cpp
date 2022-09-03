#include  <iostream>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          <fstream>
#include  <fstream>

using namespace std;

bool isLoggedin(){
    
    string user_username, user_password, username, password;

    cout << "Enter username :";
    cin >> user_username;

    cout << "Enter password :";
    cin >> user_password;

    ifstream read("data\\" + username + ".txt");
    getline(read, username); //for reading the user name is that user valid
    getline(read, password); //reading the password correct or not

    if (user_username == username && user_password == password){
        return true;
    }else{
        return false;
    }
}

bool isRegistered(){
    ofstream file;

    string username, password;

    cout << "select a username :";
    cin >> username;
    cout << "select a password :";
    cin >> password;

    file.open("data\\" + username + ".txt");

    //rewrite in the file
    file<<"username :"<<username<<endl<<"password :"<<password; //the data is registered into our file
    file.close();

    return true;
       

}


int main() {

    int choice;
    ofstream Open("text.txt");
    Open << "testing all in one";
    Open.close();

    cout << "1 : Register \n2 : Login\nYour choice :";
    cin >> choice;

    if (choice == 1) {
        bool regstat = isRegistered();
        if (regstat){
            cout << "You have registered successfully." << endl;
            main();
        }
    }
    if (choice == 2) {
        bool login = isLoggedin();
        if (login){
            cout << "You have logged in successfully." << endl;
        }else{
            cout << "login unsuccessfully." << endl;
        }
    }



    return 0;
}