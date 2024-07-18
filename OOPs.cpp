#include<bits/stdc++.h>
#include<string>
using namespace std;
/*Structure*/
struct person{
    string name;
    int age;
    char gender;
};


/*Class*/
class School{
    public:
     string name;
     int strength;
     int rank;
     void greeting(){
        cout<<"Army Public School IS BEST ;>"<<endl;
    }
};

int main(){
    person p1;
    p1.name="Sahil sahu";
    p1.age=19;
    p1.gender='M';

    person p2;
    p2.name="Sandhya Sahu";
    p2.gender='F';
    p2.age=41;
    cout<<p1.name<<endl<<p1.age<<endl<<p1.gender<<endl;
    cout<<p2.name<<endl;

    School s1;
    s1.name="KV";
    s1.strength=500;
    s1.rank=100;
    cout<<s1.name<<endl;

    runprogram();
}