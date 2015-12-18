#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
/*
#define SIZE 100
class stack {
    //daca nu au trecut nici un parametru, atunci sunt private
    int stc[SIZE];
    int tos; //var membru
public:
    void init();//functii membru
    void push(int i);
    int pop();

};


int f()
{
    int i ;
    i=10;
    int j;
    j= 2 * i;
    return j;

}
void stack::init()
{
    tos = 0;

}
int stack::pop()
{
    if (tos==0)
    {

        cout<<"Stack underflow"<<endl;return 0;
    }
    tos--;
    return stc[tos];
}
void stack::push(int i)
{
    if (tos == SIZE)
    {
        cout<<"Stack full"<<endl;
        return;
    }
    stc[tos] = i;
    tos++;
}

int main()
{
   stack stack1, stack2;
   stack1.init();
   stack2.init();
   stack1.push(1);
   stack1.push(2);
   stack1.push(3);
   stack2.push(4);
   cout<<stack1.pop()<<" ";
   cout<<stack1.pop()<<" ";
   cout<<stack1.pop()<<" ";
   cout<<stack2.pop()<<" ";
    //stack1.tos = 1; este private in clasa stack

    return 0;
}*/
/*
int abs(int i);
double abs(double d);
long abs(long l);

int main()
{
    cout<<abs(-10)<<endl;
    cout<<abs(-11.0)<<endl;
    cout<<abs(-9l)<<endl;

}

int abs(int i)
{
    cout<<"Using int abs\n";
    return i<0 ? -i : i;
}
double abs (double d)
{
    cout<<"Using double abs\n";
    return d<0.0 ? -d : d;
}

long abs(long l)
{
    cout<<"Using long abs\n";
    return l<0 ? -l : l;
}
*/
/*
class building
{
    int rooms;
    int floors;
    int area;
public:
    void set_rooms(int num);
    int get_rooms();
    void set_floors(int num);
    int get_floors();
    void set_area(int num);
    int get_area();
};

class house: public building
{
    int bedrooms;
    int baths;
public:
    void set_bedrooms(int num);
    int get_bedrooms();
    void set_baths(int num);
    int get_baths();
};

class school:public building {
    int classrooms;
    int offices;
public:
    void set_classroms(int num);
    int get_classrooms();
    void set_offices(int num);
    int get_offices();
};

void building::set_rooms(int num)
{
    rooms = num;
}
void building::set_floors(int num)
{
    floors= num;
}
void building::set_area(int num)
{
    area = num;
}
int building::get_area()
{
    return area;
}
int building::get_floors()
{
    return floors;
}
int building::get_rooms()
{
    return rooms;
}
void house::set_bedrooms(int num)
{
    bedrooms = num;
}
void house::set_baths(int num)
{
    baths = num;
}
int house::get_bedrooms()
{
    return bedrooms;
}
int house::get_baths()
{
    return baths;
}
void school::set_classroms(int num)
{
    classrooms=num;
}
void school::set_offices(int num)
{
    offices= num;
}
int school::get_classrooms()
{
    return classrooms;
}
int school::get_offices()
{
    return offices;
}


int main()
{
    house h;
    school s;
    h.set_rooms(12);
    h.set_floors(3);
    h.set_area(4500);
    h.set_bedrooms(5);
    h.set_baths(3);
    cout<<"house has "<<h.get_bedrooms();
    cout<<" bedrooms"<<endl;

    s.set_rooms(200);
    s.set_classroms(180);
    s.set_offices(5);
    s.set_area(25000);
    cout<<"school has "<<s.get_classrooms();
    cout<<" classrooms"<<endl;
    cout<<"It s area it s fucking "<<s.get_area();


    return 0;
}
*/
/*
#define SIZE 100
class stack {
    int stc[SIZE];
    int tos;
public:
    stack();
    ~stack();
    void push(int i);
    int pop();


};
stack::stack()
{
    tos = 0;
    cout<<"Stack init\n";

}
stack::~stack()
{
    cout<<"stack busit\n";
}
int stack::pop()
{
    if (tos==0)
    {

        cout<<"Stack underflow"<<endl;return 0;
    }
    tos--;
    return stc[tos];
}
void stack::push(int i)
{
    if (tos == SIZE)
    {
        cout<<"Stack full"<<endl;
        return;
    }
    stc[tos] = i;
    tos++;
}
int main()
{

    stack a,b;
    a.push(1);
    a.push(2);
    a.push(3);
    b.push(4);
    cout<<a.pop()<<" ";
    cout<<a.pop()<<" ";
    cout<<a.pop()<<" ";
    cout<<b.pop()<<"\n";
}
*/
/*


class myclass{
    int a,b;
public:
    friend int sum (myclass x);
    void set_ab(int i, int j);
};

void myclass::set_ab(int i,int j)
{
    a = i;
    b = j;
}
int sum (myclass x)
{
    return x.a +x.b;

}
int main()
{
    myclass n;
    n.set_ab(3,4);
    cout<<sum(n);
    return 0;

}
*/
/*
const int IDLE = 0;
const int INUSE = 1;
class C2; //forward decl

class C1 {
    int status ; //idle cand e off sau inuse cand e
public:
    void set_status(int state);
     int idle(C2 b);

};

class C2 {
int status;
public:
    void set_status (int state);
    friend int C1::idle (C2 b);
};

void C1::set_status(int state)
{
    status = state;
}
void C2::set_status(int state)
{
    status = state;
}
int idle (C2 b)
{
    if (this->status || b.status)
    return 0;
    else return 1;

}

int main()
{
    C1 x;
    C2 y;
    x.set_status(IDLE);
    y.set_status(IDLE);
    if (x.idle(y))
    cout<<"Can be used "<<endl;
    else
        cout<<"In use"<<endl;

    x.set_status(INUSE);
    if (x.idle(y))
        cout<<"Can be used"<<endl;
    else
        cout<<"In use"<<endl;
    return 0;
}*/
/*
class twovalues {
int a;
int b;
public:
    twovalues(int i, int j){ a= i;b= j;}
    friend class Min;
};

class Min{
public:
    int min(twovalues x);

};
int Min::min (twovalues x)
{
    return x.a < x.b ? x.a : x.b;
}

int main()
{
    twovalues ob (10,20);
    Min m;
    cout<<m.min(ob);
    return 0;

}*/
/*
 inline int max (int a,int b)
{
    return a>b ? a : b;
}

int main()
{
    cout<<max(10,20);
    cout<<" " <<max (99,88);
    return 0;
}*/
/*
class myclass {
    int a,b;
public:
    void init(int i,int j);
    void show();
};

void myclass::init(int i,int j)
{
    a = i;
    b = j;
}
inline void myclass::show()
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    myclass x;
    x.init(10,20);
    x.show();
    return 0;
}
*/
/*
class myclass {
    int a,b;
public:
    myclass (int i, int j) {a=i; b=j;}
    void show(){ cout<<a<<" "<<b;}
};

int main()
{
    myclass ob(3,5);
    ob.show();
    return 0;
}
*/
/*
class x{
int a;
public:
    x (int j) {a = j;}
    int geta() {return a;}
};

int main()
{
    x ob = 99;
    cout<<ob.geta();
    return 0;
}
*/
/*
class shared {
    static int a;
    int b;
public:
    void set(int i,int j) { a = i; b = j;}
    void show();
};

int shared::a;
void shared::show()
{
    cout<<" this is static a: "<<a;
    cout<<" \n this is non static b: "<<b<<endl;
}

int main()
{
    shared x,y;
    x.set(1,1);
    x.show();
    y.set(2,2);
    y.show();
    x.show();
    return 0;
}
*/
/*
class static_type{
    static int i;
public:
    static void init(int x) { i =x;}
    void show() {cout<<i;}
};

int static_type::i;

int main ()
{
    static_type::init(100);
    static_type x;
    x.show();
    return 0;

}*/
/*
class myclass {
int who;
public:
    myclass(int id);
    ~myclass();


} glob_ob1(1),glob_ob2(2);

myclass::myclass(int id)
{
    cout<<"init "<<id<<endl;
    who = id;
}

myclass::~myclass()
{
    cout<<" destr "<<who << endl;
}
int main()
{
    myclass local_ob1(3);
    cout<<"This will not be the first line displayd"<<endl;
    myclass local_ob2(4);
    return 0;
}*/
/*
int myf (int i);
int myf(int i,int j);

int main()
{
    cout<<myf(10)<<endl;
    cout<<myf(4,5);
    return 0;
}
int myf(int i,int j)
{
    return i*j;
}
int myf(int i)
{
    return i;
}
*/
/*
void clrscr(int size=25);

int main()
{
    register int i;
    for (i = 0;i<30;i++)
        cout<<i<<endl;
    cin.get();
    clrscr();
    for (i=0;i<30;i++)
        cout<<i<<endl;
        cin.get();
    clrscr(10);
    return 0;
}

void clrscr(int size)
{
    for (;size;size--) cout<<endl;
}

*/
/*
class loc {
    int longitude, latitude;
public:
    loc() {}
    loc(int lg, int lt)
    {
    longitude = lg;
    latitude = lt;
    }

    void show()
    {
        cout<<longitude<<" ";
        cout<<latitude<<endl;
    }
    loc operator+=(loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    loc operator++();

};

loc loc::operator+=(loc op2)
{

    longitude = op2.longitude + longitude;
    latitude = op2.latitude + latitude;
    return *this;
}

loc loc::operator-(loc op2)
{
    loc temp;
    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;
    return temp;
}

loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this;
}

loc loc::operator++()
{
    longitude++;
    latitude++;
    return *this;
}


int main()
{
    loc ob1(10,20), ob2(5,30),ob3(90,90);
    ob1.show();
    ob2.show();
    ++ob1;
    ob1.show();

    ob2 +=ob1;
    ob2.show();



    return 0;
}
*/
/*
class loc {
    int longitude, latitude;
public:
    loc() {}
    loc (int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout<<longitude<<" ";
        cout<<latitude<<endl;
    }
    friend loc operator+(loc op1, loc op2);
    friend loc operator++(loc &op,int x);
    friend loc operator--(loc &op,int x);
};
loc operator+(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}
loc operator++(loc &op,int x)
{
    op.longitude++;
    op.latitude++;
    return op;
}
loc operator--(loc &op,int x)
{
    op.longitude--;
    op.latitude--;
    return op;
}


int main()
{
    loc ob1(10,20), ob2(5,30);
    ob1 = ob1 + ob2;
    ob1.show();
    ob1++;
    ob1.show();
    ob1--;
    ob1.show();
    return 0;
}
*/
/*
class novir {
    int a;
public:
    void x() const {}
    int i() const {return 1;}
};

class onevir {
    int a;
public:
    virtual void x() const{}
    int i() const { return 1;}
};
class twovir {
    int a;
public:
    virtual void x() const{}
    virtual int i() const { return 1;}
};

int main()
{
    cout<<"int: "<<sizeof(int)<<endl;
    cout<<"novir: "<<sizeof(novir)<<endl;
    cout<<"void*: "<<sizeof(void*)<<endl;
    cout<<"onevir: "<<sizeof(onevir)<<endl;
    cout<<"twovir: "<<sizeof(twovir)<<endl;
}
*/




















