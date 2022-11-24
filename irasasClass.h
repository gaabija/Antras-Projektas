#ifndef IRASASCLASS_H
#define IRASASCLASS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <numeric>
#include <fstream>
#include <chrono>
using namespace std;

class Studentas {
private:
    string vardas_, pavarde_;
    vector<int> pazymiai_;
    int egzas_;
    double galut_;
public:
    Studentas() : egzas_(0) {}; // default konstruktorius
    Studentas(ifstream& fd);
    string vardas() const { return vardas_;} // get'eriai, inline
    void setVardas(string &v) { vardas_ = v; }
    string pavarde() const { return pavarde_;}// get'eriai, inline
    void setPavarde(string &p) { pavarde_ = p; }
    auto pazymiai() const { return pazymiai_;}
    void setPazymiai(vector <int> &n) { pazymiai_ = n; }
    auto egzas() const { return egzas_;}
    void setEgzas(int &eg) { egzas_ = eg; }
    auto galut() const { return galut_;}
    void setGalut(double &g) { galut_ = g; }
    void Galutinis(char budasIsvesti);
    void readStudentas(ifstream&); // set'eriai
    double Vidurkis();
    double Mediana();
    
      
      
};

#endif
