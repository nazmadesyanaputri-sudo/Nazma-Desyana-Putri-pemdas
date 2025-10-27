#include<iostream>
#include<cmath>

float distance (int x1, int x2, int y1, int y2) {
    return sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

using namespace std;
int main(){
    float 
    x1,x2,y1,y2,radius,diameter,circum,area;

    cout<<"Masukan x1 dan y1: ";
    cin>>x1>>y1;
    cout<<"Masukan x2 dan y2: ";
    cin>>x2>>y2;

    radius = distance (x1, x2, y1, y1);

    diameter = radius*2;

    circum = 2*3.1416*radius;

    area = 3.1416*(radius*radius);

    cout<<"Jari jari: "<<radius<<" units."<<endl;
    cout<<"Diameter: "<<diameter<<" units."<<endl;
    cout<<"Keliling: "<<circum<<" units."<<endl;
    cout<<"Luas: "<<area<<" units."<<endl;
    return 0;


}
