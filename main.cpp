//Avleen Gill - COMSC210 Lab 19
//movie review nodes using classes

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

struct Node{
        float rating;
        string comment;
        Node * next;
};

class Movie {
    string title;
    Node * head;

    //setters and getters, getters needed to access private info
    public:
    string getTitle() const     { return title; }
    void setTitle(string t)     { title = t; }
};

//functions
void output(Node *, float t, int ct);
void addfront(Node* &, float r, string c);

int main() {
    srand(time(0));
    ifstream fin ("moviecomments.txt");
    string c;


    if (fin.good()) {
        while (getline(fin, c)){
            fin.ignore();
            Movie temp;
            temp
        }
    }
}
