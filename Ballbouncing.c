#include<stdio.h>

#define GRAVITY=9.8 //acceleration due to gravity
#define COLLISION_FACTOR=0.8 //collision factor

struct BALL {
    int position;
    int velocity;
};
void updateb(struct Ball *ball, double times){
    ball -> position+= velocity*times + 0.5*GRAVITY*times*times;
    ball -> velocity-=GRAVITY*times;
    
    if(ball-> position <=0){
        ball-> position=0;
        ball -> velocity*=-COLLISION_FACTOR; //Reverses ball velocity
    }
}

int main(){
    struct Ball ball={10,0} //defines position and velocity
    double times=0.01; //time step for simulation
    int totalstep=150; //simulation step
    
    printf("time \t postion \t");
    
    for (int steps=0; step<=totalstep; step++) {
        printf("%d \t %d ", step*times , ball.position);
        updateBall(&ball,times);
    }
return 0;
}
