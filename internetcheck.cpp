#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int reestablish()
{

    int result = 0;
    int success = 0;
    
    success = system("ping google.com");
     
    
    
    if (success == 1)
    {
           return 1;
    }
    
    else if (success = 0)
    {
           return 0;
    }
}
           
            
            

int main(int argc, char *argv[])
{
    
    while (1)
    {
    a:
    int success;
    int result = 0;
    int reply = 0;
    
        success = system("ping google.com");
       
        
    
    
    if (!success == 0)
    {
       reply = MessageBox(NULL, "INTERNET IS NOT WORKING. Press Retry to keep checking for connection to work again and cancel to exit the program","Internet Status", MB_RETRYCANCEL|MB_ICONERROR|MB_DEFBUTTON1);
    }  

    if (reply == 4)
    {
              int falseret;
             falseret = MessageBox(NULL, "Attempting Reconnection..\nProgram will run in background" , "Internet Status", MB_OK|MB_ICONINFORMATION|MB_DEFBUTTON1);
    

           int reply2 = 1;
           int tries = 1;
           while (reply2 == 1)
           {
                 cout << "STATUS: UNCONNECTED. TRIES = " << tries << "." << endl;
                 reply2 = reestablish();
                 tries++;
            } 
            
            MessageBox(NULL, "Internet Back Online!" , "Internet Status", MB_OK|MB_ICONINFORMATION|MB_DEFBUTTON1);
     }
     if (reply != 4)
      goto a;
     }    
          
           
          
      
     
     
   
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
