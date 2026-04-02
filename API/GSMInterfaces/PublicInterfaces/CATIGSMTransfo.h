
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//=============================================================================
//
// Class CATIGSMTransfo
//
//=============================================================================


#ifndef CATIGSMTransfo_H
#define CATIGSMTransfo_H

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATISpecObject_var;
class CATMathTransformation;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMTransfo;
#else
extern "C" const IID IID_CATIGSMTransfo ;
#endif


/**
 * Interface for all transformation feature (Affinity, AxisToAxis, Rotate, Symmetry, Scaling,Translate).
 * <b>Role</b>: Allows you to acess data available for all transformation feature created 
 * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
 * <br> if GSO License is not granted , settting of Volume context has not effect 
 * <br> 
 * @see CATIGSMFactory#CreateAffinity
 * @see CATIGSMFactory#CreateAxisToAxis
 * @see CATIGSMFactory#CreateRotate
 * @see CATIGSMFactory#CreateScaling
 * @see CATIGSMFactory#CreateSymmetry
 * @see CATIGSMFactory#CreateTranslate 
*/
//------------------------------------------------------------------

class ExportedByCATGitInterfaces CATIGSMTransfo: public CATBaseUnknown
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
    virtual HRESULT	GetElemToTransfo(CATISpecObject_var &oElem) = 0;
    
    /**
    * Gets the transformation matrix.
    *   @param oMatTransfo
    *      Transformation matrix
    */
    virtual HRESULT	GetTransfoMatrix(CATMathTransformation &oMatTransfo) = 0;
};

//------------------------------------------------------------------
CATDeclareHandler (CATIGSMTransfo, CATBaseUnknown);
#endif
