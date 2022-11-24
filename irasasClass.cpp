#include "irasasClass.h"

Studentas::Studentas(ifstream& fd)
{
    readStudentas(fd);
}

void Studentas::readStudentas(ifstream &fd) {
    fd >> this->vardas_ >> this->pavarde_;
    this->pazymiai_.reserve(10);
  int pazymys;
    while (fd >> pazymys) {
      this->pazymiai_.push_back(pazymys);
    }
    this-> egzas_ = this->pazymiai_.back();
    this->pazymiai_.pop_back();
  }

void Studentas::Galutinis(char budasIsvesti) {
  double galutinis;
  if (budasIsvesti == 'm') {
       galutinis = Mediana( ) * 0.4 +
        this-> egzas_ * 0.6;
  } else if (budasIsvesti == 'v') {
      galutinis = Vidurkis( ) * 0.4 +
        this-> egzas_ * 0.6;
  }
  setGalut(galutinis);
}

double Studentas::Vidurkis() {
  double vidurkis =
    accumulate(this->pazymiai_.begin(), this->pazymiai_.end(), 0.0) / this->pazymiai_.size();
  return vidurkis;
}
double Studentas::Mediana() {
  double mediana;
  sort(this->pazymiai_.begin(), this->pazymiai_.end());
  int vidurinisElementas = this->pazymiai_.size() / 2;
  if (this->pazymiai_.size() / 2 == 0) {
    mediana = (this->pazymiai_[vidurinisElementas - 1] + this->pazymiai_[vidurinisElementas]) / 2.;
  } else {
    mediana = this->pazymiai_[vidurinisElementas];
  }
  return mediana;
}



