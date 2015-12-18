#include <iostream>
#include<cstring>
#include<string>

using namespace std;

class Pacient
{
    char * nume, *prenume, *adresa, *data;
    int varsta;
    int colesterol, tensiune;
public:
    Pacient()
    {
        varsta = 0;
        colesterol = 0;
        tensiune = 0;
        nume= new char[1];
        strcpy(nume,"\0");
        prenume = new char[1];
        strcpy(prenume,"\0");

    }
    friend istream & operator >>(istream &is, Pacient &p);
    friend ostream & operator <<(ostream &os, Pacient p);
    char* get_nume() {return nume;}
};

class Copil: public Pacient
{
protected:
    char *nume_mama, *nume_tata;
    int proteina_c;
    bool precedent;
public:
    Copil(): Pacient()
    {
        proteina_c = 0;
        precedent = false;
        nume_mama = new char[1];
        strcpy(nume_mama,"\0");
        nume_tata = new char[1];
        strcpy(nume_tata,"\0");
    }
    friend istream & operator >>(istream &is, Copil &p);
    friend ostream & operator <<(ostream &os, Copil p);
};

class Peste_40: public Pacient
{
    bool fumator;
    char *sedentarism;
    static int peste;
public:
    Peste_40():Pacient()
    {
        fumator = false;
        sedentarism = new char[1];
        strcpy(sedentarism,"\0");
    }
    friend istream & operator >>(istream &is, Peste_40 &p);
    friend ostream & operator <<(ostream &os, Peste_40 p);
};

istream & operator >> (istream &is, Pacient &p)
{
    char aux[100];
    cout<<" Dati numele pacientului: ";
    is.getline(aux,255);
    p.nume = new char[strlen(aux)+1];
    strcpy(p.nume,aux);

    cout<<"Dati prenumele pacientului: ";
    is.getline(aux,255);
    p.prenume = new char[strlen(aux)+1];
    strcpy(p.prenume, aux);

    cout << "Dati adresa pacientului: ";
    is.getline(aux, 255);
    p.adresa = new char[strlen(aux) + 1];
    strcpy(p.adresa, aux);

    cout << "Dati data analizelor:";
    is.getline(aux, 255);
    p.data = new char[strlen(aux) + 1];
    strcpy(p.data, aux);

    cout << "Dati varsta pacientului: ";
    is >> p.varsta;
    cout << "Dati valoarea colesterolului: ";
    is >> p.colesterol;
    cout << "Dati valoarea tensiunii: ";
    is >> p.tensiune;

    return is;
}















int main()
{

}
