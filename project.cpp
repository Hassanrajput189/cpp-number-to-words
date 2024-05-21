#include<iostream>
#include<conio.h>
using namespace std;

class Num_to_char{
    int number;
    string ones[10]={" ","one","two","three","four","five","six","seven","eight","nine"};
    string tens[10]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string teens[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
public:
    int setnum(int num){
        cin>>num;
        number =num;
        return number;
    }
    string getnum(){
        if(number==0){
            return "zero";
         }
        else if(number <10){
            return(ones[number]);
        }
        else if(number<20){
            return(teens[number-10]);
        }
        else if(number<100){
            return(tens[number/10]+ones[number%10]);
        }
        else if(number<1000){
           return(ones[number/100]+" hundred "+tens[(number/10)%10]+ones[number%10]);
        }
        else if(number<5000){
            return(ones[number/1000]+" thousand "+ones[(number/100)%10]+" hundred "+tens[(number/10)%10]+ones[number%10]);
        }
        else if(number<10000){
            return(ones[number/1000]+" thousand "+ones[(number/100)%10]+" hundred "+tens[(number/10)%10]+ones[number%10]);
        }
        else if(number >-10){
            return("Negative number");
        }
        else{
            return ("Number out of range");
        }
    } 
};
int main(){
    Num_to_char n;
    int x;
    char ch;
    do{
        cout<<"Enter number: ";
        n.setnum(x);
        cout<<n.getnum();
        cout<<"\nEnter 'y' for another number or any other key to exit"<<endl;
        ch=getch();
    }while(ch=='y' || ch=='Y');
    return 0;
}
