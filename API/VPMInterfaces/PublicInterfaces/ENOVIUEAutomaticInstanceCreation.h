//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================
// VPM (c) Copyright Dassault Systemes 2002               
//================================================================= 

#ifndef ENOVIUEAutomaticInstanceCreation_H
#define ENOVIUEAutomaticInstanceCreation_H

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUEAutomaticInstanceCreation;
#else
extern "C" const IID IID_ENOVIUEAutomaticInstanceCreation ;
#endif
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Interface called on an ItemInstance if it has been automatically created (not through the gui directly)
 * AFTER the attributes have been valuated by the Product structure modeler
 */
class ExportedByGUIDVPMInterfaces ENOVIUEAutomaticInstanceCreation : public CATBaseUnknown
{
   //
   CATDeclareInterface;
   //
   public:

         /**
          *  Method called after this instance has been automatically created and after
          *  the ProductStructure modeler has valuated its attributes
          *
          *   the status to be returned by the method : <br>
          *   E_FAIL if there was a problem <br>
          *   S_OK   if everything was right<br>
          */
          virtual HRESULT onAfterAutomaticCreation() = 0 ;

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIUEAutomaticInstanceCreation, CATBaseUnknown);
//
#endif
