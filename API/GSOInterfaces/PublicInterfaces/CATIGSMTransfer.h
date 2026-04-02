/* -*-c++-*- */
#ifndef CATIGSMTransfer_H
#define CATIGSMTransfer_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ExportedByCATGotInterfaces.h"
#include "CATBaseUnknown.h"

#include "CATGSMTransferDef.h"
#include "CATGSMUnfoldDef.h"

class CATListValCATISpecObject_var;
class CATISpecObject_var;
class CATVertex_var;
class CATEdge_var;
class CATFace_var;
class CATMathPlane;
class CATIGSMDirection_var;
class CATRawCollint;

// __________________________________________________________________
// 
// Declares IID_CATIGSMTransfer
// __________________________________________________________________
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGotInterfaces IID IID_CATIGSMTransfer;
#else
extern "C" const IID IID_CATIGSMTransfer;
#endif


// __________________________________________________________________
// 
// Declares CATIGSMTransfer
// __________________________________________________________________
//
/**
* Interface to Transfer feature.
* <b>Role</b>:Allows to access data of the Transfer feature.
* @see CATIGSOFactory#CreateTransfer
*/
class ExportedByCATGotInterfaces CATIGSMTransfer : public CATBaseUnknown
{
    CATDeclareInterface;
    
public: 
    /**
    * Set the specification to transfer.
    *   @param ihSpecObject
    *      the specification to transfer.
    */
    virtual HRESULT SetElementToTransfer(const CATISpecObject_var &ihSpecObject)=0;
    /**
    * Gets the specification to transfer.
    *   @param ohSpecObject
    *      the specification to transfer.
    */
    virtual HRESULT GetElementToTransfer(CATISpecObject_var &ohSpecObject)=0;

    /**
    * Set the type of transfer.
    *   @param iType
    *      the type of transfer.
    */
    virtual HRESULT SetTypeOfTransfer(const CATGSMTypeOfTransfer iType)=0;
    /**
    * Gets the type of transfer.
    *   @param oType
    *      the type of transfer.
    */
    virtual HRESULT GetTypeOfTransfer(CATGSMTypeOfTransfer &oType)=0;
	/**
    * Sets the surface to unfold.
    *   @param ihSpecObject
    *      the surface.
    */
    virtual HRESULT SetSurfaceToUnfold(const CATISpecObject_var &ihSpecObject)=0;
    /**
    * Gets the surface to unfold.
    *   @param ohSpecObject
    *      the surface.
    */
    virtual HRESULT GetSurfaceToUnfold(CATISpecObject_var &ohSpecObject)=0;
	/**
    * Sets the unfolded surface.
    *   @param ihSpecObject
    *      the surface.
    */
    virtual HRESULT SetUnfoldedSurface(const CATISpecObject_var &ihSpecObject)=0;
    /**
    * Gets the unfolded surface.
    *   @param ohSpecObject
    *      the surface.
    */
    virtual HRESULT GetUnfoldedSurface(CATISpecObject_var &ohSpecObject)=0;
	/**
    * Sets the type of unfold to take into account during transfer.
    *   @param iType
    *      CATGSMUndefinedSurfaceType if the type is undefined,
    *      CATGSMRuledSurfaceType if the surface to unfold is ruled,
    *	   CATGSMAnySurfaceType if the surface to unfold is any
    * @see CATGSMUnfoldSurfaceType
    */
    virtual HRESULT SetUnfoldType(const CATGSMUnfoldSurfaceType iType)=0;
    /**
    * Gets the type of unfold to take into account during transfer.
    *   @param oType
    *      CATGSMUndefinedSurfaceType if the type is undefined,
    *      CATGSMRuledSurfaceType if the surface to unfold is ruled,
    *	   CATGSMAnySurfaceType if the surface to unfold is any
    * @see CATGSMUnfoldSurfaceType
    */
	virtual HRESULT GetUnfoldType(CATGSMUnfoldSurfaceType& oType)=0;
  };
  
  CATDeclareHandler(CATIGSMTransfer, CATBaseUnknown);
  
#endif // CATIGSMTransfer_H
