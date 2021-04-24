#define cPORTB *((volatile byte*) 0x25)
#define cDIRB  *((volatile byte*) 0x24)

void cSetup() 
{
  cDIRB = 32;
}

int main(){
  while(1)
  {
    cSetup();
    cPORTB = 32;  
    
    for (long i =0; i < 1000000; i++)
    {
      cPORTB = 32;
    }
    
    cPORTB = 0;
    
    for (long i =0; i < 1000000; i++)
    {
      cPORTB = 0;
    }
  }
}  
  
 
