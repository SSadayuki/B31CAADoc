/* -*-c++-*- */
#ifndef CATIGSMPlaneExplicit_H
#define CATIGSMPlaneExplicit_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"

class CATISpecObject_var; 


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMPlaneExplicit;
#else
extern "C" const IID IID_CATIGSMPlaneExplicit;
#endif
/**
 * Interface to explicit plane feature. 
 * <b>Role</b>: Allows you to access data of the plane feature created without history
 * @see CATIGSMFactory#CreatePlaneExplicit
 */
class ExportedByCATGitInterfaces CATIGSMPlaneExplicit : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
   /**
    * Gets plane Origine.
    *   @param oCoord 
    *      origin coordinates 
    */
   virtual HRESULT Origin    (double  *& oCoord) = 0;

   /**
    * Gets plane First Direction.
    *   @param oCoord 
    *      first axis coordinates 
    */
   virtual HRESULT FirstAxis  (double  *& oCoord) = 0;


   /**
    * Gets plane Second Direction.
    *   @param oCoord 
    *      second axis coordinates 
    */
   virtual HRESULT SecondAxis (double  *& oCoord) = 0;

};
CATDeclareHandler (CATIGSMPlaneExplicit, CATBaseUnknown);
#endif
