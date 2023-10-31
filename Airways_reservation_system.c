#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Passenger
{
    char firstname[50];
    char lastname[50];
    char class[20];
    char date[5];
    int number[10];
    char month[20];
    char year[10];
    char departure[50];
    char arrival[50];
    char flightno[10];
};
int Add(int b,struct Passenger p[b])
{   
    for(int i=0;i<b;i++)
    {   
        printf("Enter the first name of the passenger: ");
        scanf("%s",&p[i].firstname);
        printf("Enter the last name of the passenger: ");
        scanf("%s",&p[i].lastname);
    }
    return 0;
}
int ArrDep(int b,struct Passenger p[b])
{
    printf("The available boarding airports are as follows\n1.Mumbai\n2.Delhi\n3.Kolkata\n4.Hyderabad\n");
    printf("Enter your choice of boarding point: ");
    scanf("%s",p[0].departure);
    if(!strcmp(p[0].departure,"Mumbai") || !strcmp(p[0].departure,"mumbai"))
    {
        printf("The available arrival airports are as follows\n1.Delhi\n2.Kolkata\n3.Hyderabad\n");
        printf("Enter your choice of arrival point: ");
        scanf("%s",p[0].arrival);
    }
    else if(!strcmp(p[0].departure,"Delhi") || !strcmp(p[0].departure,"delhi"))
    {
        printf("The available arrival airports are as follows\n1.Mumbai\n2.Kolkata\n3.Hyderabad\n");
        printf("Enter your choice of arrival point: ");
        scanf("%s",p[0].arrival);
    }
    else if(!strcmp(p[0].departure,"Kolkata") || !strcmp(p[0].departure,"kolkata"))
    {
        printf("The available arrival airports are as follows\n1.Mumbai\n2.Delhi\n3.Hyderabad\n");
        printf("Enter your choice of arrival point: ");
        scanf("%s",p[0].arrival);
    }
    else if(!strcmp(p[0].departure,"Hyderabad") || !strcmp(p[0].departure,"hyderabad"))
    {
        printf("The available arrival airports are as follows\n1.M for Mumbai\n2.D for Delhi\n3.K for Kolkata\n");
        printf("Enter your choice of arrival point: ");
        scanf("%s",p[0].arrival);
    }
    else
    {
        printf("Sorry we don't have that city as our boarding airport.\n");
        exit(0);
    }
    return 0;
}
int Date(int b,struct Passenger p[b])
{
    printf("If you are planning to travel in Summer, travel to a seashore as it will be cool and you can enjoy your summer.\nYou will get 15 percent discount if you are travelling in summer.\nIf you are planning to travel in Winter, travel to a warm place as it will be warm and you can enjoy your winter\n.You will get 10 percent discount if you are travelling in winter.\n");
    printf("Enter the date of your departure: ");
    scanf("%s",&p[0].date);
    printf("Enter the name of the month of your departure: ");
    scanf("%s",&p[0].month);
    printf("Enter the year of your departure: ");
    scanf("%s",&p[0].year);
}
int Rate(int b,struct Passenger p[b],float n)
{
    float rate;
    if(!strcmp(p[0].departure,"Hyderabad") || !strcmp(p[0].departure,"hyderabad"))
    {   
        if(!strcmp(p[0].arrival,"Mumbai") || !strcmp(p[0].arrival,"mumbai"))
        {            
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*4300;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*5300;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*5800;
            }
            strcpy(p[0].flightno,"608A");
        }
        else if(!strcmp(p[0].arrival,"Delhi") || !strcmp(p[0].arrival,"delhi"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*4200;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*5200;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*5700;
            }
            strcpy(p[0].flightno,"1034F");
        }
        else if(!strcmp(p[0].arrival,"Kolkata") || !strcmp(p[0].arrival,"kolkata"))
        {   
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*5100;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*6100;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*6600;
            }
            strcpy(p[0].flightno,"1812C");
        }
    }
    else if(!strcmp(p[0].departure,"Mumbai") || !strcmp(p[0].departure,"mumbai"))
    {
        if(!strcmp(p[0].arrival,"Hyderabad") || !strcmp(p[0].arrival,"hyderabad"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*4000;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*5000;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*5500;
            }
            strcpy(p[0].flightno,"1083B");
        }
        else if(!strcmp(p[0].arrival,"Delhi") || !strcmp(p[0].arrival,"delhi"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*5000;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*6000;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*6500;
            }
            strcpy(p[0].flightno,"1303C");
        }
        else if(!strcmp(p[0].arrival,"Kolkata") || !strcmp(p[0].arrival,"kolkata"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*5500;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*6500;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*7000;
            }
            strcpy(p[0].flightno,"1881A");
        }
    }
    else if(!strcmp(p[0].departure,"Delhi") || !strcmp(p[0].departure,"delhi"))
    {
        if(!strcmp(p[0].arrival,"Mumbai") || !strcmp(p[0].arrival,"mumbai"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*4900;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*5900;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*6400;
            }
            strcpy(p[0].flightno,"680D");
        }
        else if(!strcmp(p[0].arrival,"Hyderabad") || !strcmp(p[0].arrival,"hyderabad"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*4500;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*5500;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*6000;
            }
            strcpy(p[0].flightno,"1000E");
        }
        else if(!strcmp(p[0].arrival,"Kolkata") || !strcmp(p[0].arrival,"kolkata"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*5800;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*6800;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*7300;
            }
            strcpy(p[0].flightno,"2418F");
        }
    }
    else if(!strcmp(p[0].departure,"Kolkata") || !strcmp(p[0].departure,"kolkata"))
    {   
        if(!strcmp(p[0].arrival,"Mumbai") || !strcmp(p[0].arrival,"mumbai"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*5300;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*6300;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*6800;
            }
            strcpy(p[0].flightno,"1800B");
        }
        else if(!strcmp(p[0].arrival,"Hyderabad") || !strcmp(p[0].arrival,"hyderabad"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*5000;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*6000;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*6500;
            }
            strcpy(p[0].flightno,"1218D");
        }
        else if(!strcmp(p[0].arrival,"Delhi") || !strcmp(p[0].arrival,"delhi"))
        {
            char flightno;
            if(!strcmp(p[0].class,"Economy") || !strcmp(p[0].class,"economy"))
            {
                rate=n*6000;
            }
            else if(!strcmp(p[0].class,"Business") || !strcmp(p[0].class,"business"))
            {
                rate=n*7000;
            }
            else if(!strcmp(p[0].class,"First") || !strcmp(p[0].class,"first"))
            {
                rate=n*7500;
            }
            strcpy(p[0].flightno,"1824E");
        }
    }
    if(!strcmp(p[0].month,"January") || !strcmp(p[0].month,"january") || !strcmp(p[0].month,"August") || !strcmp(p[0].month,"august") || !strcmp(p[0].month,"September") || !strcmp(p[0].month,"september") || !strcmp(p[0].month,"October") || !strcmp(p[0].month,"october") || !strcmp(p[0].month,"November") || !strcmp(p[0].month,"november") || !strcmp(p[0].month,"December") || !strcmp(p[0].month,"december"))
    {
        rate*=0.9;
    }
    else
    {
        rate*=0.85;
    }
    
    printf("The total price of your ticket is %f\n",rate);    
    return 0;
}
int Carddetails(char Name[100])
{
    double cardnumber;
    int cvv,otp;
    char expirydate;
    printf("Enter the name on the card: ");
    scanf("%s",Name);
    printf("Enter your card number: ");
    scanf("%lf",&cardnumber);
    printf("Enter the expiry date on the card: ");
    scanf("%s",&expirydate);
    printf("Enter the CVV: ");
    scanf("%d",&cvv);
    printf("An OTP(One Time Password) has been sent to your mobile number **********\n");
    printf("Enter the otp here: ");
    scanf("%d",&otp);
    printf("Your payment has been made.\nHang on for a second while we display the ticket.......\n");
}
int Print(int b,struct Passenger p[b])
{
    int i;
    for(i=0;i<b;i++)
    {   
        printf("\t\t\t\tFLIGHT TICKET\n\n");
        printf("Name of the passenger: %s %s\t\tDeparture Date: %s/%s/%s\n\nFrom: %s\t\tTo: %s\t\tClass: %s\n\nFlight No: %s\n",strupr(p[i].lastname),strupr(p[i].firstname),p[0].date,strupr(p[0].month),p[0].year,strupr(p[0].departure),strupr(p[0].arrival),strupr(p[0].class),p[0].flightno);
    }
}
int main()
{   
    char username[50],password[50],Name[100];
    printf("Username: ");
    scanf("%s",username);
    printf("Password: ");
    scanf("%s",password);
    printf("You've been successfully logged into our airlines website\n");
    printf("Welcome %s.\n",username);
    int b,c=1;
    printf("Enter the number of passengers boarding: ");
    scanf("%d",&b);
    float n;
    n=b;
    struct Passenger p[b];
    if(c<=b && b<=5)
    {
        Add(b,p);
        c++;
    }
    else
    {
        printf("Sorry,but you can make upto 5 reservations only.");
    }
    printf("The below rates are for economy class only.\nThe following are the rates of the airlines available and as well as the flight numbers\n1.Hyderabad to Mumbai Rs4300 608A\n2.Mumbai to Hyderabad Rs4000 1083B\n3.Mumbai to Delhi Rs5000 1303C\n4.Delhi to Mumbai Rs4900 680D\n5.Delhi to Hyderabad Rs4500 1000E\n6.Hyderabad to Delhi Rs 4200 1034F\n7.Mumbai to Kolkata Rs5500 1881A\n8.Kolkata to Mumbai Rs5300 1800B\n9.Hyderabad to Kolkata Rs5100 1812C\n10.Kolkata to Hyderabad Rs5000 1218D\n11.Kolkata to Delhi Rs6000 1824E\n12.Delhi to Kolkata Rs5800 2418F.\nThe following are the classes avaialble.\n1.First class which costs Rs1500 more than economy class\n2.Business class which costs Rs1000 more than economy class\n3.Economy class.\nType 'First' or 'first' for first class.\nType 'Business' or 'business' for business class.\nType 'Economy' or 'economy' for economy class.\nSo enter your choice of class: ");
    scanf("%s",p[0].class);
    ArrDep(b,p);
    Date(b,p);
    Rate(b,p,n);
    Carddetails(Name);
    Print(b,p);
    return 0;
}
