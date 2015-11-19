#include <iostream>

using namespace std;

int main()
    {
   int x, y;
   int cont;
        cont=0;
        cout<<"Scrivi il numero intero da moltiplicare"<<endl;
        cin>>x;

        cout<<"Scrivi il valore dell'esponente"<<endl;
        cin>>y;
        cont=y;
        while(cont<=y)
        {
            cont++;
            x=x*x;
        }
        cout<<x<<endl;
        

system("pause");

    return 0;
}
