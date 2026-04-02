/* -*-c++-*- */
#ifndef CATIGSMSymmetry_H
#define CATIGSMSymmetry_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMSymmetry;
#else
extern "C" const IID IID_CATIGSMSymmetry;
#endif

/**
 * Interface to symmetry transformation feature.
 * <b>Role</b>: Allows you to access data of the Symmetry feature created by using 
 * an element and a reference (a point, a line or a plane)
 * @see CATIGSMFactory#CreateSymmetry
 */
class ExportedByCATGitInterfaces CATIGSMSymmetry : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
  
  /**
    * Gets the feature to transform.
    *   @param oElem
    *      feature to transform      
    */
   virtual HRESULT GetElemToSymmetry(CATISpecObject_var & oElem) = 0;

  /**
    * Sets the feature to transform.
    *   @param iElem
    *      new feature to transform
    */
 virtual HRESULT SetElemToSymmetry(const CATISpecObject_var iElem) = 0;

  /**
    * Gets the reference element (a point, a line or a plane).
    *   @param oElem
    *      reference element
    */
 virtual HRESULT GetReference(CATISpecObject_var & oElem) = 0;

  /**
    * Sets the reference element (a point, a line or a plane).
    *   @param iElem
    *      new reference element
    */
 virtual HRESULT SetReference(const CATISpecObject_var iElem) = 0;

  /** 
    * Gets the Creation Mode.
    *   @param oMode
    *      flag for transformation type (creation or modification)
    */
 virtual HRESULT GetCreationMode (CATBoolean & oMode)= 0;

  /** 
    * Sets the Creation Mode.
    *   @param iMode
    *      flag for transformation type (creation or modification)
    */
 virtual HRESULT SetCreationMode (const CATBoolean iMode)= 0;

};
CATDeclareHandler (CATIGSMSymmetry, CATBaseUnknown);
#endif // CATIGSMSymmetry_H
