//Machine Problem 1

#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main(){
    int x=50;
    string str[x];
    double q1[x], q2[x], q3[x], q4[x], s1[x], s2[x], s3[x], s4[x], s5[x], s6[x], s7[x], s8[x], s9[x], s10[x], notebook[x], boardwork[x], prelims[x], finals[x], fgrade[x], tgrade[x];
    double hbw = 0;
    
    //x = number of students
    //hbw = highest boardwork
    //fgrade = final grade
    //tgrade = transmuted grade
    
    cout << "This is a Classroom Management Software. \n";
    
    for(int i=0; i<x; i++)
    {
        cout<<"\nName of Student: ";
        cin>>str[i]; // The user should enter name of student
        
        //Input Student Grades
        cout<<"Enter Student's grades: \n";
        
        //Input quiz scores
        cout << "Quizzes \n";
        //Quiz 1
        cout << "\tQuiz 1: ";
        cin>>q1[i];
        //Quiz 2
        cout << "\tQuiz 2: ";
        cin >>q2[i];
        //Quiz 3
        cout << "\tQuiz 3: ";
        cin>>q3[i];
        //Quiz 4
        cout << "\tQuiz 4: ";
        cin>>q4[i];
        
        //Input Scores in Prelims and Finals
        cout << "Major examinations\n";
        
        cout << "\tPrelims: ";
        cin>>prelims[i];
        
        cout << "\tFinals: ";
        cin>>finals[i];
        
        //Input Score in Notebook
        cout << "Class Standing\n";
        cout << "\tNotebook: ";
        cin>>notebook[i];
        
        //Input Score in Seat works
        cout << "\tSeat Works";
        // sw 1
        cout << "\n\t\tSeatwork 1: ";
        cin>>s1[i];
        // sw 2
        cout << "\t\tSeatwork 2: ";
        cin>>s2[i];
        // sw 3
        cout << "\t\tSeatwork 3: ";
        cin>>s3[i];
        // sw 4
        cout << "\t\tSeatwork 4: ";
        cin>>s4[i];
        // sw 5
        cout << "\t\tSeatwork 5: ";
        cin>>s5[i];
        // sw 6
        cout << "\t\tSeatwork 6: ";
        cin>>s6[i];
        // sw 7
        cout << "\t\tSeatwork 7: ";
        cin>>s7[i];
        // sw 8
        cout << "\t\tSeatwork 8: ";
        cin>>s8[i];
        // sw 9
        cout << "\t\tSeatwork 9: ";
        cin>>s9[i];
        // sw 10
        cout << "\t\tSeatwork 10: ";
        cin>>s10[i];
        
        //Input Scores in board work
        cout << "\tBoard work: ";
        cin>>boardwork[i];
        
        //Computing for 60% Quizzes
        fgrade[i] = fgrade[i] + (q1[i]/100)*15;
        fgrade[i] = fgrade[i] + (q2[i]/100)*15;
        fgrade[i] = fgrade[i] + (q3[i]/100)*15;
        fgrade[i] = fgrade[i] + (q4[i]/100)*15;
        
        //Computing for 40% Major Examinations
        fgrade[i] = fgrade[i] + (prelims[i]/100)*20;
        fgrade[i] = fgrade[i] + (finals[i]/100)*20;
        
        //Computing for 5% Class Standing
        fgrade[i] = fgrade[i] + (notebook[i]/100)*1;
        fgrade[i] = fgrade[i] + (s1[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s2[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s3[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s4[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s5[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s6[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s7[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s8[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s9[i]/10)*0.2;
        fgrade[i] = fgrade[i] + (s10[i]/10)*0.2;
        
        
        if(hbw <= boardwork[i]-1){
            hbw = boardwork[i];
        }
        
    }
    
    //Conditions for Students' Final Raw Grade to Corresponding GPA
    for(int i=0; i<=x-1; i++){
        fgrade[i] +=  boardwork[i]/hbw*2;
        
        if(fgrade[i] >= 60.00 && fgrade[i] <= 64.44 ){
            tgrade[i] = 3.00;
        }
        else if(fgrade[i] >= 64.45 && fgrade[i] <= 68.89 ){
            tgrade[i] = 2.75;
        }
        else if(fgrade[i] >= 68.90 && fgrade[i] <= 73.33 ){
            tgrade[i] = 2.50;
        }
        else if(fgrade[i] >= 73.34 && fgrade[i] <= 77.78 ){
            tgrade[i] = 2.25;
        }
        else if(fgrade[i] >= 77.79 && fgrade[i] <= 82.22 ){
            tgrade[i] = 2.00;
        }
        else if(fgrade[i] >= 82.23 && fgrade[i] <= 86.67 ){
            tgrade[i] = 1.75;
        }
        else if(fgrade[i] >= 86.68 && fgrade[i] <= 91.11 ){
            tgrade[i] = 1.50;
        }
        else if(fgrade[i] >= 91.12 && fgrade[i] <= 96.56 ){
            tgrade[i] = 1.25;
        }
        else if(fgrade[i] >= 95.57 ){
            tgrade[i] = 1.00;
        }
        else{
            tgrade[i] = 5.00;
        }
    }
    
    cout<<endl;
    
    //Printing Final and Transmuted Grade
    cout<<"Name:"<<"\t\t"<<"Final Grade:"<<"\t"<<"Transmuted:"<<"\t"<<"Pass/Fail:"<<endl;
    for(int i=0; i<x; i++){
        cout<<fixed<<setprecision(2)<<left;
        cout<<"\n"<<str[i]<<"\t\t"<<fgrade[i]<<"\t\t"<<tgrade[i]<<"\t\t";
        
        //Determining if student passed or failed
        if(tgrade[i] <= 3){
            cout<<"Pass"<<endl;
        }else{
            cout<<"Fail"<<endl;
        }
    }
    
    //Listing Top 10 Students in Class
    cout<<"\n\n"<<"\t\t\t"<<"Class Top Ten:"<<"\n"<<endl;
    
    
    for(int i=0; i<=x-2; i++){
        for(int j= i+1; j<x; j++){
            if(fgrade[i] < fgrade[j]){
                string t1 = str[i];
                str[i] = str[j];
                str[j] = t1;
                
                double t2 = fgrade[i];
                fgrade[i] = fgrade[j];
                fgrade[j] = t2;
            }
        }
    }
    
    for(int i=0; i<=9; i++){
        cout<<"\t\t\t"<<"Top "<<i+1<<" :"<<"\t"<<str[i]<<endl;
    }
}

