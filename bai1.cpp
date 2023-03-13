#include <iostream>
using namespace std;
 class Employee{
    private :
    string Name;
    string IDnumber;
    string Department;
    string Position;
    public:
    Employee(string name, string idnumber, string department, string position){
        this  ->Name = name;
        this  ->IDnumber = idnumber;
        this  ->Department = department;
        this -> Position = position;

    }
     Employee (string name, string idnumber ){
        this ->Name = name;
        this ->IDnumber = idnumber;
        this -> Department = "";
        this -> Position = "";

    }
     Employee (){
        this ->Name = "";
        this ->IDnumber = "0";
        this -> Department = "";
        this -> Position = "";



    }
    
     string getName(){
        return this ->Name;
    }
    void setName(string name){
        this -> Name = name;
    }
    string getIDnumber(){
        return this ->IDnumber;

    }
    void setIDnumber(string idnumber){
        this ->  IDnumber = idnumber;
    }
    string getDepartment(){
        return this -> Department;
    }
    void setDespartment (string department){
        this ->Department = department;
    }
    string getPosition(){
        return this -> Position;
    }
    void setPosition (string position){
        this ->Position = position;
    }
     void display (){
    cout << this-> Name<< "-"<< this ->IDnumber<<"-"<< this -> Department<<"-"<<this ->Position <<endl;

    }
};
    
 int main (){
    Employee a("Susan Meyers ","47899", "Accounting ","Vice President");
    Employee b("Mark Jones ","39119", "IT ","Programmer");
    a.display();
    b.display();
    return 0;



 }