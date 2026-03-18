#include <iostream>
#include <string>
using namespace std;
class teacher{
    private:
    int prize;
    public:
    string name;
    string subject;
    teacher(string name,string subject){
        this->name=name;
        this->subject=subject;
    }
    void setprize(prize){
        this->prize=prize;
    }
    void getprize(){
        cout<<prize;
    }
}
int main(){
    teacher t1("anirudh","cse");
    t1.setprize(2000);
    t1.getprize();
    return 0;
}