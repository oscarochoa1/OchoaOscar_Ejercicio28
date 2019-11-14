#include <fstream>
#include <iostream>
using namespace std;

int k4(float xini, float xfini, float deltat);
int k4f(float xini, float xfini, float deltat);

int main(){

  k4(0, 20, 0.5);
k4f(0,20,0.5);
  return 0;
}

int k4(float xini, float xfini, float deltat){
    
    int k1,k2,k3,k4,k;
    int v=10;
    int vy=10;
    float g=9.8;
    int x,t;
    float xn=1,tn=1;
    for (int i=0;i<20;i++){
        
        k1= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn));
        k2= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn) + (k1/2) + (deltat/2));
        k3= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn) + (k2/2) + (deltat/2));
        k4= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn) + (k3/2) + (deltat/2));
        k= (1/6)*(k1+(2*k2)+(2*k3)+k4);            
        xn = xn + k;
        tn = tn + deltat;
         cout << k1<< " "<< k2<<" "<<k3<<" "<<k4<<" "<<k<< endl;
       
    }
    int k11,k22,k33,k44,k0;
    
    
    for (int i=0;i<20;i++){
        
        
        k11= deltat*(xn+v*(0.7071)*tn);
        k22= deltat*(xn+v*(0.7071)*tn + (k11/2) + (deltat/2));
        k33= deltat*(xn+v*(0.7071)*tn +  (k22/2) + (deltat/2));
        k44= deltat*(xn+v*(0.7071)*tn +  (k33/2) + (deltat/2));
        k0= (1/6)*(k11+(2*k22)+(2*k33)+k44);            
        xn = xn + k0;
        tn = tn + deltat;
         cout << k11<< " "<< k22<<" "<<k33<<" "<<k44<<" "<<k0<< endl;
     
    }
    
    
        return 0;
}




int k4f(float xini, float xfini, float deltat){
    
    int k1,k2,k3,k4,k;
    int v=10;
    int vy=10;
    float g=9.8;
    int x,t;
    float xn=1,tn=1;
    float f=0.7;
    
    for (int i=0;i<20;i++){
        int vx,vy;
        vx = vx- k*vx*deltat        ;
        vy = vy- k*vy*deltat;
        
        
       
    }
    for (int i=0;i<20;i++){
        
        k1= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn));
        k2= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn) + (k1/2) + (deltat/2));
        k3= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn) + (k2/2) + (deltat/2));
        k4= deltat*(xn+v*(0.7071)*tn - (0.5*g*tn*tn) + (k3/2) + (deltat/2));
        k= (1/6)*(k1+(2*k2)+(2*k3)+k4);            
        xn = xn + k;
        tn = tn + deltat;
         cout << k1<< " "<< k2<<" "<<k3<<" "<<k4<<" "<<k<< endl;
       
    }
    int k11,k22,k33,k44,k0;
    
    
    for (int i=0;i<20;i++){
        
        
        k11= deltat*(xn+v*(0.7071)*tn);
        k22= deltat*(xn+v*(0.7071)*tn + (k11/2) + (deltat/2));
        k33= deltat*(xn+v*(0.7071)*tn +  (k22/2) + (deltat/2));
        k44= deltat*(xn+v*(0.7071)*tn +  (k33/2) + (deltat/2));
        k0= (1/6)*(k11+(2*k22)+(2*k33)+k44);            
        xn = xn + k0;
        tn = tn + deltat;
         cout << k11<< " "<< k22<<" "<<k33<<" "<<k44<<" "<<k0<< endl;
     
    }
    
    
        return 0;
}
