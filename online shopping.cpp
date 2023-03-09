#include<iostream>
using namespace std;
int main(){
    char startValue;
    char choiceAgain;
    float onlineShopping(void);
    cout<<"Please start s to start shopping"<<endl;
    start:
cin>>startValue;
   if(startValue=='s'|| startValue=='S'){
    float totalAmount=onlineShopping();
    cout<<"Total Billamount is"<<totalAmount<<endl;
    shopAgain:
    cout<<"Do you want shopping again yes(y) or no(n/N ) "<<endl;
   cin>>choiceAgain;
   if(choiceAgain=='n'|| choiceAgain=='N'){
    cout<<"Thanks for Shopping"<<endl;
    }
   
   else{
    cout<<"You have entered wrong option, please press s"<<endl;
    goto shopAgain;
   }
}
}
float onlineShopping(){
    char choice;
    char item;
    int quantity;
    float billAmount=0;
    itemlevel:
cout<<"*****************WELCOME TO ONLINE SHOPPING**********************"<<endl;
cout<<"---------------PLEASE FOLLOW THE INSTRUCTIONS-----------------"<<endl;
cout<<"(1) Please enter m to order mobile phones"<<endl;
cout<<"(2) Please enter l to order laptop"<<endl;
cout<<"(3) Please enter d to order desktop"<<endl;
cout<<"(4) Please enter s to order  speakers"<<endl;
cout<<"(5) Please enter h to order headphones"<<endl;
cin>>choice;

//MOBILE PHONES

if(choice=='m'|| choice=='M'){
    mobilelevel:
cout<<"Mobile details"<<endl;
cout<<"(1) Apple => Price: $ 400"<<endl;
cout<<"(2) Vivo => Price: $ 100"<<endl;
cout<<"(3) Oppo => Price: $ 100"<<endl;
cout<<"(4) Redmi => Price: $ 120"<<endl;
cout<<"(5) Realme => Price: $ 130"<<endl;
cout<<"(6) Samsung => Price: $ 300"<<endl;
cout<<"Please enter your choice:"<<endl;
cin>>item;
if(item=='1'){
    cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*400;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='3'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='4'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*120;   
}
else if(item=='5'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*130;   
}
else if(item=='6'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*300;   
}
else{
   cout<<"You have entered wrong option, please type again"<<endl; 
goto mobilelevel;
}
}

//DESKTOP

else if(choice=='d'|| choice=='D'){
desktoplevel:
cout<<"Desktop details"<<endl;
cout<<"(1) Apple => Price: $ 400"<<endl;
cout<<"(2) H/P=> Price: $ 100"<<endl;
cout<<"(3) SONY => Price: $ 100"<<endl;
cout<<"(4) DELL => Price: $ 120"<<endl;
cout<<"(5) Realme => Price: $ 130"<<endl;
cout<<"(6) Samsung => Price: $ 300"<<endl;
cout<<"Please enter your choice:"<<endl;
cin>>item;
if(item=='1'){
    cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*400;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='3'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='4'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*120;   
}
else if(item=='5'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*130;   
}
else if(item=='6'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*300;   
}
else{
   cout<<"You have entered wrong option, please type again"<<endl; 
goto desktoplevel;
}
}


//LAPTOPS

else if(choice=='l'|| choice=='L'){
laptoplevel:
cout<<"Laptop details"<<endl;
cout<<"(1) Apple => Price: $ 400"<<endl;
cout<<"(2) H/P=> Price: $ 100"<<endl;
cout<<"(3) SONY => Price: $ 100"<<endl;
cout<<"(4) DELL => Price: $ 120"<<endl;
cout<<"(5) Realme => Price: $ 130"<<endl;
cout<<"(6) Samsung => Price: $ 300"<<endl;
cout<<"Please enter your choice:"<<endl;
cin>>item;
if(item=='1'){
    cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*400;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='3'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='4'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*120;   
}
else if(item=='5'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*130;   
}
else if(item=='6'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*300;   
}
else{
   cout<<"You have entered wrong option, please type again"<<endl; 
goto laptoplevel;
}
}

//HEADPHONES

else if(choice=='h'|| choice=='H'){
headphonelevel:
cout<<"Headphone details"<<endl;
cout<<"(1) Apple => Price: $ 400"<<endl;
cout<<"(2) SKULL CANDY=> Price: $ 100"<<endl;
cout<<"(3) BOAT => Price: $ 100"<<endl;
cout<<"(4) NOISE => Price: $ 120"<<endl;
cout<<"(5) Realme => Price: $ 130"<<endl;
cout<<"(6) Samsung => Price: $ 300"<<endl;
cout<<"Please enter your choice:"<<endl;
cin>>item;
if(item=='1'){
    cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*400;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='3'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='4'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*120;   
}
else if(item=='5'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*130;   
}
else if(item=='6'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*300;   
}
else{
   cout<<"You have entered wrong option, please type again"<<endl; 
goto headphonelevel;
}
}

//SPEAKER

else if(choice=='s'|| choice=='S'){
speakerlevel:
cout<<"Speaker details"<<endl;
cout<<"(1) Apple => Price: $ 400"<<endl;
cout<<"(2) H/P=> Price: $ 100"<<endl;
cout<<"(3) SONY => Price: $ 100"<<endl;
cout<<"(4) DELL => Price: $ 120"<<endl;
cout<<"(5) Realme => Price: $ 130"<<endl;
cout<<"(6) Samsung => Price: $ 300"<<endl;
cout<<"Please enter your choice:"<<endl;
cin>>item;
if(item=='1'){
    cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*400;
}
else if(item=='2'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='3'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*100;   
}
else if(item=='4'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*120;   
}
else if(item=='5'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*130;   
}
else if(item=='6'){
 cout<<"Enter quantity"<<endl;
    cin>>quantity;
billAmount=billAmount+ quantity*300;   
}
else{
   cout<<"You have entered wrong option, please type again"<<endl; 
goto speakerlevel;
}
}
else{
  cout<<"You have entered wrong option, please type again"<<endl; 
goto itemlevel;
}  


return billAmount;
}
