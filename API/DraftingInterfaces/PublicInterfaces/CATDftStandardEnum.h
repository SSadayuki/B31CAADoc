#ifndef CATDftStandardEnum_H
#define CATDftStandardEnum_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//==============================================================================
//                                   CATIA - Version 5
//	COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// FILENAME    :    CATDftStandardEnum.h
// LOCATION    :    DraftingInterfaces\ProtectedInterfaces
// AUTHOR      :    DVR
// DATE        :    August 2001
//------------------------------------------------------------------------------
// DESCRIPTION :    Enums for Standard Management
//
//------------------------------------------------------------------------------
// COMMENTS    :    
//                  
//------------------------------------------------------------------------------
// MODIFICATIONS    user       date      purpose
//------------------------------------------------------------------------------

/**
* Defines Standard parameter types
*/

enum CATDftStandardValueType {
                                DftStdUnknown,
                                DftStdUndefined,
                                DftStdBoolean,
                                DftStdInteger,
                                DftStdDouble,
                                DftStdCharacter,
                                DftStdString,
                                DftStdEnum,
                                DftStdComplex
                                                  };

#endif
