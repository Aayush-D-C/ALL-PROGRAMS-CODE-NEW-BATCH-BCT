#include<iostream>
using namespace std;

int area(int length=4, int breadth=5){
    int area = length*breadth;
    return area;
}

float area(int radius=6){
    float pie = 3.14;
    float area =pie*radius*radius;
    return area;
}

int main(){
    
    //We cannot do this 
    float Area;
    Area=area();
    cout<<Area<<endl;
    
    Area=area();
    cout<<Area<<endl;
    return 0;
}