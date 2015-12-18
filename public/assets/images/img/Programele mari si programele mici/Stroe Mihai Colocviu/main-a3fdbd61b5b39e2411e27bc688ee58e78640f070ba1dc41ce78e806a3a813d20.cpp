// STROE MIHAI GRUPA 231 - GNU CODE BLOCKS 12.11

#include <iostream>
#include<cstring>
#include<string>
using namespace std;

class Produs {
protected:
    char *nProd; //Numele produsului - capsuni
    char *uMasura; // Unitate masura - kg bucata ...
    int pret; //Pret per unitatea de masura -bucata, kg sau volum
public:
    Produs(char *nProd1,char *uMasura1,int pret1)
    {
        nProd = new char[strlen(nProd1)+1];
        strcpy(nProd,nProd1);
        uMasura = new char[strlen(uMasura1)+1];
        strcpy(uMasura,uMasura1);
        pret = pret1;
    }
    Produs();
   // void afisare () { cout<<nProd<<" "<<uMasura<<" "<<pret;}
};

Produs::Produs() {
nProd = new char[1];
strcpy(nProd,"\0");
uMasura = new char[1];
strcpy(uMasura,"\0");
pret = 1;
}

class Lot: public Produs {
    int zi;
    int luna;
    int an;
    int discount;
public:
    Lot (int zi1,int luna1,int an1,int discount1):Produs(nProd,uMasura,pret)
    {
        zi = zi1;
        luna = luna1;
        an = an1;
        discount = discount1;
    }
    Lot();
    friend ostream & operator << (ostream os, Lot &x);
    friend istream & operator >> (istream &is, Lot &x);
};

Lot::Lot():Produs()
{
    zi=1;
    luna =1;
    an = 2000;
    discount = 0;
}
istream & operator >> (istream &is, Lot &x)
{
    int val;
    cout<<"Va rugam sa introduceti data primirii lotului incepand cu :"<<endl;
    cout<<"\nAnul ";
    is>>val;
    x.an = val;
    cout<<"\nLuna ";
    is>>val;
    x.luna = val;
    cout<<"\nZiua ";
    is>>val;
    if (val<0 || val >31)
    while (val<0 || val >31)
    {
        cout<<"\nZiua ";
        is>>val;
    }
    x.zi = val;
    cout<<"\nDiscountul (daca nu are discount introduceti valoarea 0)";
    is>>val;
    return is;
}

ostream & operator << (ostream os, Lot &x)
{
    cout<<x.zi<<"."<<x.luna<<"."<<x.an<<" ";
    cout<<x.nProd<<" "<<x.uMasura<<" "<<x.pret;
    if (x.discount>0)
    cout<<" "<<x.discount<<" % reducere\n";
    return os;
}



int main()
{
    int nrProduse = 0;
    Produs p[100];
    int i = 0; //La inceput sunt 0
    int optiune = -1;
    char aux1[100],aux2[100];
    int pr = 0;
    cout<<"Optiunile dumneavoastra sunt : "<<endl;
    cout<<"1. Adaugare produs\n2. Afisare toate produsele \n3. Adaugare lot nou din produs\n";
    cout<<"4. Afisati toate loturile primite intre doua date\n";
    cout<<"5. Afisati toate loturile ce pot fi vandute\n";
    cout<<"6. Vindeti o anumita cantitate dintr un lot disponibil\n";
    cout<<"7. Iesire\n";

    while (optiune!=7)
    {
        cout<<"Introduceti optiunea   \n";
        cin>>optiune;
        switch(optiune)
        {
            case 1: {
                    i++;
                    cout<<"Introduceti: \n";
                    cout<<"numele produsului \n";
                    cin>>aux1;
                    cout<<"unitatea produsului \n";
                    cin>>aux2;
                    cout<<"pretul produsului \n";
                    cin>>pr;
                    Produs p1(aux1,aux2,pr);
                    p[i]= p1;
                    break;
            };
            case 2: {
                if (i == 0)
                    cout<<"Nu exista produse de afisat\n";
                    else
                for (int ind=1; ind<=i;ind++)
                    {
                     //cout<<p[ind].afisare();
                    }
                break;
            }

            case 3: {cout<<"Optiune indisponibila momentan.\n";break;}
            case 4: {cout<<"Optiune indisponibila momentan.\n";break;}
            case 5: {cout<<"Optiune indisponibila momentan.\n";break;}
            case 6: {cout<<"Optiune indisponibila momentan.\n";break;}
            case 7: {cout<<"O zi buna!\n"<<endl;
                break;}


    }
    }







    return 0;
}
