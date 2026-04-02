#ifndef CATIDrwDressUp_h
#define CATIDrwDressUp_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATDrwDimEnum.h"
#include "CATLISTV_CATISpecObject.h"

class CATISpecObject_var;
class CATListValCATBaseUnknown_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDressUp ;
#else
extern "C" const IID IID_CATIDrwDressUp ;
#endif

/**
 * Interface implemented by the dressup object.
 * <b>Role</b>: Use this interface to manage dressup elements contained in the objet which  
 * implements this interface (i.e. a Dressup). There is one dressup object for each view
 */


class ExportedByDraftingItfCPP CATIDrwDressUp : public CATBaseUnknown
{
  CATDeclareInterface;
       
    public:

/**
 * Used to get the dressup components.
 *		
 * @param oObjectList
 *		List of components of dressup object. 
 */
    virtual HRESULT GetComponents(const IID interfaceID, CATLISTV(CATISpecObject_var)& oObjectList) const = 0;

/**
 * @nodoc
 */
    virtual HRESULT AddDimension(const CATISpecObject_var &iDim) = 0;
/**
 * @nodoc
 */
    virtual HRESULT RemoveDimension(const CATISpecObject_var &iDim) = 0;

/**
 * Get the lists of different kinds of dimensions.
 *		
 * @param oDimGenStrongList
 *		List of dimension created on 3D elements and associated to 3D constraints 
 *    these dimensions are created by using generated dimension command.
 *
 * @param oDimSketchStrongList
 *    List of dimension created on 2D elements.
 *
 * @param oDimIntStrongList
 *		For future use.
 *
 * @param oDimIntweakList
 *    List of dimension created on 3D elements which are not managed by 3D constraints.
 */
    virtual HRESULT ListDimensions(CATLISTV(CATISpecObject_var)& oDimGenStrongList, 
			      CATLISTV(CATISpecObject_var)& oDimSketchStrongList, 
			      CATLISTV(CATISpecObject_var)& oDimIntStrongList, 
			      CATLISTV(CATISpecObject_var)& oDimIntWeakList) = 0;

 /**
  * @nodoc
 * This method is now replaced by @href CATIDrwDressUp#GetDimensionList
 * Get the lists of dimensions.
 *		
 * @param oDimensionList
 *		List of all dimension created.
 */
    virtual HRESULT ListDimensions(CATLISTV(CATISpecObject_var)& oDimensionList) const = 0; 
/**
 * @nodoc
 */
    virtual HRESULT AddText(const CATISpecObject_var &iTxt) = 0;

/**
 * @nodoc
 */
    virtual HRESULT RemoveText(const CATISpecObject_var &iText) = 0;

/**
 * @nodoc
 * This method is now replaced by @href CATIDrwDressUp#GetTextList
 * Get the list of texts created in the view.
 * @return 
 *		The list of the texts.
 */
    virtual CATLISTV(CATISpecObject_var) GetTextList() const = 0;

/**
 * @nodoc
 * This method is now replaced by @href CATIDrwDressUp#GetArrowList
 * @nodoc
 */
    virtual CATLISTV(CATISpecObject_var) GetDrwArrowList() const = 0;

/**
 * @nodoc
 */
    virtual HRESULT AddDrwArrow(const CATISpecObject_var &iArrow) = 0;

/**
 * @nodoc
 */
    virtual HRESULT RemoveDrwArrow(const CATISpecObject_var &iArrow) = 0;

/**
 * @nodoc
 */
    virtual HRESULT AddCenterLine(const CATISpecObject_var &iCenterLine) = 0;

/**
 * @nodoc
 */
    virtual HRESULT RemoveCenterLine(const CATISpecObject_var &iCenterLine) = 0;

/**
 * @nodoc
 * This method is now replaced by @href CATIDrwDressUp#GetCenterLineList
 * Get the list of center lines created in the view.
 * @return 
 *		The list of the center lines.
 */
    virtual CATLISTV(CATISpecObject_var) GetCenterLineList() const = 0;     

/**
 * @nodoc
 */
    virtual HRESULT AddAreaFill(const CATISpecObject_var &iAreaFill) = 0;

/**
 * @nodoc
 */
    virtual HRESULT RemoveAreaFill(const CATISpecObject_var &iAreaFill) = 0;
    
/**
 * @nodoc
 * This method is now replaced by @href CATIDrwDressUp#GetAreaFillList
 * Get the list of areafill created in the view.
 * @return 
 *		The list of the areafills.
 */
    virtual CATLISTV(CATISpecObject_var) GetAreaFillList() const = 0;     

 /**
 * Get the lists of Dimensions.
 *		
 * @param oDimensionList [out, delete]
 *		List of all Dimensions created.
 */
    virtual HRESULT GetDimensionList(CATListValCATBaseUnknown_var **oDimensionList) const = 0; 

 /**
 * Get the lists of AreaFills.
 *		
 * @param oAreaFillList [out, delete]
 *		List of all areafills created.
 */
    virtual HRESULT GetAreaFillList(CATListValCATBaseUnknown_var **oAreaFillList) const = 0; 

 /**
 * Get the lists of Texts.
 *		
 * @param oTextList [out, delete]
 *		List of all texts created.
 */
    virtual HRESULT GetTextList(CATListValCATBaseUnknown_var **oTextList) const = 0; 
    
 /**
 * Get the lists of Arrows.
 *		
 * @param oArrowList [out, delete]
 *		List of all arrows created.
 */    
    virtual HRESULT GetArrowList(CATListValCATBaseUnknown_var **oArrowList) const = 0; 
    
 /**
 * Get the lists of centerlines.
 *		
 * @param oCenterLineList [out, delete]
 *		List of all centerlines created.
 */
    virtual HRESULT GetCenterLineList(CATListValCATBaseUnknown_var **oCenterLineList) const = 0; 

 /**
 * @nodoc
 *
 * Get the lists of dimensions systems.
 *
 * @param oDimSystemList [out, delete]
 *		List of all dimensions systems created.
 */    
    virtual HRESULT GetDimSystemList(CATListValCATBaseUnknown_var **oDimSystemList) const = 0; 

/**
 * @nodoc
 */
    virtual HRESULT AddDimSystem(const CATISpecObject_var &iDimSystem) = 0;

/**
 * @nodoc
 */
    virtual HRESULT RemoveDimSystem(const CATISpecObject_var &iDimSystem) = 0;

};
CATDeclareHandler(CATIDrwDressUp, CATBaseUnknown);
#endif













