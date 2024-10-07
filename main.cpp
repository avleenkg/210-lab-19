//Avleen Gill - COMSC210 Lab 19
//movie review nodes using classes

#include <iostream>
#include <cstdlib>
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
};