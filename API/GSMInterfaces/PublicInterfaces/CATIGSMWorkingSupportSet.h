/* -*-c++-*- */

// 
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


//---------------------------------------------------------------------
// Historic:
// Creation     : 00/07/03 > Support Sets Access
// Modification : 02/07/15 > CAA L0 exposition  
// Modification : 05/03/03 > CAA L1 exposition  
//---------------------------------------------------------------------
//  CATIGSMWorkingSupportSet.h
//---------------------------------------------------------------------


#ifndef CATIGSMWorkingSupportSet_H
#define CATIGSMWorkingSupportSet_H

#include "CATICkeParm.h"
#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
class CATISpecObject_var;
class CATIGSMWorkingSupport_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMWorkingSupportSet;
#else
extern "C" const IID IID_CATIGSMWorkingSupportSet;
#endif

/**
 * Working support set feature.
 * <b>Role</b> : allows to manipulate the working supports of the model
 * @see CATIGSMWorkingSupportFactory#GetWorkingSupportSet
 */
class ExportedByCATGitInterfaces CATIGSMWorkingSupportSet: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
   /**
    *   Gets all working supports.
    *   @return
    *	 The list of the working supports in the model
    */
   virtual CATLISTV(CATBaseUnknown_var)* GetWorkingSupports() = 0;
   /**
    *   Adds a working support in the list.
    *   @param ispSupport 
    *      Working support object 
    *   @param iSetState  
    *      <br> iSetState = 1 for setting as current 
    *      <br> iSetState = 0 either 
    *      <br>Note : default SetState= 1 
    */
   virtual HRESULT AppendWorkingSupport(const CATIGSMWorkingSupport_var& ispSupport, int iSetState=1) = 0;
   /**
    *   Gets the current working support.
    *   @param ospSupport 
    *      Working support object 
    */
   virtual HRESULT GetCurrentWorkingSupport(CATIGSMWorkingSupport_var& ospSupport) = 0;
   /**
    *   Sets the current working support.
    *   @param ispSupport 
    *      Working support object 
    */
   virtual HRESULT SetCurrentWorkingSupport(const CATIGSMWorkingSupport_var& ispSupport) = 0;
   /**
    *   Asks whether the given working support is the active one.
    *   @param ispSupport 
    *      Working support object 
    *   @return 
    *      <br> TRUE  = if Working Support is current 
    *      <br> FALSE = if Working Support is NOT current one  
    */
   virtual CATBoolean IsCurrentWorkingSupport(const CATIGSMWorkingSupport_var& ispSupport) = 0;
   /**
    *   Removes a working support in the list. 
    *   If it is a current working support then there will no more be current working support.
    *   @param ispSupport 
    *      Working support object 
	*/
   virtual HRESULT RemoveWorkingSupport(const CATIGSMWorkingSupport_var& ispSupport) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMWorkingSupportSet, CATBaseUnknown );

#endif
