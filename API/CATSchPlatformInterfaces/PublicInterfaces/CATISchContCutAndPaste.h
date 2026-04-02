#ifndef CATISchContCutAndPaste_H
#define CATISchContCutAndPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATBaseUnknown.h"
#include "CATBaseUnknown_Associations.h"
#include "CATIContainer.h"
#include "CATFormat.h"
#include "CATFormats.h"

// in V5R21, we remove include of CATBaseUnknowns.h, which is not exposed (CAA2required)
// we add include of CATLISTV_CATBaseUnknown to obtain similar definition
// we modify formal signatures to use CATLISTV(CATBaseUnknown_var) 
#include "CATLISTV_CATBaseUnknown.h"
// for compatibility reasons, we keep a local definition of ListOfVarBaseUnknown
#ifndef ListOfVarBaseUnknown
#define ListOfVarBaseUnknown CATLISTV(CATBaseUnknown_var) 
#endif 


class CATRep;

/**
 * Schematic container CCP Mode. 
 * <b>Role</b>: For providing the schematic container CCP behavior mode.
 */
enum CATSchContCCPMode
{
  SchContCCPMode_Undefined    = 0,
  SchContCCPMode_Component    = 1,
  SchContCCPMode_Route        = 2,
  SchContCCPMode_CompGroup    = 3
};

/**
 * Schematic container CCP Query Mode. 
 * <b>Role</b>: For clipboard query during schematic container CCP.
 */
enum CATSchContCCPQueryMode
{
  SchCCPQueryInputClipReturnSrc  = 0, 
  SchCCPQueryInputSrcReturnClip  = 1  
};

extern "C" const IID IID_CATISchContCutAndPaste ;

/**
 * Interface to provide Cut/Delete/Copy/Paste behavior on 
 * Schematic basic set of objects for the schematic applications.
 * <b>Role</b>: To be called by CATICutAndPastable implementation on the
 * base object with Schematic extensions
 */
class CATISchContCutAndPaste : public IUnknown
{
  public:   

  /**
  * Lists objects to extract.
  * <br><b> Role: </b> used on copy.
  * @param iObjectTobeProcessed
  *        the object in the source/clip container to be extracted
  * @param ioObjectsAlreadyInBoundary
  *        list of objects to extract.
  * @param iObjectsToAdd
  *		   list objects to add to list of objects to extract.
  * @param iAnImposedFormat
  *        if this format is not valid, it will be reinitialized.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT BoundaryExtract(
     IUnknown *iObjectTobeProcessed,
     CATLISTV(CATBaseUnknown_var)& ioObjectsAlreadyInBoundary,
     const CATLISTV(CATBaseUnknown_var)* iObjectsToAdd=NULL,
	 const CATFormat* iAnImposedFormat=NULL) = 0;

  /**
  * Creates in the client side, all objects required, and provides associations.
  * @param iObjectTobeProcessed
  *        the object in the source/clip container to be created
  * @param iMode
  *        for component input SchContCCPMode_Component and
  *        for route input SchContCCPMode_Route
  * @param ioAssociationOfObjects
  *        couples of objects source/target.
  * @param iAnImposedFormat
  *        if this format is not valid, it will be reinitialized.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Create (
	IUnknown *iObjectTobeProcessed,CATSchContCCPMode iMode,
	CATBaseUnknown_Associations& ioAssociationOfObjects,
	const CATFormat* an_imposed_format=NULL)=0;

  /**
  * Makes in the client, the update of data and relations.
  * @param iObjectTobeProcessed
  *        the object in the clip/target container to be updated
  * @param iMode
  *        for component input SchContCCPMode_Component and
  *        for route input SchContCCPMode_Route
  * @param ioAssociationOfObjects
  *        couples of objects source/target.
  * @param iAnImposedFormat
  *        if this format is not valid, it will be reinitialized.
  * @param iToCurObjects   
  *        target objects for paste corresponding to selected objects.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Update      (
	IUnknown *iObjectTobeProcessed,CATSchContCCPMode iMode,
    CATBaseUnknown_Associations& ioAssociationOfObjects,
    const CATFormat* iAnImposedFormat=NULL,
	CATLISTV(CATBaseUnknown_var)* iToCurObjects=NULL)=0;

  /**
  * Query related objects in the source container and the clipboard
  * container.
  * @param CATSchContCCPQueryMode
  *        for querying related object in the source container given
  *        a clipboard object, input SchCCPQueryInputClipReturnSrc
  *        for querying related object in the clipboard container given
  *        a source container object, input SchCCPQueryInputSrcReturnClip
  * @param iObjectIn
  *        input object whose related object is to be queried.
  * @param ioAssociationOfObjects
  *        couples of objects source/target.
  * @param oRelatedObject
  *        related object
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetSrcTgtContRelatedObject (
    CATSchContCCPQueryMode iMode, IUnknown *iObjectIn,
    CATBaseUnknown_Associations& ioAssociationOfObjects,
    IUnknown **oRelatedObject) = 0;

};
#endif

