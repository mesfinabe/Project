#include<iostream>
using namespace std;
int main()
{
    int i;
    double mark, avg;
    cout<<"Enter the Mark that you get for Subject_1:\t ";
    cin>>mark;
    cout<<"You have gotten in Subject_1\tGrade = ";
    if(mark>=95 && mark<=100){cout<<"A+"; }
		else if(mark>=90 && mark<94.99){ cout<<"A"; }
        else if(mark>=85 && mark<89.99){cout<<"A-"; }
        else if(mark>=80 && mark<84.99){cout<<"B+";	}
        else if(mark>=75 && mark<79.99){cout<<"B";}
        else if(mark>=70 && mark<74.99){cout<<"B-";}
        else if(mark>=65 && mark<69.99){cout<<"C+";}
        else if(mark>=60 && mark<64.99){cout<<"C";}
        else if(mark>=55 && mark<59.99){cout<<"C-";}
        else if(mark>=50 && mark<54.99){cout<<"D";}
        else{cout<<"FAILD!";}
        cout<<endl;
    return 0;
}

