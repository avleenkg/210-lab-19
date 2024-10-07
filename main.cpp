//Avleen Gill - COMSC210 Lab 19
//movie review nodes using classes

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
using namespace std;

const int n = 1;

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

    void output() const {
        if (!head){
            cout << "No reviews available for " << title << endl;
            exit(0);
        }
        else {
            int count = 1;
            Node * current = head; //current and head now point at same thing, the first node
            cout << "Reviews for " << title << endl;
            while (current) {
                cout << "\t> [ Review #" << count++ << " ] " << fixed << setprecision(n) << current->rating << ": " << current->comment << endl;
                current = current->next; //current points to next node now
            }
        }
        cout << endl;
    }
    void addfront(float r, string c) {
        Node *newVal = new Node;
        if (!head) {
            head = newVal;
            newVal->next = nullptr;
            newVal->rating = r;
            newVal->comment = c;
        }
        else {
            newVal->next = head;
            newVal->rating = r;
            newVal->comment = c;
            head = newVal;
        }
    }
};

//functions

int main() {
    vector<Movie> movies;
    srand(time(0));
    ifstream fin ("moviecomments.txt");
    string t, c;


    if (fin.good()) {

        while (getline(fin, t)){
            Movie temp;
            temp.setTitle(t);

            for (int i = 0; i < 3; i++){
                getline(fin, c);
                float r = (rand() % 41) / 10.0 + 1.0;
                temp.addfront(r, c);
            }
            temp.output();
            cout << endl;
        }
    }
    else {
        cout << "Error. File not found.\n";
    }
}
