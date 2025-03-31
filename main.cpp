#include<iostream>
using namespace std;

int main(){
    int quant;//quantity
    int choice;

    //Q means Quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;

    //S means Sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;

    //total price of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;

    cout<<"\n\t ------------------------Quantity of items we have-------------------";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Shakes: ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken-Roll: ";
    cin>>Qchicken;
    m:
    cout<<"\n\t\t\t Please select from the menu options: ";
    cout<<"\n\n 1)Rooms";
    cout<<"\n 2)Pasta";
    cout<<"\n 3)Burger";
    cout<<"\n 4)Noodles";
    cout<<"\n 5)Shake";
    cout<<"\n 6)Chicken-Roll";
    cout<<"\n 7)Information regarding sales and collection ";
    cout<<"\n 8)Exit";

    cout<<"\n\n Please Enter your choice:\n";
    cin>>choice;

    switch(choice){
        case 1:
           cout<<"\n\n Enter the number of rooms you want: ";

           cin>>quant;
           if(Qrooms-Srooms>=quant){
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<" rooms have been alloted to you!";
           }
           else{
            cout<<"\n\t Only "<<Qrooms-Srooms<<" Rooms are remaining in hotel";
           }
           break;
        case 2:
           cout<<"\n\n Enter Pasta Quantity: ";

           cin>>quant;
           if(Qpasta-Spasta>=quant){
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
           }
           else{
            cout<<"\n\t Only "<<Qpasta-Spasta<<" Pasta remaining in hotel";
           }
           break;
        case 3:
           cout<<"\n\n Enter Burger Quantity: ";

           cin>>quant;
           if(Qburger-Sburger>=quant){
            Sburger=Sburger+quant;
            Total_burger=Total_burger+quant*120;
            cout<<"\n\n\t\t"<<quant<<" burger is the order!";
           }
           else{
            cout<<"\n\t Only "<<Qburger-Sburger<<" burger remaining in hotel";
           }
           break;
        case 4:
           cout<<"\n\n Enter Noodles Quantity: ";

           cin>>quant;
           if(Qnoodles-Snoodles>=quant){
            Snoodles=Snoodles+quant;
            Total_noodles=Total_noodles+quant*120;
            cout<<"\n\n\t\t"<<quant<<" noodles is the order!";
           }
           else{
            cout<<"\n\t Only "<<Qburger-Sburger<<" noodles remaining in hotel";
           }
           break;
        case 5:
           cout<<"\n\n Enter Shakes Quantity: ";

           cin>>quant;
           if(Qshake-Sshake>=quant){
            Sshake=Sshake+quant;
            Total_shake=Total_shake+quant*120;
            cout<<"\n\n\t\t"<<quant<<" shakes is the order!";
           }
           else{
            cout<<"\n\t Only "<<Qshake-Sshake<<" shakes remaining in hotel";
           }
           break;
        case 6:
           cout<<"\n\n Enter Chicken roll Quantity: ";

           cin>>quant;
           if(Qchicken-Schicken>=quant){
            Schicken=Schicken+quant;
            Total_chicken=Total_chicken+quant*120;
            cout<<"\n\n\t\t"<<quant<<" chicken-rolls is the order!";
           }
           else{
            cout<<"\n\t Only "<<Qchicken-Schicken<<" chicken-rolls remaining in hotel";
           }
           break;
        case 7:
          cout<<"\n\t\t ----------------Details of sales and collection--------------- ";
          cout<<"\n\n Number of rooms we had: "<<Qrooms;
          cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
          cout<<"\n\n Remaining rooms: "<<Qrooms-Srooms;
          cout<<"\n\n Total Rooms collection for the day: "<<Total_rooms;
          cout<<endl;

          cout<<"\n\n Number of pasta we had: "<<Qpasta;
          cout<<"\n\n Number of pasta we sold: "<<Spasta;
          cout<<"\n\n Remaining pastas: "<<Qpasta-Spasta;
          cout<<"\n\n Total Pasta collection for the day: "<<Total_pasta;
          cout<<endl;

          cout<<"\n\n Number of burger we had: "<<Qburger;
          cout<<"\n\n Number of burger we sold: "<<Sburger;
          cout<<"\n\n Remaining burger: "<<Qburger-Sburger;
          cout<<"\n\n Total burger collection for the day: "<<Total_burger;
          cout<<endl;

          cout<<"\n\n Number of Noodles we had: "<<Qnoodles;
          cout<<"\n\n Number of Noodles we sold: "<<Snoodles;
          cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
          cout<<"\n\n Total Noodles collection for the day: "<<Total_noodles;
          cout<<endl;

          cout<<"\n\n Number of Shakes we had: "<<Qshake;
          cout<<"\n\n Number of Shakes we sold: "<<Sshake;
          cout<<"\n\n Remaining Shakes: "<<Qshake-Sshake;
          cout<<"\n\n Total Shakes collection for the day: "<<Total_shake;
          cout<<endl;

          cout<<"\n\n Number of Chicken-roll we had: "<<Qchicken;
          cout<<"\n\n Number of Chicken-roll we sold: "<<Schicken;
          cout<<"\n\n Remaining Chicken-roll: "<<Qchicken-Schicken;
          cout<<"\n\n Total Chicken-roll collection for the day: "<<Total_chicken;
          cout<<endl;
          cout<<"Total collection of the day: "<<Total_rooms+Total_burger+Total_pasta+Total_noodles+Total_shake+Total_chicken;
          break;
        case 8:
         exit(0);
        default:
         cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;
}