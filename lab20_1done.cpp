#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    
    double z = min(R1.x+R1.w,R2.x+R2.w) - max(R1.x,R2.x);
    double c = min(R1.y,R2.y) - max(R1.y-R1.h,R2.y-R2.h);
    if(z <= 0){
    return 0;}
    return z*c;

}
