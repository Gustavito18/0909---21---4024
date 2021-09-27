#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int mercaderia, Peso, lugar;
	float valor1,valor2,valor3,valor4,valor5,valor6,valor7,valor8,valor9,valor10,valor11,valor12,valor13,valor14, km, kg;
	
	km = 0.13;
	kg = 2.5;
	
	cout<<"Ingrese el que desea utilizar: "<<endl;
	cout<<"1. Documentos "<<endl;
	cout<<"2. Paqueteria "<<endl;
	cout<<"3. Mobiliario "<<endl;
	cout<<"4. Repuestos "<<endl;
    cout<<"5. Art. Electronicos "<<endl;
	cin>>mercaderia;
	
	cout<<"Ingrese su departamento: "<<endl;
	cout<<"1. Guatemala"<<endl;
	cout<<"2. Izabal "<<endl;
	cout<<"3. Petén "<<endl;
	cout<<"4. Chiquimula "<<endl;
    cout<<"5. Retalhuleu "<<endl;
    cin>>lugar;
	
	switch (lugar){
		
		case 1: 
		      valor9 = 10; break;
		      
		case 2:
			   valor10 = 300; break;
			   
		case 3:
			   valor11 = 460; break;
			   
		case 4:
			   valor12 = 178; break;
			   
		case 5: 
	           valor13 = 200; break;	   
	}
	
	valor4 = valor9+valor10+valor11+valor12+valor13;
	cout<<"Su total de los departamentos seria: "<<valor4 <<endl;
	
	switch (mercaderia) {
		
		case 1: 
		      cout<<"No importa el traslado su cantidad sera de: 40 quetzales "<<endl; break;
		      
	    case 2: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>valor1;
	    	       
	    	      if (valor1<=35) {
	    	      	
	    	      valor3 = km * valor4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<valor3 <<endl;
	    	      
	    	           valor2 = (valor1 * kg);
	    	      cout<<"Su peso es de: " << valor2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>valor5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * valor5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     valor3 = km * valor4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+valor3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;
	case 3: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>valor1;
	    	       
	    	      if (valor1<=35) {
	    	      	
	    	      valor3 = km * valor4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<valor3 <<endl;
	    	      
	    	           valor2 = (valor1 * kg);
	    	      cout<<"Su peso es de: " << valor2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>valor5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * valor5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     valor3 = km * valor4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+valor3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;
		case 4: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>valor1;
	    	       
	    	      if (valor1<=35) {
	    	      	
	    	      valor3 = km * valor4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<valor3 <<endl;
	    	      
	    	           valor2 = (valor1 * kg);
	    	      cout<<"Su peso es de: " << valor2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>valor5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * valor5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     valor3 = km * valor4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+valor3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;
		case 5: 
	           cout<<"¿conoce el peso? "<<endl;
	           cout<<"1. Si "<<endl;
	           cout<<"2. No "<<endl; 
	           cin>>Peso;
	        
	    switch (Peso) {
	    	
	    	case 1: 
	    	       cout<<"Ingrese el peso del paquete: "<<endl;
	    	       cin>>valor1;
	    	       
	    	      if (valor1<=35) {
	    	      	
	    	      valor3 = km * valor4;
	    	      cout<<"Su valor a pagar de la distancia es: "<<valor3 <<endl;
	    	      
	    	           valor2 = (valor1 * kg);
	    	      cout<<"Su peso es de: " << valor2 <<endl;    
				  }
				  else {
				  	cout<<"Su peso es incorrecto "<<endl;
				  }break;
	       case 2: 
	              cout<<"Ingrese largo del paquete: "<<endl;
	              cin>>valor14;
	              cout<<"Ingrese el ancho del paquete: "<<endl;
	              cin>>valor5;
	              cout<<"Ingrese el alto del paquete: "<<endl;
	              cin>>valor6;
	              
	              valor7 = (valor14 * valor5 * valor6)/2272;
	              
	              if(valor7<=50) {
	              	
	              	     valor3 = km * valor4;
	                cout<<"Su peso volumetrico es de: "<<valor7 <<endl;	
	                 
	                 valor8 = (valor7*kg)+valor3;
	                 
	                 cout<<"Su total es de: "<<valor8 <<endl;
				  }
				  else {
				  	cout<<"Su valor volumetrico es de: "<<valor7 <<endl;
				  	cout<<"Su total es incorrecto "<<endl;
				  }break;
		}break;	      	      	      
	}
	
}
