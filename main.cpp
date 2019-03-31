/* 
 * File:   Quadratic Equation Solver Homework.cpp
 * Author: USER
 *
 * Created on January 26, 2019, 9:26 PM
 */
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double a;
    double b;
    double c;
    double tempInRoot;
    double inRoot;
    double root_minus;
    double root_plus;
    char sentence;
    double tempB;
    double rooted;
  cin>> a>>b>>c;
  /*NO ROOTS*/
  if ((a==0) && (b==0))
  {   /*if c is negative*/
      if(c<0){
      cout<< a<<"x^2 + "<< b << "x " <<"- "<<fabs(c)<<" = 0"<<endl;
      cout<<"Unable to determine root(s)."<<endl;
      }
      /*if c is positive*/
      else if(c>=0){
      cout<< a<<"x^2 + "<< b << "x " <<"+ "<<fabs(c)<<" = 0"<<endl;
      cout<<"Unable to determine root(s)."<<endl;
      }
  }
  /*if there is only one root */
  else if (a==0){
          root_minus=-c/b;
           if (c<0){        
          cout<< a<<"x^2 + "<< b << "x " <<"- "<<fabs(c)<<" = 0"<<endl;  /* */
           }
           else if(c>=0){       
          cout<< a<<"x^2 + "<< b << "x + " << c<<" = 0"<<endl;  /* */
           }
          cout<<"x = "<<root_minus<<endl;          
  }
  
  /*Real or Imaginary Roots*/
  else{
      
      tempB= -b;
      inRoot= (b*b) - (4*a*c);
      
      /*Imaginary Roots*/  
      if (inRoot<0){
            tempInRoot = - (b*b) + (4*a*c);
            inRoot = tempInRoot;
            rooted = sqrt(inRoot)/(2*a);
            tempB = tempB/(2*a);
                /*ax^+bx+c*/
                if(c>=0 && b>=0){
                    cout<< a<<"x^2 + "<< b << "x + " << c<<" = 0"<<endl;
                    }
                /*ax^+bx-c*/
                else if( c<0 && b>=0){
                    cout<< a<<"x^2 + "<< b << "x " <<"- "<<fabs(c) <<" = 0"<<endl;
                }
                else if(b<0 && c>=0){
                    cout<< a<<"x^2 - "<< fabs(b) << "x " <<"+ "<<fabs(c) <<" = 0"<<endl;
                }
             else if(b<0 && c<0){
                    cout<< a<<"x^2 - "<< fabs(b) << "x " <<"- "<<fabs(c) <<" = 0"<<endl;
                }
           /*Imaginary numbers: negative root*/
            if (rooted<0){
            cout<<"x = "<<tempB<< " + " <<fabs(rooted)<< "i"<<endl;
            cout<<"x = "<<tempB<<" - "<< fabs(rooted)<< "i"<<endl;
                
            }
            /*Imaginary number with positive root*/
             else{
            cout<<"x = "<<tempB<< " - " <<fabs(rooted)<< "i"<<endl;
            cout<<"x = "<<tempB<<" + "<< fabs(rooted)<< "i"<<endl;
                        }
           
        } 
      /*real roots*/
        else{
            rooted = sqrt(inRoot);
            root_minus = (tempB - rooted)/(2*a);
            root_plus = (tempB + rooted)/(2*a);
            /*there is only one real solution*/
            if (rooted==0){
                if(b<0){
                cout<<a<<"x^2 "<<"- "<<fabs(b)<<"x + " << c<<" = 0"<<endl;
                cout<<"x = "<<root_minus<<endl;
                }
                else{
                    cout<<a<<"x^2 "<<"+ "<<fabs(b)<<"x + " << c<<" = 0"<<endl;
                    cout<<"x = "<<root_minus<<endl;
                }
            }
            
            else if(c>=0 && b>=0){
                cout<<a<<"x^2 + "<<b<<"x + " << c<<" = 0"<<endl;
                cout<<"x = "<<root_minus<<endl;
                cout<<"x = "<<root_plus<<endl;
                            }
            
            else if (b<0 && c>=0){
                cout<<a<<"x^2 "<<"- "<<fabs(b)<<"x + " << c<<" = 0"<<endl;
                cout<<"x = "<<root_minus<<endl;
                cout<<"x = "<<root_plus<<endl;
                            }
            else if (b<0 && c<0){
                cout<<a<<"x^2 "<<"- "<<fabs(b)<<"x " <<"- "<< fabs(c)<<" = 0"<<endl;
                cout<<"x = "<<root_minus<<endl;
                cout<<"x = "<<root_plus<<endl;
                            }
            else if (b>=0 && c<0){
                cout<<a<<"x^2 + "<<b<<"x " <<"- "<<fabs(c)<<" = 0"<<endl;
                cout<<"x = "<<root_minus<<endl;
                cout<<"x = "<<root_plus<<endl;
                            }
             
            
        }
  }
  
    return 0;
}
