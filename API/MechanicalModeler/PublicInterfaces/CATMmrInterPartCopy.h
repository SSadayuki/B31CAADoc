// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#ifndef CATMmrInterPartCopy_H
#define CATMmrInterPartCopy_H

#include "CATBaseUnknown.h"
#include "CATMechanicalModeler.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"
#include "CATIContainer.h"
#include "CATISpecObject.h"
#include "CATMmrGraphicPropertiesModes.h"

class CATIProduct;
class CATIBRepAccess_var;
class CATICkeParm_var;
class CATPathElement;
class CATMmrInterPartCopyLetter;

/**
 * Class to manage inter and intra part copy as result.
 * <b>Role:</b>This class allows to simulate a copy/paste special as result (with link or not) in a easier way than
 * @href CATICutAndPastable . 
 * <b>Usage :</b>Use a constructor to give the input object and target, then use the @href #Run method then the @href #GetResult method.
 */
class ExportedByCATMechanicalModeler CATMmrInterPartCopy
{
public :
/**
 * Constructor with a source feature and a target feature for the copy.
 * @param iObjectToCopy
 * a curve, line, surface, plane, point, sketch, solid feature set
 * @param iTarget
 * a part, solid or surfacic feature set
 */
	CATMmrInterPartCopy(const CATISpecObject_var& iObjectToCopy ,const CATISpecObject_var& iTarget);

/**
 * Constructor with a source subelement and a target feature for the copy.
 * @param iElementToCopy
 * a rsur, redge, vertex obtained from selection of a subelement
 * @param iTarget
 * a part, solid or surfacic feature set
 */
	CATMmrInterPartCopy(const CATIBRepAccess_var& iElementToCopy ,const CATISpecObject_var& iTarget);
/**
 * Constructor with a source parameter and a target feature for the copy.
 * @param iElementToCopy
 * a cke parameter
 * @param iTarget
 * Target is a part, solid or surfacic feature set
 */
	CATMmrInterPartCopy(const CATICkeParm_var& iElementToCopy ,const CATISpecObject_var& iTarget);

/**
 * Constructor with a source path and a target path.
 * @param iObject
 * path may contain (product instance +) part + feature or subelement
 * @param iTarget
 * Target path may contain a product instance, a part, solid or surfacic feature set
 * 
 */
	CATMmrInterPartCopy(CATPathElement* iObject ,CATPathElement* iTarget);
/**
 * Selects the product instance of the object.
 * <br><b>Role:</b> for contextual link, you may specify the instance of the source part. 
 * It can also be specified with the constructor with pathelement.
 * @param iProd
 * the selected instance will be used to determine the product context
 * @return
 * S_OK if instance is accepted, E_FAIL otherwise
*/
  HRESULT SetSourceInstance(CATIProduct* iProd); 
                                             
  /**
 * Selects the product instance of the target.
 * <br><b>Role:</b> for contextual link, you may specify the instance of the target part.
 * It can also be specified with the constructor with pathelement.
 * @param iProd
 * the selected product instance used as a context for the contextual link
 * @return
 * S_OK if instance is accepted, E_FAIL otherwise
*/
  HRESULT SetTargetInstance(CATIProduct* iProd);

/**
 * Sets the link option (with or without link) to override default setting (keep link).
 * @param iMode
 * TRUE to keep the link, FALSE otherwise
 * @return
 * S_OK if mode is accepted, E_FAIL otherwise
 */
	HRESULT SetLinkMode(CATBoolean iMode);

/**
 * Sets the type of created solid set.
 * <br><b>Role:</b> Specifies the type of solid set, Solid Body (MechanicalTool startup) or Body
 * (HybridBody startup), that will be created during import (Run method). This parameter is applicable
 * only in case of solid import. If the type is not specified, the type of solid set that will be
 * created will be based on "Hybrid Design" setting value.
 * @param iIsAnOrderedSet
 *   If TRUE, the created body is a Body.
 *   If FALSE, the created body is a Solid Body.
 * @return
 * S_OK if set is accepted, E_FAIL otherwise
 */
   HRESULT SetTypeOfCreatedSolidSet(CATBoolean iIsAnOrderedSet);

/**
 * DEPRECATED
 *
 * Sets the copy mode for attributes when copying without keeping a link.
 * 
 * <br><b>Role:</b> Allows to specify which attributes are copied. By default, if this method is not called
 * BRep-attributes and colors on sub-elements are not copied. This method allows to copy color and/or attributes.
 * <br>This method has no effect on copies with link, for which colors and attributes are copied according to the setting
 * in PartInfrastructure/PartDocument.
 * <br> This method must be called before the @href #Run method.
 * @param iMode
 * 0 : color and BRep-attributes are not copied<br>
 * 1: color is copied, not BRep-attributes<br>
 * 2: BRep-attributes are copied, not color<br>
 * 3: BRep-attributes and colors are copied
 * @return
 * S_OK if mode is accepted, E_FAIL otherwise
 * @see CATMmrApplicativeAttributes
 */
 HRESULT SetAttributeMode(int iMode);

 /**
 * Sets the copy mode for BRep-attributes when copying without keeping a link.
 * 
 * <br><b>Role:</b> Allows to specify if BRep-attributes are copied. By default, if this method is not called
 * BRep-attributes are not copied. This method allows to copy BRep-attributes.
 * <br>This method has no effect on copies with link, for which BRep-attributes are copied according to the setting
 * in PartInfrastructure/PartDocument.
 * <br> This method must be called before the @href #Run method.
 * @param iMode
 * FALSE : BRep-attributes are not copied<br>
 * TRUE : BRep-attributes are copied<br>
 * @return
 * S_OK if mode is accepted, E_FAIL otherwise
 * @see CATMmrApplicativeAttributes
 */
 HRESULT SetBRepAttributeMode(const CATBoolean iBRepAttributeMode);

 /**
 * Sets the copy mode for colors when copying without keeping a link.
 * 
 * <br><b>Role:</b> Allows to specify if colors are copied. By default, if this method is not called
 * colors on sub-elements are not copied. This method allows to copy colors.
 * <br>This method has no effect on copies with link, for which colors are copied according to the setting
 * in PartInfrastructure/PartDocument.
 * <br> This method must be called before the @href #Run method.
 * @param iMode
 * NONE_GP                         : color is not copied<br>
 * ALL_GP                          : color of feature and color of faces seen in 3D is copied.
 * FEATURE_GP                      : color of feature is copied<br>
 * FEATURE_AND_FACES_OVERLOADED_GP : color of feature and ONLY color of faces overloaded are copied<br>
 * FACES_OVERLOADED_GP             : color of faces overloaded is copied
 * @return
 * S_OK if mode is accepted, E_FAIL otherwise
 * @see CATMmrApplicativeAttributes
 */
 HRESULT SetColorMode(const CATMmrGraphicPropertiesModes::MmrGraphicPropertiesReportMode iColorMode);

/**
 * Sets an applicative identifier on the mechanical imports. 
 * <br><b>Role:</b> it enables to associate an identifier with the mechanical import feature which is the result 
 * of the copy (or the elements of the result if it is a surface set or a solid set).
 * <br>This identifier allows to retrieve information on the mechanical import using interface @href CATIMmiMechanicalImportApplicative . 
 * <br> This method must be called before the @href #Run method and it only applies if the link mode is set to true.
 * @param iApplicativeId
 * The unique identifier generated by the application.
 * <ul>
 *   <li>on Windows, use : <tt>uuidgen -s</tt></li>
 *   <li>on Unix, use : <tt>uuid_gen -C</tt></li>
 * </ul>
 * Refer to the article "About Globally Unique IDentifiers" in the CAA encyclopedia for more details about these two ways of generating a GUID value. 
 */
 HRESULT SetImportApplicativeId(const GUID & iApplicativeId);

/**
 * Computes the copy according to specified input.
 * <br><b>Role:</b> after constructing the class, select link mode if needed
 * and then use method Run before getting the result with @href #GetResult .
 * @param oString
 * Error Message
 * @return
 * S_OK if copy is done, E_FAIL otherwise
 */
	HRESULT Run(CATUnicodeString* oString = NULL);
                                               
/**
 * Retrieves the computed result.
 * @param oResult
 *   The result of the copy (if ok). Use this method after the @href #Run execution. 
 * @return
 * S_OK if result exists, E_FAIL otherwise
 */
  HRESULT GetResult(CATISpecObject_var& oResult);

/**
 * Returns creation status.
 * <br><b>Role:</b> after computing the copy, this method will return S_FALSE 
 * if the result already existed and so was not created. 
 * This is only the case for a contextual import in an assembly.
 * @param oResult
 * status
 * @return
 * S_OK if an object was created, S_FALSE if result already existed, E_FAIL otherwise
 */
	HRESULT GetCreationStatus();

/**
 * Destructor
 */
  ~CATMmrInterPartCopy();
private:
/**
 * @nodoc 
 * Copy construction is forbidden
 */
  CATMmrInterPartCopy(const CATMmrInterPartCopy&);
  // 
  CATMmrInterPartCopyLetter* _ltr;


};


#endif
