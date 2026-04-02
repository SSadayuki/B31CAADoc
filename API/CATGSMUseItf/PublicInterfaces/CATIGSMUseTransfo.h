
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//=============================================================================
//
// Class CATIGSMUseTransfo
//
//=============================================================================


#ifndef CATIGSMUseTransfo_H
#define CATIGSMUseTransfo_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATIMmiMechanicalFeature_var;
class CATMathTransformation;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseTransfo;
#else
extern "C" const IID IID_CATIGSMUseTransfo ;
#endif


/**
 * Interface for all transformation feature (Affinity, AxisToAxis, Rotate, Symmetry, Scaling,Translate).
 * <b>Role</b>: Allows you to acess data available for all transformation feature created 
 * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
 * <br> if GSO License is not granted , settting of Volume context has not effect 
 * <br> 
 * @see CATIGSMUseFactory#CreateAffinity
 * @see CATIGSMUseFactory#CreateAxisToAxis
 * @see CATIGSMUseFactory#CreateRotate
 * @see CATIGSMUseFactory#CreateScaling
 * @see CATIGSMUseFactory#CreateSymmetry
 * @see CATIGSMUseFactory#CreateTranslate 
*/
//------------------------------------------------------------------

class ExportedByCATGSMUseItf CATIGSMUseTransfo: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    /**
    * Gets the type of the geometrical result.
    *   @param oVolumeResult
    *   TRUE : Result type is volume.(Option is effective only in case of volumes)
    *   FALSE : Result type is surface
    */
    virtual HRESULT GetVolumeResult (CATBoolean & oVolumeResult) = 0;
    
    /**
    * Sets the type of the geometrical result.
    *   @param iVolumeResult
    *   TRUE : Result type is volume.(Option is effective only in case of volumes, requires GSO License)
    *   FALSE : Result type is surface
    */
    virtual HRESULT SetVolumeResult (const CATBoolean iVolumeResult) = 0;
    
    /**
    * Gets the feature to transform.
    *   @param oElem
    *      Feature to transform
    */
    virtual HRESULT	GetElemToTransfo(CATIMmiMechanicalFeature_var &oElem) = 0;
    
    /**
    * Gets the transformation matrix.
    *   @param oMatTransfo
    *      Transformation matrix
    */
    virtual HRESULT	GetTransfoMatrix(CATMathTransformation &oMatTransfo) = 0;
};

//------------------------------------------------------------------
CATDeclareHandler (CATIGSMUseTransfo, CATBaseUnknown);
#endif
