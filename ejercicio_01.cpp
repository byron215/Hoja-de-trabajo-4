#include <iostream>

#include <stdlib.h>

#include <fstream>
#include <windows.h>
using namespace std;
int main (){
fstream archivo ("personas.txt");
	
	 int c,d,e,b,m,prom1,prom11,i,prom2,a;
	do{
	
	 
	 system("cls");
	 
	cout<<"<<------Bienvenido------>>"<<endl<<endl;
	cout<<"tipo de fumigacion"<<endl;
	cout<<"tipo servicio   costo x hectarea "<<endl;
	cout<<" __________________________     " <<endl;
	cout<<"|1.|-mala hierba     |10.00|    " <<endl;
	cout<<"|2.|-Langostas       |20.00|    " <<endl;
	cout<<"|3.|-Gusanos         |30.00|    " <<endl;
	cout<<"|4.|-Todo lo anterior|50.00|    " <<endl;
	cout<<"----------------------------    " <<endl;
	cout<<"5.  -salir                      " <<endl;
	cin>>m;

		cin.ignore();
	
	if ((m>=1)&&(m<=4))
		
		{
	if(!archivo.is_open())
			{
			archivo.open ("personas.txt",ios::out | ios::app);
			
		}


	
	
    
	
	
		switch (m){
		case 1:
			system ("cls");
				cout<<"cantidad de servicios a solicitar: ";
		cin>>a;

		     archivo<<"<------mala hierba------>";
		for ( int i=1; i<=a; i++) {
    cout<<"servicio "<<i;
	cout<<"\ncantidad de hectareas ";
			cin>>b;
		
       
			archivo<<"\ncantidad de hectareas:  ";
			 archivo<<b;
				if (b<=500){
				archivo<<"\nel total es: "<<b*10;
			}
			if (b>500){
				prom1=b*10;
				prom11=prom1-(prom1*0.05);
				archivo<<"\ndescuento del 5% "<<"total a pagar: "<<prom11;
			}
			if (prom11>1500){
				archivo<<"\ndescuento adicional del 10%: "<<"total a pagar: "<<prom11-(prom11*0.1);
			}
			
			

			
}
	archivo<<"\ncantidad solicitado del servicio"<<a;
		break;
		case 2:
			 
	 system("cls");
				cout<<"cantidad de servicios a solicitar: ";
		cin>>c;
	
		
		archivo<<"\n<-------Langostas------->"<<endl;			
for ( int i=1; i<=c; i++) {
    cout<<"servicio "<<i;
	cout<<"\ncantidad de hectareas ";
			cin>>b;
		
        
			archivo<<"cantidad de hectareas:  ";
			 archivo<<b;
				if (b<=500){
				archivo<<"\nel total es: "<<b*20;
			}
			if (b>500){
				prom1=b*20;
				prom11=prom1-(prom1*0.05);
				archivo<<"\ndescuento del 5% "<<"total a pagar: "<<prom11;
			}
			if (prom11>1500){
				archivo<<"\ndescuento adicional del 10%: "<<"total a pagar: "<<prom11-(prom11*0.1);
			}
			
			

			
}
	archivo<<"\ncantidad solicitado del servicio "<<c;
		
			break;
			case 3:
				 
	 system("cls");
				cout<<"cantidad de servicios a solicitar: ";
		cin>>d;
	
		
		archivo<<"\n<-------Gusanos------->"<<endl;			
for ( int i=1; i<=d; i++) {
    cout<<"servicio "<<i;
	cout<<"\ncantidad de hectareas ";
			cin>>b;
		
        
			archivo<<"cantidad de hectareas:  ";
			 archivo<<b;
				if (b<=500){
				archivo<<"\nel total es: "<<b*30;
			}
			if (b>500){
				prom1=b*30;
				prom11=prom1-(prom1*0.05);
				archivo<<"\ndescuento del 5% "<<"total a pagar: "<<prom11;
			}
			if (prom11>1500){
				archivo<<"\ndescuento adicional del 10%: "<<"total a pagar: "<<prom11-(prom11*0.1);
			}
			
			

			
}
	archivo<<"\ncantidad solicitado del servicio "<<d;
			
				break;
			case 4:
				 
	 system("cls");
				cout<<"cantidad de servicios a solicitar: ";
		cin>>e;
	
		
			archivo<<"\n<-------Todo lo anterior------->"<<endl;		
for ( int i=1; i<=e; i++) {
    cout<<"servicio "<<i;
	cout<<"\ncantidad de hectareas ";
			cin>>b;
		
        
			archivo<<"cantidad de hectareas:  ";
			 archivo<<b;
				if (b<=500){
				archivo<<"\nel total es: "<<b*50;
				
			}
			if (b>500){
				prom1=b*50;
				prom11=prom1-(prom1*0.05);
				archivo<<"\ndescuento del 5% "<<"total a pagar: "<<prom11;
			}
			if (prom11>1500){
				archivo<<"\ndescuento adicional del 10%: "<<"total a pagar: "<<prom11-(prom11*0.1);
			
			}
			
			

			
}
archivo<<"\ncantidad solicitado del servicio "<<e;
		
		
				


		
			
 if (a>c,a>d,a>e ){
 	archivo<<"\nel servicio con mayor demanda es: Mala hierva";
 }
 if (c>a,c>d,c>e ){
 	archivo<<"\nel servicio con mayor demanda es: Langostas";
 }
if (d>a,d>c,d>e ){
 	archivo<<"\nel servicio con mayor demanda es: Gusanos";
 }
if (e>a,e>c,e>d){
	archivo<<"\nel servicio con mayor demanda  es:todo lo anterior";
}
	
	archivo.close ();
}

}

	
}while (m!=5);

		return (m);
}

	

	
			

	
	
	

	



