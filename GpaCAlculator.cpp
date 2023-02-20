#include <iostream>
using namespace std;

class Student
{
private:
    int age, RollNo;
    float gpa;
    float marksSubject1, marksSubject2, marksSubject3;

public:
    void setAge(int Age)
    {
        age = Age;
    }
    void setRollNo(int rollNumber)
    {
        RollNo = rollNumber;
    }

    void setMarks1(float marks1)
    {
        if (marks1 > 0)
        {
            marksSubject1 = marks1;
        }
        else
        {
            cout << "Enter the correct value" << endl;
        }
    }
    void setMarks2(float marks2)
    {
        if (marks2 > 0)
        {
            marksSubject2 = marks2;
        }
        else
        {
            cout << "Enter the correct value" << endl;
        }
    }
    void setMarks3(float marks3)
    {
        if (marks3 > 0)
        {
            marksSubject3 = marks3;
        }
        else
        {
            cout << "Enter the correct value" << endl;
        }
    }
    int getAge() { cout<<endl<<"The Age of the Student is "<<age<<endl;}

    int getRollNo() { cout<<"The Roll Number of the Student is "<<RollNo<<endl;}

    float getMarks1() { cout<<"The Student got "<< marksSubject1<<" in Subject 1"<<endl; }

    float getMarks2() { cout<<"The Student got "<< marksSubject2<<" in Subject 2"<<endl; }

    float getMarks3() { cout<<"The Student got "<< marksSubject3<<" in Subject 3"<<endl; }

    float setGPA(float M1, float M2, float M3, float TotalMarks)
    {
        float S1, S2, S3;
        float P1,P2,P3;

         // Subject 1 Grades

        P1 = ((M1 / TotalMarks) * 100);
        cout<<endl<<"The perentage of Subject 1 is "<<P1<<"%"<<endl;

        if (P1 > 80)
        {
            cout << "He got A Grade Subject 1" << endl;
            S1 = 4.0;
        }
        else if (P1 < 80 && P1 >= 70)
        {
            cout << "He got B+ Grade in Subject 1" << endl;
            S1 = 3.5;
        }
        else if (P1 < 70 && P1 >= 60)
        {
            cout << "He got B grade in Subject 1" << endl;
            S1 = 3.0;
        }
        else if (P1 < 60 && P1 >= 45)
        {
            cout << "He got C+ grade in Subject 1" << endl;
            S1 = 2.5;
        }
        else if (P1 < 45 && P1 >= 30)
        {
            cout << "He got C grade in Subject 1" << endl;
            S1 = 2.0;
        }
        else
        {
            cout << "He got D+ grade in Subject 1" << endl;
            S1 = 1.5;
        }
       
       //Subject 2 Grades

       P2 = ((M2 / TotalMarks) * 100);
        cout<<endl<<"The perentage of Subject 2 is "<<P2<<"%"<<endl;

     if (P2 > 80)
        {
            cout << "He got A Grade Subject 2" << endl;
            S2 = 4.0;
        }
        else if (P2 < 80 && P2 >= 70)
        {
            cout << "He got B+ Grade in Subject 2" << endl;
            S2 = 3.5;
        }
        else if (P2 < 70 && P2 >= 60)
        {
            cout << "He got B grade in Subject 2" << endl;
            S2 = 3.0;
        }
        else if (P2 < 60 && P2 >= 45)
        {
            cout << "He got C+ grade in Subject 2" << endl;
            S2 = 2.5;
        }
        else if (P2 < 45 && P2 >= 30)
        {
            cout << "He got C grade in Subject 2" << endl;
            S2 = 2.0;
        }
        else if (P2 < 30)
        {
            cout << "He got D+ grade in Subject 2" << endl;
            S2 = 1.5;
        }
        
        //Subject 3 Grades

        P3 = ((M3 / TotalMarks) * 100);
        cout<<endl<<"The perentage of Subject 3 is "<<P3<<"%"<<endl;

         if (P3 > 80)
        {
            cout << "He got A Grade Subject 3" << endl;
            S3 = 4.0;
        }
        else if (P3 < 80 && P3 >= 70)
        {
            cout << "He got B+ Grade in Subject 3" << endl;
            S3 = 3.5;
        }
        else if (P3 < 70 && P3 >= 60)
        {
            cout << "He got B grade in Subject 3" << endl;
            S3 = 3.0;
        }
        else if (P3 < 60 && P3 >= 45)
        {
            cout << "He got C+ grade in Subject 3" << endl;
            S3 = 2.5;
        }
        else if (P3 < 45 && P3 >= 30)
        {
            cout << "He got C grade in Subject 3" << endl;
            S3 = 2.0;
        }
        else if (P3 < 30)
        {
            cout << "He got D+ grade in Subject 3" << endl;
            S3 = 1.5;
        }

       float Gpa = ((S1+S2+S3)/3);

       cout<<endl<<"The Gpa of the Studnt is "<<Gpa<<endl;

       if (Gpa>3.5)
       {
         cout<<"Your performance is Excellent"<<endl;
       }else if (Gpa<=3.5 && Gpa>=3.0)
       {
        cout<<"Your performance is Good"<<endl;
       }
       else if (Gpa<=2.9 && Gpa>=2.5)
       {
        cout<<"Your performance is Satisfactory"<<endl;
       }
       else
       {
         cout<<"Your performance is UnSatisfactory"<<endl;
       }
       
    }
};

int main()
{
   int rollNo,age;
   float M1,M2,M3,TM;

   cout<<"Enter the age of the Student: ";
   cin>>age;

   cout<<"Enter the Roll Number of the Student: ";
   cin>>rollNo;

   cout<<"Enter total marks in Subject: ";
   cin>>TM;

   cout<<"Enter the Marks obtained by the Student in Subject 1: ";
   cin>>M1;

   cout<<"Enter the Marks obtained by the Student in Subject 2: ";
   cin>>M2;

   cout<<"Enter the Marks obtained by the Student in Subject 3: ";
   cin>>M3;

   Student s1;

   s1.setAge(age);
   s1.setRollNo(rollNo);
   s1.setMarks1(M1);
   s1.setMarks2(M2);
   s1.setMarks3(M3);
   
   s1.getAge(); s1.getRollNo(); s1.getMarks1(); s1.getMarks2(); s1.getMarks3();
   s1.setGPA(M1,M2,M3,TM);


    return 0;
}
