/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef CAT_LINKSOLVE_ERROR_H
#define CAT_LINKSOLVE_ERROR_H

///////////////////////////////////////////////////////////////////////////////
//    PROJET:............CNEXT                                               //
//    FRAMEWORK:.........Object Modeler Base                                 //
//    AUTEUR:............La bande a Jacques                                  //
//    DATE:..............28/01/1998                                          //
//             -----------------------------------------------               //
//    AUTEUR:............                                                    //
//    MODIF:.............                                                    //
//    DATE:..............  /  /1998                                          //
///////////////////////////////////////////////////////////////////////////////

// ==========================================================================
//      Include Exception definitions file for ObjectModeler FrameWork
//
//    Rq : Ce fichier est necessaire tant que l'exec msgp necessitera
//         un fichier ".h" par classe declare dans le fichier ".msg"
// ==========================================================================
//   Besides, we attach to the error some useful informations :
//    - the Name of the Document which could not be found
//    - ...

#include "AD0XXBAS.h"
#include "CATErrors.h"


class ExportedByAD0XXBAS CATLinkSolveError : public CATInternalError
{
  public:

    CATDeclareErrorClass( CATLinkSolveError, CATInternalError )

// Name of the Document which could not be found
    CATUnicodeString DocName;

};
   


#endif
