#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;


void Doctor_information(void);
void Patient_Appointment(void);
void exist(void);

void Doctor_information (void){	
    cout<<"\nDoctor Information\t(Diseases)\t\t(Timing)\n";
    cout<<"\n1.DR.Faisal\t\t(flu,fever,cough)\t(1:00 til 3:00 pm)";
    cout<<"\n2.Dr.Rana\t\t(bp,sugar)\t\t(3:00 till 6:00 pm)";
    cout<<"\n3.Dr.Hina\t\t(bones)\t\t\t(7:00 till 10:00 pm)";
   }

void Patient_Appointment(void){	
int dtype;
char name[30];
int contact;
char gender[50];
int choice;
int temp=0;
int count=0;
cout<<"\n1.Flu,Fever,Cough\n2.BP,Sugar\n3.Bones";
cout<<"\n\nWhich type of Dieases u have?";
cin>>dtype;

temp=0;
	if(dtype==1){
	count=0;
	while(temp==0){
	cout<<"\nEnter your name:";
	cin>>name;
    cout<<"\nEnter your contact:";
	cin>>contact;
	cout<<"\nEnter your gender:";
    cin>>gender;
    cout<<"\nyour appointment is booked yor need to wait for 30 mints";
    cout<<"\nDo you want another appointment:\n enter your choice.\n1 for yes\n2 for no:\n";
	cin>>choice;
	if(choice==2){
		temp++;
	}
	count++;
	if(count>6){
		cout<<"doctor cann't take any more appointements.";
		temp++;
	}
	}
	
}

	if(dtype==2){
		count==0;
	while(temp==0){
	cout<<"doctor is available";
	cout<<"\nEnter your name:";
    cin>>name;
    cout<<"\nEnter your contact:";
	cin>>contact;
	cout<<"\nEnter your gender:";
	cin>>gender;
    cout<<"\nyou appointment is booked for this doctor u just contain 30 mints";
	
	cout<<"\nDo you want another appointment:\n enter your choice.\n1 for yes\n2 for no:\n";
	cin>>choice;
	if(choice==2){
		temp++;
	}
	
	count++;
	if(count>6){
		cout<<"doctor cann't take any more appointements.";
		temp++;
	}
		}
	
}

	
	if(dtype==3){
		count==0;
	while(temp==0){
		
	    cout<<("doctor is available");
	    cout<<("\nEnter your name:");
	    cin>>name;
        cout<<("\nEnter your contact:");
	    cin>>contact;
	    cout<<("\nEnter your gender:");
        cin>>gender;
        
        cout<<"\nyour appointment is booked you need to wait for 30 minutes.";
	 
	cout<<"\nDo you want another appointment:\n enter your choice.\n1 for yes\n2 for no:\n";
    cin>>choice;
    
	if(choice==2){
		temp++;
	}
	
	count++;
	if(count>6){
		cout<<"doctor cann't take any more appointements.";
		temp++;
	}
	
	}
	
}

}

void exist(void){
	exit(0);
}

int main() {
	
    cout<<"-------------------------------------------"<<endl;
	cout<<"\t Maansha Hospital"<<endl;
	cout<<"-------------------------------------------"<<endl;
int choice;
cout<<"1.Doctor information\n2.Patient Appointment\n3.exist";
cout<<"\n Choose which type you want:";
cin>>choice;

if(choice==1){
	Doctor_information();
	
}
if(choice==2){
	Patient_Appointment();
	
}
if(choice==3){
	exist();
	
}


	return 0;
}
