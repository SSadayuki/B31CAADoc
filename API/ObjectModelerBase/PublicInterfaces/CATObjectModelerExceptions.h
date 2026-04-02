/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef CAT_OBJECT_MODELER_EXCEPTIONS_H
#define CAT_OBJECT_MODELER_EXCEPTIONS_H

///////////////////////////////////////////////////////////////////////////////
//    PROJET:............CNEXT                                               //
//    FRAMEWORK:.........Object Modeler                                      //
//    AUTEUR:............La bande a Jacques                                  //
//    DATE:..............06/05/1996                                          //
//             -----------------------------------------------               //
//    AUTEUR:............nll                                                 //
//    MODIF:.............Ajout de CATLinkSolveError                          //
//    DATE:..............29/01/1998                                          //
///////////////////////////////////////////////////////////////////////////////

// ==========================================================================
//            Exception classes definition for ObjectModeler FrameWork
// ==========================================================================

// --------------------------------------------------------------------------
//                         Export for Window NT
// --------------------------------------------------------------------------

#include "AD0XXBAS.h"


// --------------------------------------------------------------------------
//                          Exception services
// --------------------------------------------------------------------------

#include "CATErrors.h"

//===================================================================================
//                         Linking  Exception
//===================================================================================

#include "CATLinkSolveError.h"

//===================================================================================
//                         Handler  Exception
//===================================================================================

class ExportedByAD0XXBAS CATHandlerError : public CATInputError
{
  public:
    //
    // --> Macro from Exception services
    //
//nll
//    CATDeclareErrorClass( CATHandlerError, CATInternalError )
    CATDeclareErrorClass( CATHandlerError, CATInputError )
};

#endif
