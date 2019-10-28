#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int hr,mnt,sec,units,tens;
void main()
{
   DDRA=0Xff;
   DDRD=0Xff;
   DDRC=0xff;
  // DDRB=0x00;
   //PORTB=(1<<PA7)
   ;
   
   while(1)
      {   
	         
			       
			     for(hr=0;hr<24;)
				     {    
					    for(mnt=0;mnt<59;)
						  {
						      for(sec=0;sec<59;)
							      {
			           
					                  sec++;
					     	         units=sec%10;
					     	          tens=sec/10;
					     	          PORTD=tens;
 					    	         PORTD |=(units<<4);
            						   _delay_ms(1); 
   
						            }

									    mnt++;
						                             units=mnt%10;
										tens=sec/10;
										PORTC=tens;
										PORTC |=(units<<4);
										_delay_ms(1);



										}

                                                     hr++;
						    units=hr%10;
						    tens=hr/10;
					        PORTA=tens;
						    PORTA |=(units<<4);
						    _delay_ms(1);
						  
                     }
					 


						 
								

								

         }
}
