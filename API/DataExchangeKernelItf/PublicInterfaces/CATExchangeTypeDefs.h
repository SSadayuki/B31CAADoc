//==================================================================
//
//  Classe: Neant
//  Auteur: Bremond Alain
//  Date de creation : 16/10/2002
//
//  Description:
//      XCAD enums and defines related to the XCAD Kernel (Document and Representation interfaces)
//
//  COPYRIGHT DASSAULT SYSTEMES 2003
//
//==================================================================
//
#ifndef CATExchangeTypeDefs_H_
#define CATExchangeTypeDefs_H_
//
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//==================================================================
//
/**
 * Definition of XCAD Core API enumerated Types and Define (Kernel only!!)
 * @param FilePath
 * Is a Multiple Byte Character String 
 * @param URL
 * Is a Multiple Byte Character String 
 * @param Date
 * Is a Multiple Byte Character String 
 */

#include "CATUnicodeString.h"

typedef CATUnicodeString FilePath;
typedef CATUnicodeString URL;
typedef CATUnicodeString Date;

#endif
