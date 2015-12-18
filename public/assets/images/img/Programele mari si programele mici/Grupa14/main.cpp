#include <iostream>
#include <cstring>

using namespace std;

class Documentatie{
   protected:
    char *titlu;
    int an;
public:
    Documentatie(char *titlu1, int an1)
    {
        titlu=new char[strlen(titlu1)+1];
        strcpy(titlu, titlu1);
        an=an1;
    }
    Documentatie(){
    titlu=new char[1];
        strcpy(titlu, "\0");
    an=2000;
    }
    void afisare(){cout<<titlu<<" "<<an;}
};

class Web : public Documentatie
{


    char *nume_proprietar;
    char *URL;
    int zi, luna;
public:
    Web(char *titlu1, char *nume_proprietar1, char *URL1, int zi1, int luna1, int an1):Documentatie(titlu1, an1)
    {
        nume_proprietar = new char[strlen(nume_proprietar1)+1];
        strcpy(nume_proprietar, nume_proprietar1);
        URL=new char [strlen(URL1)+1];
        strcpy(URL, URL1);
        zi=zi1;
        luna=luna1;
    }
    Web();
    friend ostream & operator<<(ostream &os, Web &x);
    friend istream & operator>>(istream &is, Web &x);
    friend struct Bibliografie;
};

Web :: Web ():Documentatie()
{
        nume_proprietar=new char[3];
        strcpy(nume_proprietar, "***");
        URL=new char[1];
        strcpy(URL, "\0");
        zi=1;
        luna=1;

}

istream & operator>>(istream &is, Web &x)
{
    char aux[100];
    cout<<"Titlu=";
    is>>aux;
    x.titlu=new char[strlen(aux)+1];
    strcpy(x.titlu, aux);
    cout<<"Nume proprietar=";
    is>>aux;
    x.nume_proprietar=new char[strlen(aux)+1];
    strcpy(x.nume_proprietar, aux);
    cout<<"URL=";
    is>>aux;
    x.URL=new char[strlen(aux)+1];
    strcpy(x.URL, aux);
    cout<<"Zi=";
    is>>x.zi;
    cout<<"Luna=";
    is>>x.luna;
    cout<<"An=";
    is>>x.an;
    return is;


}
ostream & operator<<(ostream &os, Web &x)
{
    os<<x.titlu<<" "<<x.nume_proprietar;
    os<<" "<<x.URL<<" "<<x.zi<<'.'<<x.luna<<'.'<<x.an;
    return os;
}

class Articol: public Documentatie
{
    char *nume;
    char *prenume;
    char *nume_revista;
    int nr_revista;
    int nrpagini;
    int *nr_pagini;
public:
    Articol(char *titlu1, int an1, char *nume1, char *prenume1, char *nume_revista1, int nr_revista1,int nrpagini1):Documentatie(titlu1, an1)
    {
        nume = new char[strlen(nume1)+1];
        strcpy(nume, nume1);
        prenume = new char[strlen(prenume1)+1];
        strcpy(prenume, prenume1);
        nume_revista = new char[strlen(nume_revista1)+1];
        strcpy(nume_revista, nume_revista1);
        nr_revista=nr_revista1;
        nrpagini=nrpagini1;
        nr_pagini=new int[nrpagini];
        for(int i=0; i<nrpagini;i++)
            nr_pagini[i]=i;
    }
    Articol();
    friend ostream & operator <<(ostream &os, Articol &x);
    friend istream & operator>>(istream &is, Articol &x);
        friend struct Bibliografie;

};

Articol :: Articol():Documentatie()
{
    nume=new char[1];
    strcpy(nume, "\0");
    prenume=new char[1];
    strcpy(prenume, "\0");
    nume_revista=new char[1];
    strcpy(nume_revista, "\0");
    nr_revista=-1;
    nrpagini=1;
    nr_pagini=new int[nrpagini];
        for(int i=0; i<nrpagini;i++)
            nr_pagini[i]=i;

}
ostream & operator <<(ostream &os, Articol &x)
{
    os<<x.titlu<<" "<<x.nume<<" "<<x.prenume<<" "<<x.nume_revista<<" "<<x.an<<" "<<x.nr_revista<<" Paginile:";
    for(int i=0;i<x.nrpagini;i++)
        os<<x.nr_pagini[i]<<" ";
    return os;
}
istream & operator>>(istream &is, Articol &x)
{
    char aux[100];
    cout<<"Titlu=";
    is>>aux;
    x.titlu=new char[strlen(aux)+1];
    strcpy(x.titlu, aux);
    cout<<"Nume =";
    is>>aux;
    x.nume=new char[strlen(aux)+1];
    strcpy(x.nume, aux);
    cout<<"Prenume =";
    is>>aux;
    x.prenume=new char[strlen(aux)+1];
    strcpy(x.prenume, aux);
    cout<<"Nume revista=";
    is>>aux;
    x.nume_revista=new char[strlen(aux)+1];
    strcpy(x.nume_revista, aux);
    cout<<"An=";
    is>>x.an;
    cout<<"Nr revista=";
    is>>x.nr_revista;
    cout<<"Numarul de pagini folosite ca bibliografie=";
    is>>x.nrpagini;
    x.nr_pagini=new int[x.nrpagini];
    cout<<"Inserati numarul paginilor pe care le-ai folosit in documentatie:";
    for(int i=0;i<x.nrpagini;i++)
        is>>x.nr_pagini[i];

    return is;


}

class Carte:public Documentatie
{
    char *nume;
    char *prenume;
    char *nume_editura;
    char *oras_editura;
    char *oras_publicare;
public:
    Carte(char *titlu1, int an1, char *nume1, char *prenume1, char *nume_editura1, char *oras_editura1, char *oras_publicare1):Documentatie(titlu1, an1)
    {
        nume = new char[strlen(nume1)+1];
        strcpy(nume, nume1);
        prenume = new char[strlen(prenume1)+1];
        strcpy(prenume, prenume1);
        nume_editura= new char[strlen(nume_editura1)+1];
        strcpy(nume_editura, nume_editura1);
        oras_editura= new char[strlen(oras_editura1)+1];
        strcpy(oras_editura, oras_editura1);
        oras_publicare= new char[strlen(oras_publicare1)+1];
        strcpy(oras_publicare, oras_publicare1);
    }
    Carte();
    friend ostream & operator <<(ostream &os, Carte &x);
    friend istream & operator>>(istream &is, Carte &x);
        friend struct Bibliografie;


};


Carte::Carte():Documentatie()
{
    nume=new char[1];
    strcpy(nume, "\0");
    prenume=new char[1];
    strcpy(prenume, "\0");
    nume_editura=new char[1];
    strcpy(nume_editura, "\0");
    oras_editura=new char[1];
    strcpy(oras_editura, "\0");
    oras_publicare=new char[1];

}
ostream & operator <<(ostream &os, Carte &x)
{
    cout<<x.titlu<<" "<<x.an<<" "<<x.nume<<" "<<x.prenume<<" "<<x.nume_editura<<" "<<x.oras_editura<<" "<<x.oras_publicare;
}

istream & operator>>(istream &is, Carte &x)
{
    {
    char aux[100];
    cout<<"Titlu=";
    is>>aux;
    x.titlu=new char[strlen(aux)+1];
    strcpy(x.titlu, aux);
    cout<<"Nume =";
    is>>aux;
    x.nume=new char[strlen(aux)+1];
    strcpy(x.nume, aux);
    cout<<"Prenume =";
    is>>aux;
    x.prenume=new char[strlen(aux)+1];
    strcpy(x.prenume, aux);
    cout<<"Nume editura=";
    is>>aux;
    x.nume_editura=new char[strlen(aux)+1];
    strcpy(x.nume_editura, aux);
    cout<<"Oras editura=";
    is>>aux;
    x.oras_editura=new char[strlen(aux)+1];
    strcpy(x.oras_editura, aux);
    cout<<"Oras publicare carte=";
    is>>aux;
    x.oras_publicare=new char[strlen(aux)+1];
    strcpy(x.oras_publicare, aux);
    cout<<"An=";
    is>>x.an;

    return is;


}
}

struct Bibliografie{
Carte c;
Web w;
Articol a;
char tip_obiect[10];
};
int main()
{
    /*Documentatie d("Documentatie 1", 1200);
    d.afisare();
    cout<<endl;
    //Web w("TITLU", "POPESCU", "HTTP",23, 2, 2014);
    //cout<<w<<endl;
    Articol a("TITLU",2003, "POPESCU", "GHEORGHE", "ATENEU",2,5);
    cout<<a<<endl;
    Carte c("TITLU CARTE", 2007," IONESCU", "ION", "LITERA", "BUCUERSTI", "BACAU");
    cout<<c<<endl;
    Web w1;
    cin>>w1;
    cout<<w1;
    Articol a1;
    cin>>a1;
    cout<<endl<<a1<<endl;
    Carte c1;
    cin>>c1;
    cout<<c1;*/
    int nr, i;
    cout<<"Numarul de referinte pe care vreti sa le cititi=";
    cin>>nr;
    Bibliografie b[nr];
    i=0;
    cout<<" 1. Citire referinta articol \n 2. Citire referinta web \n 3. Citire referinta carte \n 4.Afisare toate referintele citite \n 5.Iesire";

    int optiune =-1;
    while(optiune!=5)
    {
        cout<<"\nIntroduceti optiune";
        cin>>optiune;
        switch(optiune){
            case 1:{i++;
                    strcpy(b[i].tip_obiect, "articol");
                    cin>>b[i].a;
                    break;
                    }
            case 2:{i++;
                    strcpy(b[i].tip_obiect, "web");
                    cin>>b[i].w;
                    break;
                    }
            case 3:{i++;
                    strcpy(b[i].tip_obiect, "carte");
                    cin>>b[i].c;
                    break;
                    }
            case 4:{cout<<"\nWEB:";
                    for(int indice=1;indice<=nr;indice++)
                        {if(strcmp(b[indice].tip_obiect, "web")==0)
                                cout<<b[indice].w;
                        cout<<endl;}
                    cout<<"\nArticol:";
                    for(int indice=1;indice<=nr;indice++)
                        {if(strcmp(b[indice].tip_obiect, "articol")==0)
                                cout<<b[indice].a;
                        cout<<endl;}
                    cout<<"\nCarte:";
                    for(int indice=1;indice<=nr;indice++)
                        {if(strcmp(b[indice].tip_obiect, "carte")==0)
                                cout<<b[indice].c;
                        cout<<endl;}
                    break;
                    }
    }}


    return 0;
}
