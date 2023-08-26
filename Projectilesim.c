// projectile simulation

#include<stdio.h>
#include<math.h>

#define GRAVITY 9.8 //  m/s^2

void simulateMotion(double initialV, double initialA){
    double timeInterval=0.1; //sec
    double totalTime=0.0;
    
    printf("Time \t\t PosY \t\t PosX\n");
    
    while(1){
        double x=initialV*cos(initialA)*totalTime; //position in x;
        double y=(initialV*sin(initialA)*totalTime)-0.5*GRAVITY*pow(totalTime, 2);
        
        if(y<0){
            break; //ball hits ground
        }
        printf("%lf \t %lf \t %lf\n" , totalTime, y, x);

        totalTime+=timeInterval;
        
    }
}

int main(void){
    double initialV, initialA, initialangle;
    
    printf("Enter initial velocity(m/s):");
    scanf("%lf", &initialV);
    printf("Enter initial angle(in degrees):");
    scanf("%lf" , &initialA);
    
    initialangle=initialA*3.14/180;
    simulateMotion(initialV, initialangle);
    return 0;
    
}
