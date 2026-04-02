/* -*-c++-*- */
#ifndef CATIGSMUseTransfer_H
#define CATIGSMUseTransfer_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ExportedByCATGSOUseItf.h"
#include "CATBaseUnknown.h"

#include "CATGSMTransferDef.h"
#include "CATGSMUnfoldDef.h"

class CATListValCATIMmiMechanicalFeature_var;
class CATIMmiMechanicalFeature_var;
class CATVertex_var;
class CATEdge_var;
class CATFace_var;
class CATMathPlane;
class CATIGSMUseDirection_var;
class CATRawCollint;

// __________________________________________________________________
// 
// Declares IID_CATIGSMUseTransfer
// __________________________________________________________________
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSOUseItf IID IID_CATIGSMUseTransfer;
#else
extern "C" const IID IID_CATIGSMUseTransfer;
#endif


// __________________________________________________________________
// 
// Declares CATIGSMUseTransfer
// __________________________________________________________________
//
/**
* Interface to Transfer feature.
* <b>Role</b>:Allows to access data of the Transfer feature.
* @see CATIGSOUseFactory#CreateTransfer
*/
class ExportedByCATGSOUseItf CATIGSMUseTransfer : public CATBaseUnknown
{
    CATDeclareInterface;
    
public: 
    /**
    * Set the specification to transfer.
    *   @param ihSpecObject
    *      the specification to transfer.
    */
    virtual HRESULT SetElementToTransfer(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
    /**
    * Gets the specification to transfer.
    *   @param ohSpecObject
    *      the specification to transfer.
    */
    virtual HRESULT GetElementToTransfer(CATIMmiMechanicalFeature_var &ohSpecObject)=0;

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
    virtual HRESULT SetSurfaceToUnfold(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
    /**
    * Gets the surface to unfold.
    *   @param ohSpecObject
    *      the surface.
    */
    virtual HRESULT GetSurfaceToUnfold(CATIMmiMechanicalFeature_var &ohSpecObject)=0;
	/**
    * Sets the unfolded surface.
    *   @param ihSpecObject
    *      the surface.
    */
    virtual HRESULT SetUnfoldedSurface(const CATIMmiMechanicalFeature_var &ihSpecObject)=0;
    /**
    * Gets the unfolded surface.
    *   @param ohSpecObject
    *      the surface.
    */
    virtual HRESULT GetUnfoldedSurface(CATIMmiMechanicalFeature_var &ohSpecObject)=0;
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
  
  CATDeclareHandler(CATIGSMUseTransfer, CATBaseUnknown);
  
#endif // CATIGSMUseTransfer_H
