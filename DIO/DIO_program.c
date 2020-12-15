/****************************************************************/
/*   Author             :    ABDELRHMAN ARAFA 				    */
/*	 Date 				:    7 SEPTEMBER 2020					*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   Progam algorithm for DIO Peripheral	*/
/*									 [program.c]			    */
/****************************************************************/

/****************************************************************/
/**********************  LIB DIRECTIVE  *************************/
/****************************************************************/

#include "STD_TYPES.h"
#include "Bit_Math.h" 

/****************************************************************/
/*********************  DIO Component DIRECTIVES  ***************/
/****************************************************************/

#include "DIO_interface.h"
#include "DIO_private.h"

/****************************************************************/
/*********************** Function Implementation  ***************/
/****************************************************************/



/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								Copy_u8Direction	 			*/
/*					 return : void		 						*/
/****************************************************************/

void DIO_voidSetPinDirection  ( u8 Copy_u8PORT , u8 Copy_u8PIN ,  u8 Copy_u8Direction )
{
	/* Range check */
	if (((Copy_u8PORT < 4)  && (Copy_u8PIN < 8) ))
	{
		if (Copy_u8Direction == OUTPUT)
		{
			switch(Copy_u8PORT)
			{
				case PORTA : SET_BIT(DDRA_REG ,Copy_u8PIN); break;
				case PORTB : SET_BIT(DDRB_REG ,Copy_u8PIN); break;
				case PORTC : SET_BIT(DDRC_REG ,Copy_u8PIN); break;
				case PORTD : SET_BIT(DDRD_REG ,Copy_u8PIN); break;
			}
		}
		else if (Copy_u8Direction == INPUT)
		{
			switch(Copy_u8PORT)
			{
				case PORTA : CLR_BIT(DDRA_REG ,Copy_u8PIN); break;
				case PORTB : CLR_BIT(DDRB_REG ,Copy_u8PIN); break;
				case PORTC : CLR_BIT(DDRC_REG ,Copy_u8PIN); break;
				case PORTD : CLR_BIT(DDRD_REG ,Copy_u8PIN); break;
			}
		}else
		{/*    Do Nothing  */}
	}
	else
	{/*    Do Nothing  */}
}

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								Copy_u8Value	 			    */
/*					 return : void		 						*/
/****************************************************************/

void DIO_voidSetPinValue      ( u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Value      )
{
	/* Range check */
	if (((Copy_u8PORT < 4)  && (Copy_u8PIN < 8) ))
	{
		if (Copy_u8Value == HIGH)
		{
			switch(Copy_u8PORT)
			{
				case PORTA : SET_BIT(PORTA_REG,Copy_u8PIN); break;
				case PORTB : SET_BIT(PORTB_REG,Copy_u8PIN); break;
				case PORTC : SET_BIT(PORTC_REG,Copy_u8PIN); break;
				case PORTD : SET_BIT(PORTD_REG,Copy_u8PIN); break;
			}
		}
		else if (Copy_u8Value == LOW) 
		{
			switch(Copy_u8PORT)
			{
				case PORTA : CLR_BIT(PORTA_REG,Copy_u8PIN); break;
				case PORTB : CLR_BIT(PORTB_REG,Copy_u8PIN); break;
				case PORTC : CLR_BIT(PORTC_REG,Copy_u8PIN); break;
				case PORTD : CLR_BIT(PORTD_REG,Copy_u8PIN); break;
			}
		}else 
		{ /* Do nothing */ }
	}
	else
	{/*     Do Nothing    */}
}

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/

u8   DIO_voidGetPinValue     ( u8 PORT_ID , u8 PIN_ID                        )
{
	/* Define Local Variable to get the BIT Value */
	u8 Local_u8ReturnValue = 0;
	/* Make sure that the Port ID and Pin ID are in the valid range */
	if ((PORT_ID < 4) && (PIN_ID < 8))
	{
		/* Check on the Required PORT Number */
		switch(PORT_ID)
			{
				case PORTA : Local_u8ReturnValue = GET_BIT(PINA_REG , PIN_ID); break;
				case PORTB : Local_u8ReturnValue = GET_BIT(PINB_REG , PIN_ID); break;
				case PORTC : Local_u8ReturnValue = GET_BIT(PINC_REG , PIN_ID); break;
				case PORTD : Local_u8ReturnValue = GET_BIT(PIND_REG , PIN_ID); break;
			}
	}
	else
	{
		/* return 0xff in case of error in the Pin ID or PORT ID */
		Local_u8ReturnValue = 0xFF;
	}

	return Local_u8ReturnValue ;
}

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/

void DIO_voidTogglePin        ( u8 Copy_u8PORT , u8 Copy_u8PIN                        )
{
	
}

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8Direction ,	*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/

void DIO_voidSetPortDirection ( u8 Copy_u8PORT , u8 Copy_u8Direction                  )
{
	if (Copy_u8PORT<4)
		 switch(Copy_u8PORT)
		 {
		     case PORTA : DDRA_REG = Copy_u8Direction ; break;
		     case PORTB : DDRB_REG = Copy_u8Direction ; break;
		     case PORTC : DDRC_REG = Copy_u8Direction ; break;
		     case PORTD : DDRD_REG = Copy_u8Direction ; break;
		 }
}

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8Value ,		*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/

void DIO_voidSetPortValue     ( u8 Copy_u8PORT , u8 Copy_u8Value                      )
{
	if (Copy_u8PORT<4)
		switch(Copy_u8PORT)
		{
			 case PORTA : PORTA_REG = Copy_u8Value ; break;
			 case PORTB : PORTB_REG = Copy_u8Value ; break;
			 case PORTC : PORTC_REG = Copy_u8Value ; break;
			 case PORTD : PORTD_REG = Copy_u8Value ; break;
		}
}