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
    string vardas() const { return vardas_;} // get'eriai
    string pavarde() const { return pavarde_;}
    auto pazymiai() const { return pazymiai_;}
    auto egzas() const { return egzas_;}
    auto galut() const { return galut_;}
      
    void setVardas(string &v) { vardas_ = v; }
    void setPavarde(string &p) { pavarde_ = p; }
    void setPazymiai(vector <int> &n) { pazymiai_ = n; }
    void setEgzas(int &eg) { egzas_ = eg; }
    void setGalut(double &g) { galut_ = g; }
      
    void Galutinis(char budasIsvesti);
    double Vidurkis();
    double Mediana();
    
    ~Studentas() {pazymiai_.clear();}; //destruktorius

    Studentas(const Studentas &laikinas) // copy konstruktorius
   {
        vardas_ = laikinas.vardas_;
        pavarde_ = laikinas.pavarde_;
        pazymiai_ = laikinas.pazymiai_;
        egzas_ = laikinas.egzas_;
    }

    // copy assignment konstruktorius
    Studentas & operator = (const Studentas &laikinas){
        if (&laikinas == this) return *this;
      vardas_ = laikinas.vardas_;
        pavarde_ = laikinas.pavarde_;
        pazymiai_ = laikinas.pazymiai_;
        egzas_ = laikinas.egzas_;
        return *this;
    }
      
};

#endif
