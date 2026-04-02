// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIKinMechanismFactory.h
//   This interface enables the management of Mechanisms.
//
//===================================================================
#ifndef CATIKinMechanismFactory_H
#define CATIKinMechanismFactory_H
#include "CATIAV5Level.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "KinematicsItf.h"
#include "CATBaseUnknown.h"
#include "CATIKinMechanism.h"
#include "CATListOfCATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKinematicsItf IID IID_CATIKinMechanismFactory ;
#else
extern "C" const IID IID_CATIKinMechanismFactory ;
#endif

//------------------------------------------------------------------

/**
 * Manage Mechanisms.
 * <p>
 * A Mechanism describes the mechanical relationships between parts in order to analyze and simulate its behavior
 * <p>
 * This interface enables the creation of simulation Mechanisms
 * in a document and scan the document to list all the simulation Mechanisms.
 * Use this interface as is to create a Mechanism or to list Mechanisms in a document.
 */
class ExportedByKinematicsItf CATIKinMechanismFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
    * Create a mechanism.
    * <b>Role</b>: This function creates a mechanism feature 
    * @param oMechanism
    *    The created mechanism.
    * @return
    *    HRESULT
    * @see CATIKinMechanism
    */
    virtual HRESULT CreateInstance (CATIKinMechanism** oMechanism) const=0;


   /**
    * List all mechanisms in a document.
    * <b>Role</b>: This function lists all mechanism features in the document.
    * @param oListOfMechanisms
    *    The list of all mechanisms belonging to the document.
    *    The list is defined and managed by the caller.
    * @return
    *    HRESULT
    * @see CATLISTP(CATBaseUnknown)
    */
     virtual HRESULT ListInstances (CATLISTP(CATBaseUnknown) & oListOfMechanisms) const=0;

};

//------------------------------------------------------------------


#endif
