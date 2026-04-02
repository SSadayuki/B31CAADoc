// -*- C++ -*-
#ifndef _ENOVIGraphManagement_H
#define _ENOVIGraphManagement_H
//------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 2005
//------------------------------------------------------------------------------
// Interface  : ENOVIGraphManagement
//------------------------------------------------------------------------------
//


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


/**
 * Interface to perform graph operations on ENOVIA objects.
 * <b>Role</b>: ENOVIGraphManagement is implemented by the FactoryManager singleton
 * which you can get by calling VPMSession::GetVPMObjectFactory.
 * 
 * This interface is implemented  and ready to be used.
 */

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATUnicodeString;
class CATIVpmGraphMng_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces const IID IID_ENOVIGraphManagement;
#else
extern "C" const IID IID_ENOVIGraphManagement;
#endif

class ExportedByGUIDVPMInterfaces ENOVIGraphManagement : public CATBaseUnknown
{
	 CATDeclareInterface ;
	 
public :

  /**
   * Change the status of a VPMObject.
   *  @param iObject
   *   a VPMObject whose status you want to change
   *  @param iTransition
   *   the name of the transition you want the object to go through.
   *   From the start status, the object may reach several possible valid statuses,
   *   this parameter lets you specify which arc (also called a transition) of the
   *   graph you want to take. This method cannot be name 'promote' because, depending
   *  on the semantics of the transition, it may designate either a promotion operation,
   *  or a demotion operation.
   *  @param oNewStatus
   *   the name of the status that iObject has reached via this step forward.
   */
   virtual HRESULT StepForward(const CATBaseUnknown_var& iObject,
                               const CATUnicodeString& iTransition,
                               CATUnicodeString& oNewStatus)=0;
  
	 /**
	  *  gives the graph manager for the given object.
	  *  @param iObject
	  *   a VPMObject whose CATIVpmGraphMng you want to retrieve
    *  @param oGraphMng
    *   the placeholder where the expected CATIVpmGraphMng is returned.
	  */
  virtual HRESULT GetGraphManager(const CATBaseUnknown_var& iObject,
                                  CATIVpmGraphMng_var& oGraphMng)=0;


	 /**
	  *  gives the list of valid statuses for the given object.
	  *  @param iObject
	  *   a VPMObject whose statuses list you want to retrieve
    *  @param oStatusList
    *   the returned list of status objects.
	  */
  virtual HRESULT GetListOfStatus(const CATBaseUnknown_var& iObject,
                                  CATLISTV(CATBaseUnknown_var)& oStatusList)=0;
  
	 
};

/** @nodoc */
CATDeclareHandler(ENOVIGraphManagement, CATBaseUnknown);

#endif
