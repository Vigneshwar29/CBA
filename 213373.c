#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void func1();
void func2();
void func3();
void func4();
int main()
{
    int engine;
    int wiper;
    int sensor;
    int x;
    while(1)
    {
        printf("enter engine state");
        scanf("%d",&engine);
        if(engine==1)
        {
            printf("enter wiper state");
            scanf("%d",&wiper);
            if(wiper==1)
            {
                scanf("%d",&sensor);
                if(sensor<100)
                {
                    func1();
                }
                else if((sensor>100)&&(sensor<250))
                {
                    func2();
                }
                else if((sensor>250)&&(sensor<500))
                {
                    func3();
                }
                else
                {
                    func4();
                }
            }
            else if(wiper==0)
        {
            break;
        }
        }
        else if(engine==0)
        {
            break;
        }

    }
    return 0;

}
void func1()
{
    printf("no wiper movement=0");

}
void func2()
{
    printf("low=25");
}
void func3()
{
    printf("high=50");
}
void func4()
{
    printf("very high>75");
}









