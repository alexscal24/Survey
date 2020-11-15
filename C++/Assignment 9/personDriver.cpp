#include <string>
#include "person.h"

int main(){
    int numOfRecords, ID, publications;
    string name, rank, major, minor, type;
    int x = 1;

    professor pr[10];
    student st[10];

    professor a;
    professor *p = &a;
    p = NULL;

    cin >> numOfRecords;
    while(x <= numOfRecords){
        cin >> type;
        if(type =="p"){
            cin >> name >> publications >> rank;
            pr[x].setName(name);
            pr[x].setPublications(publications);
            pr[x].setRank(rank);
            pr[x].setID(x);
            x++;
        }else if(type == "s"){
            cin >> name >> major >> minor;
            st[x].setName(name);
            st[x].setMajor(major);
            st[x].setMinor(minor);
            st[x].setID(x);
            x++;
        }
    }
    
    for(int i = 1; i < 2; i++){
        pr[i].getData();
    }

    for(int j = 2; j < x; j++){
        st[j].getData();
    }
    return 0;
    
}