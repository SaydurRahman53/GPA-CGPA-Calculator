#include<iostream>
#include<stdlib.h>
using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("cls");
    int input;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"                     GPA & CGPA Calculator(Develop by Saydur Rahman)                     "<<endl;
    cout<<"-----------------------------------------------------------------------------------------\n"<<endl;
    cout<<"         MENU:"<<endl;
    cout<<"                     1. Calculate GPA(Grade Point Average)"<<endl;
    cout<<"                     2. Calculate CGPA(Cummulative Grade Point Average)"<<endl;
    cout<<"                     3. Method that is applied here for cslculating GPA & CGPA"<<endl;
    cout<<"                     4.Exit Application"<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;

    sub:
    cout<<"Enter your choice: ";
    cin>>input;
    switch (input)
    {
    case 1:
        calculateGPA();
        break;
    case 2:
        calculateCGPA();
        break;

    case 3:
        method();
        break;

    case 4:
        exit(EXIT_SUCCESS);
        break;
    default:
        cout<<"You have entered wrong input. please try again!"<<endl<<endl;
        goto sub;
        break;
    }
}

void calculateGPA()
{
    int q;
    system("cls");
    cout<<"------------ GPA Calculating -------------"<<endl;
    cout<<"How many subject's point do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float point [q];

    cout<<endl;
    for (int i = 0; i <q; i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject"<<i+1<<": ";
        cin>>point[i];
        cout<<"                     "<<endl<<endl<<endl;

    }

    float sum = 0;
    float tot;
    for (int j = 0; j <q; j++)
    {
        tot = credit[j]*point[j];
        sum +=tot;
    }

    int totCr = 0;

    for (int k = 0; k <q; k++)
    {
       totCr = totCr + credit[k];
    }
    cout<<endl<<endl<<endl<<"Total Point : "<<sum<<" . Total Credits: "<<totCr<<". Total GPA: "<<sum/totCr<<" ."<<endl;

    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit this app\n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch (inmenu)
    {
    case 1:
        calculateGPA();
        break;

    case 2:
        main();
        break;

    case 3:
        exit(EXIT_SUCCESS);
    
    default:
        cout<<"\n\nYou have entered wrong input! please choose again!"<<endl;
        goto sub;
    }

}

void calculateCGPA()
{
    system("cls");
    int l;
    cout<<"------------ CGPA Calculating -------------"<<endl;
    cout<<"How many semester do you completed? : ";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;
    for ( i = 0; i <l; i++)
    {
        cout<<" Enter Semester "<<i+1<<"Result(GPA): ";
        cin>>semrs[i];
        cout<<endl<<endl;
    }

    float semtot = 0;
    for (int j = 0; j <l; j++)
    {
       semtot+=semrs[j];
    }

    cout<<"********* Your CGPA is "<<semtot/l<<" ********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit this app\n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch (inmenu)
    {
    case 1:
        calculateCGPA();
        break;

    case 2:
        main();
        break;

    case 3:
        exit(EXIT_SUCCESS);
    
    default:
        cout<<"\n\nYou have entered wrong input! please choose again!"<<endl;
        goto sub;
    }
    
    
}

void method()
{
    system("cls");
    cout<<"---------------------------- Method of GPA & CGPA Calculating ------------------------\n\n"<<endl;
    cout<<" GPA = Sum of (credit*point)/total of credits\n"<<endl;
    cout<<" CGPA = sum of GPA / number of semesters "<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;

    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit this app\n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch (inmenu)
    {
    case 1:
        calculateGPA();
        break;

    case 2:
        main();
        break;

    case 3:
        exit(EXIT_SUCCESS);
    
    default:
        cout<<"\n\nYou have entered wrong input! please choose again!"<<endl;
        goto sub;
    }
};