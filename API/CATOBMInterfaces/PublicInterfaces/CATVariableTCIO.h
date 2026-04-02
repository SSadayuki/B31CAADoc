#ifndef CATIVariableTCIO_H
#define CATIVariableTCIO_H
//
// COPYRIGHT Dassault Systemes 2001
//
/**
* @CAA2Level L1
* @CAA2Usage U1
*/
#ifndef TCIO_DEF
#define TCIO_DEF
/**
* Specification on variable to define its quality.
* <b>Role:</b>The attribute quality is a parameter that allows to specify 
* the role played by a variable.
* @param tio_ANY
*         Use when the quality of the variable can be either IN, OUT or NEUTRAL
* @param tio_IN
*         qualifies an input variable for a behavior
* @param tio_OUT
*         qualifies an output variable of a behavior
* @param tio_NEUTRAL
*         qualifies an internal variable, used during behavior computations.
*/
enum TCIO  {tio_ANY=0, tio_IN=1,tio_OUT=2,tio_NEUTRAL=3};
#endif 
//------------------------------------------------------------------
#endif
