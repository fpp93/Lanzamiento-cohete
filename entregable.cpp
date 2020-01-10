#include <iostream>
#include <windows.h>


using namespace std;


int main(){
    string user;
    string password;
    int dist=380000;
    float time=127.2;
    int motores;
    char constantes;
    char ignicion;
    char hidraulico;
    char radio;
    char bateria;
    char rentrada;
    int cuenta;

    cout<<"Bienvenido/a al sistema de control de la nave APOLO XI " <<endl;

     cout <<"introduzca su usuario " <<endl;
    cin>>user;
     cout<<"introduzca password " <<endl;
    cin>>password;

    if(user=="armstrong" && password=="eagle" || user=="aldrin" && password=="buzz" || user=="collins" && password=="columbia"){
            
            cout<<"Bienvenido " <<user <<endl;
        
        

        cout<<"-------------------------------------------------" <<endl;
        cout <<"-" <<"MENU DEL SISTEMA DE CONTROL DE LA NAVE APOLO XI "  <<"-" <<endl;
        cout <<"-" <<"1:CHECKLIST DE REVISION DE PARAMETROS " <<"          -" <<endl;
        cout <<"-" <<"2:SISTEMA DE CUENTA ATRAS Y DESPEGUE "  <<"           -"<<endl;
        cout<<"-------------------------------------------------" <<endl;
        cout <<"-" <<endl;
        Sleep(1000);
        cout <<"-" <<endl;
        Sleep(1000);
        cout <<"-" <<endl;
        Sleep(1000);
        cout <<"-" <<endl;
        Sleep(1000);
        cout <<"-" <<endl;
            for(float i=1;i<=100;i=i+0.25){
                cout<<"cargando sistema " <<i <<"%";
                system("cls");
            }

         cout <<"-" <<"1:CHECKLIST DE REVISION DE PARAMETROS " <<"          -" <<endl;
         cout<<"-------------------------------------------------" <<endl;
            Sleep(1000);
        cout<<"Por favor revise parametros antes de despegar " <<endl;
            Sleep(1000);
        cout<<"------------------------------------------------" <<endl;
        cout<<"Distancia de la tierra a la luna  " <<dist <<" kilometros" <<endl;
        cout<<"------------------------------------------------" <<endl;
            Sleep(1000);
        cout <<"Calculando tiempo estimado...... "  <<"tiempo estimado de llegada en " <<time <<" horas" <<endl;
        cout<<"------------------------------------------------" <<endl;
            Sleep(1000);
        cout<<" calculando Temperatura de los motores.....  " <<endl;
        cout<<"------------------------------------------------" <<endl;
        cin>>motores;
            while(motores<400 || motores>800){
                cout <<"ERROR- TEMPERATURA DE MOTORES PELIGROSA " <<endl;
                cout<<"Arreglelos y vuelva aqui  a comprobacion " <<endl;
                cin>>motores;
            }

        cout<<"------------------------------------------------" <<endl;
        cout <<"Constantes vitales normales? y/n ";
        cin>>constantes;
            while(constantes!='y'){
                cout<<" constantes peligrosas " <<endl;
                cin>>constantes;
            }
        cout<<"------------------------------------------------" <<endl;
        cout <<"Sistemas de ignicion preparados? y/n ";
        cin>>ignicion;
            while(ignicion!='y'){
                cout<<"Sistemas de ignicion no preparados " <<endl;
                cin>>ignicion;
            }
        cout<<"------------------------------------------------" <<endl;
        cout<<"Sistema hidraulico en funcionamiento? y/n ";
        cin>>hidraulico;
            while(hidraulico!='y'){
                cout<<"Sistema hidraulico no preparado " <<endl;
                cin>>hidraulico;
            }
        cout<<"------------------------------------------------" <<endl;
        cout<<"Prueba de radio realizada? y/n ";
        cin>>radio;
            while(radio!='y'){
                cout<<"realize la prueba de radio primero " <<endl;
                cin>>radio;
            }
        cout<<"------------------------------------------------" <<endl;
        cout<<"Baterias de emergencias cargadas? y/n ";
        cin>>bateria;
            while(bateria!='y'){
                cout<<"ERROR-BATERIAS NO RECARGADAS " <<endl;
                cin>>bateria;
            }
        cout<<"------------------------------------------------" <<endl;
        cout<<"Sistema de reentrada listo? y/n ";
        cin>>rentrada;
            while(rentrada!='y'){
                cout<<"Compruebe de nuevo el sistema de reentrada " <<endl;
                cin>>rentrada;
            }

        cout<<"------------------------------------------------" <<endl;
        cout<<"PARAMETROS REALIZADOS CORRECTAMENTE " <<endl;
        cout<<"------------------------------------------------" <<endl;
        cout<<" Comenzando Cuenta atras para despegue " <<endl;

                for(cuenta=10;cuenta>=1;cuenta--){
                    cout<<cuenta <<endl;
                    Sleep(1000);
                }

        cout<<"-------------------------------------------------" <<endl;
        cout<<"DESPEGUE! " <<" .......FELIZ VUELO " <<endl;

        cout<<"--------------------------------------------------" <<endl;
        cout<<" ****     **     **      ********     ** " <<endl;
        cout<<"/**/**   /**    ****    **//////     **** " <<endl;
        cout<<"/**//**  /**   **//**  /**          **//** " <<endl;
        cout<<"/** //** /**  **  //** /*********  **  //**" <<endl;
        cout<<"/**  //**/** **********////////** **********" <<endl;
        cout<<"/**   //****/**//////**       /**/**//////**" <<endl;
        cout<<"/**    //***/**     /** ******** /**     /**" <<endl;
        cout<<"//      /// //      // ////////  //      //" <<endl;
        cout<<"       --MISSION COMPLETE--                " <<endl;
        Sleep(1000);
    cout<<"\n\t                ****                                                 ";
    Sleep(1000);
	cout<<"\n\t               ******                                                ";
	cout<<"\n\t              ********                                               ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t             **********                                              ";
    Sleep(1000);
	cout<<"\n\t             **********                                              ";
	cout<<"\n\t            ************                                             ";
    Sleep(1000);
	cout<<"\n\t           **************                                            ";
	cout<<"\n\t          ****************                                           ";
    Sleep(1000);
	cout<<"\n\t         ******************                                          ";
	cout<<"\n\t        ********************                                         ";
    Sleep(1000);
	cout<<"\n\t       **********************                                        ";
	cout<<"\n\t             ***   ***                                               ";
	 
        }else{
            cout<<"usuario o password incorrectos ";
        }
    return 0;
}