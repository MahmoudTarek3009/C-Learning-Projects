// Interupt signal handler

#include <iostream>
#include <csignal>

void SignalHandler (int signum) //CALL BACK function for signal handler
{
     std::cout << "Interrupt signal (" << signum << ") received.\n";

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  

}

int main (){

    signal(SIGINT, SignalHandler); // Set callback function (signal handler) for user interrupt ctrl+c
    signal(SIGTERM, SignalHandler);// Set callback function (signal handler) for termination signal

    int countdown=20;
   while(1) {
      std::cout << "Going to sleep...." << std::endl;
      sleep(1);
        std::cout<< countdown-- <<std::endl;

        if (!countdown)
        {
            raise(SIGTERM);// raise termination signal 
        }
   }

   return 0;







    return 0;
}