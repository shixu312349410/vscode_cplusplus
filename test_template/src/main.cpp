#include<bits/stdc++.h>
using namespace std;

class Number
{
private:
    /* data */
    int number;
public:
    Number(int number){
        this->number = number;
        cout<<"constructor 1"<<endl;


    }

    Number(Number const &number){
        cout<<"copy constructor"<<endl;
    }

    ~Number(){
        cout<<"destructor"<<endl;
    }

    Number add1(const Number& n){
        number+= n.number;
        return *this;
    }
};

int main(){

    Number a(10);
    Number b(20);
    //Number c;
    Number c = a.add1(b);
    return 0;
}











// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int num[7]={3,2,1,6,5,15,34};
//     sort(num,num+6);
//     for(int i =0;i<7;i++){
//         cout<<num[i]<<" ";
//     }
//     cout<<endl;
//     int pos1=lower_bound(num,num+7,6)-num;
//     int pos2=upper_bound(num,num+7,7)-num;
//     cout<<pos1<<endl;
//     cout<<pos2<<endl;

//     return 0;
// }
