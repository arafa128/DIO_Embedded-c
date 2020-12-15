/****************************************************************/
/*   Author             :    ABDELRHMAN ARAFA 				    */
/*	 Date 				:    7 SEPTEMBER 2020					*/
/*	 Version 			:    1.0V 							 	*/
/*	 Description 		:   Progam algorithm for DIO Peripheral	*/
/*									 [interface.c]			    */
/****************************************************************/

/****************************************************************/
/* Description   : Guard to protect this File from include more */
/*                 than one time .                              */
/****************************************************************/

#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H

/* Pin Direction */

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								Copy_u8Direction	 			*/
/*					 return : void		 						*/
/****************************************************************/
void DIO_voidSetPinDirection  ( u8 Copy_u8PORT , u8 Copy_u8PIN ,  u8 Copy_u8Direction );

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								Copy_u8Value	 			    */
/*					 return : void		 						*/
/****************************************************************/
void DIO_voidSetPinValue      ( u8 Copy_u8PORT , u8 Copy_u8PIN , u8 Copy_u8Value      );

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/
u8   DIO_u8GetSetPinValue     ( u8 Copy_u8PORT , u8 Copy_u8PIN                        );

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8PIN ,		*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/
void DIO_voidTogglePin        ( u8 Copy_u8PORT , u8 Copy_u8PIN                        );

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8Direction ,	*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/
void DIO_voidSetPortDirection ( u8 Copy_u8PORT , u8 Copy_u8Direction                  );

/****************************************************************/
/* Description    :  This function used to Set pin Direction	*/
/*					 Inputs : Copy_u8PORT , Copy_u8Value ,		*/
/*								                	 			*/
/*					 return : void		 						*/
/****************************************************************/
void DIO_voidSetPortValue     ( u8 Copy_u8PORT , u8 Copy_u8Value                      );





#define       PORTA        0
#define       PORTB        1
#define       PORTC        2
#define       PORTD        3


#define       PIN0         0
#define       PIN1         1
#define       PIN2         2
#define       PIN3         3
#define       PIN4         4
#define       PIN5         5
#define       PIN6         6
#define       PIN7         7


#define       OUTPUT       1
#define       INPUT        0


#define		  HIGH		   1
#define		  LOW		   0


#endif /** !comment  :  End of guard                            **/ 