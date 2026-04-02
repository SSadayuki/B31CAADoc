// COPYRIGHT DASSAULT SYSTEMES 2000
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

//===================================================================
//
// CATMldAssociateType.h
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//  20/07/2000 : fdm; Creation 
//  27/02/2001 : bga; Gestion des contraintes sur axe quelconque.
//  09/01/2002 : fdm; Rename include CATMldType.h => CATMldAssociateType.h
//===================================================================

#ifndef CATMldAssociateType_H
#define CATMldAssociateType_H

//----------------------------------------------------------------------
/**
 * Association constraint direction
 * @param MldAssNONE
 *   No association is defined
 * @param MldAssAXISX
 *   We use the X axis to create the association
 * @param MldAssAXISY
 *   We use the Y axis to create the association
 * @param MldAssAXISZ
 *   We use the Z axis to create the association
 * @param MldAssDirection
 *   We use the any axis to create the association
 */
enum CATMldAssociateType 
{
  MldAssNONE=0,		
  MldAssAXISX,		
  MldAssAXISY,	
  MldAssAXISZ,		
  MldAssDirection	
};
 
//----------------------------------------------------------------------

#endif
