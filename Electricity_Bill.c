#include<stdio.h>
int main()
{
    float bill,units,surcharge,tm;
    scanf("%f",&units);
    printf("Units Consumed: %.0f",units);
    if(units<=199)
    {
    bill=units*1.20;
    printf("
Cost per Unit: 1.20");
    }
    else if(units>=200 && units<400)
    {
    bill=units*1.40;
    printf("
Cost per Unit: 1.40");
    }
    else if(units>=400 && units<600)
    {
     bill=units*1.60;
    printf("
Cost per Unit: 1.60");
    }
    else if(units>=600 && units<800)
    {
    bill=units*1.80;
    printf("
Cost per Unit: 1.80");
    }
    else if(units>=800)
    {
    bill=units*2.00;
    printf("
Cost per Unit: 2.00");
    }
    printf("
Bill: %.2f",bill);
     if(bill>400)
     {
      surcharge=bill*0.15;
      printf("
Surcharge: %.2f",surcharge);
     }
      else
    {
        printf("
Surcharge: 0.00");
    }
    if(surcharge>0)
    {
    tm=bill+surcharge;
    printf("
Total Amount: %.2f",tm);
    }
    else 
    {
        tm=bill;
        printf("
Total Amount: %.2f",tm);
        
    }
}
