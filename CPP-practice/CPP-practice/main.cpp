// Conditonal Operator
#include <iostream>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    
//    char first_name[20] {};
//    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
//    
//    
//    //cout<<first_name<<endl;
//    cout<<"Enter your first name ";
//    cin>>first_name;
//    
//    
//    cout<<"Enter your last name ";
//    cin>>last_name;
//    
//    cout<<"--------------------"<<endl;
//    
//    cout<<"Hello, "<<first_name<<" has " <<strlen(first_name) <<"  characters "<<endl;
//    cout<<" and your last name has " <<strlen(last_name)<<" characters "<<endl;
//    
//    strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    cout<<"Your full name is " <<full_name<<endl;

      cout<<"Enter your full name ";
      cin.getline(full_name,50);
      cout<<"Your full name is "<<full_name<<endl;
      
      
      cout<<"-------------------"<<endl;
      
      strcpy(temp, full_name);
      
      cout<<"Name in Temp is "<<temp<<endl;
      
      cout<<"Compare the names "<<endl;
      
      if (strcmp(temp, full_name) == 0) {
          cout<<"Both the names are same"<<endl;
      }
      else {
          
      cout<<"Both the name are different ";
      }
      
      for (size_t i {}; i < strlen(full_name); i++) {
          if (isalpha(full_name[i])) {
              full_name[i] = toupper(full_name[i]);
          }
      }
      
      cout<<"FULL NAME IS  "<<full_name<<endl;
      
      cout<<"----------------------------"<<endl;
      cout<<"Result of comparing is "<<strcmp(temp, full_name)<<endl;
      
      
      


    
    
    
    
    
    
}