#include <iostream>

using namespace std;
class calculator{
	
	int x, y;
	public:
		int sum(){
			int z;
			cout<<"Enter first Value                  = ";
			cin>>x;
			cout<<endl;
			cout<<"Enter Second Value                 = ";
			cin>>y;
			cout<<endl;
			z=x+y;
			cout<<"The Sum of Numbers is              = "<<z<<endl;
			return z;
			
		}
		int sub(){
			int z;
			cout<<"Enter first Value                  = ";
			cin>>x;
			cout<<endl;
			cout<<"Enter Second Value                 = ";
			cin>>y;
			cout<<endl;
			z=x-y;
			cout<<"The Subtraction of Numbers is      = "<<z<<endl;
			return z;
			
		}
		int mlt(){
			int z;
			cout<<"Enter first Value                  = ";
			cin>>x;
			cout<<endl;
			cout<<"Enter Second Value                 = ";
			cin>>y;
			cout<<endl;
			z=x*y;
			cout<<"The Multipication of Numbers is    = "<<z<<endl;
			return z;
			
		}
		float div(){
			float a;
			float b;
			float z;
			cout<<"Enter first Value                  = ";
			cin>>a;
			cout<<endl;
			cout<<"Enter Second Value                 = ";
			cin>>b;
			cout<<endl;
			z=a/b;
			cout<<"The Division of Numbers is         = "<<z<<endl;
			return z;
			
		}
};
int main(){
	
	calculator c1;
	char wile_v;
	
	cout<<"\t\t\t********WELCOME********\n\t\t   ********MINI CALCULATOR********\n***********************************************************************\n\n";
	
	cout<<"For	 SUM                      Press (1) and then >ENTER< "<<endl;
	cout<<"For	 SUBTRACTION              Press (2) and then >ENTER< "<<endl;
	cout<<"For	 MUTIPLICATION            Press (3) and then >ENTER< "<<endl;
	cout<<"For	 DIVISION                 Press (4) and then >ENTER< "<<endl;
	do{
		int cal_cas;
		cout<<"   > ";
		cin>>cal_cas;
		cout<<endl;
		switch(cal_cas){
			
			case 1:
				c1.sum();
				break;
				
			case 2:
				c1.sub();
				break;
				
			case 3:
				c1.mlt();
				break;
				
			case 4:
				c1.div();
				break;	
				
			default:
				cout<<"        ***INVALID VALUE***"<<endl;
				cout<<"Choose Value Between(1-4)"<<endl;
					
		}
		cout<<endl;
		cout<<"For further calculation First Press 'Y' and ENTER to continue then again Enter Value(1-4) and press ENTER "<<endl<<"   > ";
		cin>>wile_v;
		cout<<endl;
	}
	while(wile_v=='y' || wile_v=='Y');
	
	return 0;
}
