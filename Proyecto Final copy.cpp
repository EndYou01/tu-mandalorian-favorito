#include<iostream>
#include<conio.h>
using namespace std;

void R2_D2(int arturito, float total){              
cout<<"        .---. "<<endl;
cout<<"      .'_:___:.     ...../ )"<<endl;
cout<<"      |__ --==|    .....' /"<<endl;
cout<<"      [  ]  :[|     ---' (_____"<<endl;
cout<<"      |__| I=[|     ...... ((__)"<<endl;
cout<<"      / / ____|     .... _ ((__)"<<endl;
cout<<"     |-/.____.'     .... -'((__)"<<"\tCosto total de la Compra:"<<total<<"$"<<endl;
cout<<"    /___) /___)     --.____((_) \t May the Force Be With You"<<endl;
}

float n_prod(int n_producto, float precios){
    return precios*=n_producto;
}

float descuento(float precio, float n_producto){
    if(precio<=30){
     precio -=precio*0.05;
     return precio*=n_producto;
 }else{
     precio -=precio* 0.15;
     return precio*=n_producto; }
}

int n_descuento(float precio){
    if (precio<=30){
    return 5;
    } else{
        return 15; }  
}

int main(){
    int opcion, opcion_1, aux, arturito=0;
    float n_producto, total=0;
                     //0     1     2     3      4      5      6     7     8     9     10    11     12    13    14
    float precios[]={20.11, 9.64, 35.13, 38.17, 23.84, 27.20, 233, 2290, 22050, 5.99, 1.89, 7.99, 7.56, 35.0, 12.5};
//Interfaz Del Programa
cout<<"               ________ "<<endl;
cout<<"          _,.-Y  |  |  Y-._ "<<endl;
cout<<"      .-~-   ||  |  |  |   --. "<<endl;
cout<<"      I- --==-|- !--! -|-[]--|     _____ "<<endl;
cout<<"      L__  [] |..------|:   _[----I- .-{--. "<<endl;
cout<<"     I___|  ..| l______|l_ [__L]_[I_/r(=)=-P "<<endl;
cout<<"    [L______L_[________]______j~  '-=c_]/=-^ "<<endl;
cout<<"     (_I_j.--.()==I|I==_/.--L_] "<<endl;
cout<<"       [_((==)[`------](==)j "<<endl;
cout<<"          I--I-~~---~~-I--I "<<endl;
cout<<"          |[]|         |[]| "<<endl;
cout<<"          l__j         l__j "<<endl;
cout<<"          |!!|         |!!| "<<endl;
cout<<"          |..|         |..| "<<endl;
cout<<"          ([])         ([]) "<<endl;
cout<<"          ]--[         ]--[ "<<endl;
cout<<"          [_L]         [_L] "<<endl;
cout<<"         /|..|)       /|..|) "<<endl;
cout<<"        `=}--{='     `=}--{=' "<<endl;
cout<<"       .-^--r-^-.   .-^--r-^-. "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"-----Tienda Interestelar ''Tu Mandalorian Favorito''-----"<<endl;
    cout<<"----Productos Disponibles (Descuentos Para clientes terrestres por el dia de San Valentin)----"<<endl; 

        for (opcion = 1; opcion >0; opcion ){
   
            cout<<" 1-\t Armamento Laser:\n 2-\t Trajes Espaciales:\n 3-\t Naves Interestelares:\n 4-\t Comidas Espaciales:\n 5-\t Listado de productos con DESCUENTOS:\n 0-\t Salir de la Tienda/Finalizar Compra:\n";

            cin>>opcion;
            
                switch(opcion) 
                {
        case 1: //Sección de Armamento Laser
        cout<<" 1- Sable de Luz \t"<<precios[0]<<"$\n 2- Pistola Blaster DL-44\t"<<precios[1]<<"$\n 3- Lanza-Misiles Portatil DLX-1\t"<<precios[2]<<"$\n 0- Atras \n"; 
            
            for (opcion_1 = 1; opcion_1 > 0;)
            {
                
                cin>>opcion_1;

            switch(opcion_1){
            
                case 1:
                        cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[0])<<"$"<<endl;
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[0]);
                        if(aux == 1){
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 2: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[1])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[1]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }
                        
                case 3: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[2])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[2]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }                      

                case 0: break;//Atras

                default: cout<<"INVALIDO, no se estrese, NO AL LADO OSCURO ....BIP: \n";
                break;
                            }
            }
        break;

        case 2: //Sección de Trajes Espaciales
        cout<<" 1- Armadura De Beskar\t"<<precios[3]<<"$\n 2- Armadura de Clon Trooper\t"<<precios[4]<<"$\n 3- Armadura de Stormtrooper\t"<<precios[5]<<"$\n 0- Atras \n"; 
            
            for (opcion_1 = 1; opcion_1 > 0; opcion_1)
            {
            
                cin>>opcion_1;

            switch(opcion_1){
                case 1: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[3])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[3]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 2: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[4])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[4]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }
                        
                case 3: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[5])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[5]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                default: cout<<"INVALIDO, no se estrese, NO AL LADO OSCURO ....BIP: \n";
                break;
                            }
            }
        break;
       
        case 3: //Sección de Naves Interestelares
        cout<<" 1- Halcon Milenario\t"<<precios[6]<<"$\n 2- Destructor Imperial \t"<<precios[7]<<"$\n 3- Estrella de la Muerte\t"<<precios[8]<<"$\n 0- Atras \n";
        
            for (opcion_1 = 1; opcion_1 > 0;opcion_1)
            {
            
                cin>>opcion_1;

            switch(opcion_1){
                case 1: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[6])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[6]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 2: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[7])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[7]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 3: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[8])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[8]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                default: cout<<"INVALIDO, no se estrese, NO AL LADO OSCURO ....BIP: \n";
                break;
                            }   
            }
        break;
        
        case 4: //Sección de Comidas Espaciales
        cout<<" 1- El Especial de La Cantina (Carne de Chewgrup)\t"<<precios[9]<<"$\n 2- Jugo Jawa\t"<<precios[10]<<"$\n 3- Filete de Kranana\t"<<precios[11]<<"$\n 0- Atras \n"; 
        
            for (opcion_1 = 1; opcion_1 > 0;opcion_1)
            {
            
                cin>>opcion_1;
        
            switch(opcion_1){
                case 1: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[9])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[9]);                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 2: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[10])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[10]);
                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 3: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<n_prod(n_producto,precios[11])<<"$"<<endl; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[11]);
                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                default: cout<<"INVALIDO, no se estrese, NO AL LADO OSCURO ....BIP: \n";
                break;
                            }
            }
        break;

        case 5: //Seccion de Productos en DESCUENTO
        cout<<"1- Miniatura de Yoda\t"<<precios[12]<<"$\n2- R2-D2 (Clasico)\t"<<precios[13]<<"$\n"<<"3- Pack de la Princesa Leia Organa\t"<<precios[14]<<"$\n0- Atras \n"; 

        for (opcion_1 = 1; opcion_1 > 0;opcion_1){
        
                cin>>opcion_1;
        
            switch(opcion_1){
                case 1: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<descuento(precios[12],n_producto)<<" MLC con el descuento: "<<n_descuento(precios[12])<<" %\n"; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[12]);
                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 2: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<descuento(precios[13],n_producto)<<" MLC con el descuento: "<<n_descuento(precios[13])<<" %\n"; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[13]);
                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }

                case 3: cout<<"Que cantidad desea comprar "; cin>>n_producto;
                        cout<<"Costara: "<<descuento(precios[14],n_producto)<<" MLC con el descuento: "<<n_descuento(precios[14])<<" %\n"; 
                        cout<<"Pulse (1) para seguir comprando, (0) para finalizar compras: \n"; cin>>aux;
                        total += n_prod(n_producto,precios[14]);
                        if(aux == 1){    
                            opcion_1 = 0;
                            break;
                        }else{
                            opcion = 0;
                            opcion_1 = 0;
                            break;
                        }
                default: cout<<"INVALIDO, no se estrese, NO AL LADO OSCURO ....BIP: \n";
                break;

            }
         }
        case 0: //Salir de la Tienda
        break;

        default: cout<<"INVALIDO, no se estrese, NO AL LADO OSCURO ....BIP: \n";
        
        
    }
}
R2_D2(arturito, total);

getch();
return 0;
}  
  