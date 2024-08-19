  //`Q.U.E.3`

#include <iostream>
using namespace std;

class city{
  char cityName[30];
  float DistFromKtm;
  static int count;
  
  public:
  void getData();
  void setData();
  city AddDistance(city, city);
};

int city:: count;

void city :: getData(void){
    cout<<"Enter the name of city for city-"<<count+1<<" :";
    cin>>cityName;
    
    cout<<"Enter the distance of city from KTM for city-"<<count+1<<" :";
    cin>>DistFromKtm;
    cout<<endl;
    count++;
}

void city :: setData(){
    cout<<"The sum of distcane from ktm of two city is :"<<DistFromKtm<<endl;
}

city city :: AddDistance(city c1,city c2){
    city temp;
    temp.DistFromKtm = c1.DistFromKtm + c2.DistFromKtm;
    return temp;
}

int main() {
    
    city c1,c2,c3;
    //input complex numbers
    c1.getData();
    c2.getData();
    
    c3 = c3.AddDistance(c1,c2);
    c3.setData();
    return 0;
    
}