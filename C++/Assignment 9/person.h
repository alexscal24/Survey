#include <iostream>
#include <string>

using namespace std;

class person {

public:
    void setName(string n){
        name = n;
    }

    string getName(){
        return name;
    }
    
    void setID(int i){
        id = i;
    }

    int getID(){
        return id;
    }

    void getData() {
        std::cout << name << ", " << id << endl;
    }
private:
    string name;
    int id;
};

class professor : public person {
public:
    void setPublications(int p){
        publications = p;
    }

    void setRank(string r){
        if(rank == "professor"){
            rank = r;
        }else{
            rank = "assistant professor";
        }
    }

    void getData(){
        std::cout << rank << " " << getName() << " (id " << getID() << ") has " << publications << " publications\n";
    }

private:
    int publications;
    string rank;
};

class student : public person {
public:
    void setMajor(string m){
        major = m;
    }

    string getMajor(){
        return major;
    }

    void setMinor(string mi){
        if(mi == "none"){
            minor = "";
        }else{
            minor = mi;
        }
    }

    string getMinor(){
        return minor;
    }

    void getData(){
        if(minor == ""){
            std::cout << major << " major " << getName() << " (id " << getID() << ")\n";
        }else{
            std::cout << major << " major " << getName() << " (id " << getID() << ") " << "minors in " << minor << "\n";
        }
        
    }

private:
    string major;
    string minor;
};