#ifndef CATIMechanicalTool_h
#define CATIMechanicalTool_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//#include "MF0STARTUP.h"
#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include <CATIShapeFeatureBody.h>

class CATISpecObject_var;
class CATISpecAttribute_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMechanicalTool;
#else
extern "C" const IID IID_CATIMechanicalTool;
#endif


/**
 * Interface to manage a MechanicalTool feature.
 * <b>Role</b>: This interface is specific for a <b>MechanicalTool</b> feature. 
 * A MechanicalTool feature is a mechanical feature which 
 * aggregates other mechanical features to represent a solid form.
 * So, it is sometimes named solid body.
 * It appears in the specification tree with the name:
 * <ul>
 * <li><b>PartBody</b></li>
 * <br>It represents the main body and there is only one instance of it in the model. It is 
 * automatically created and cannot be deleted.
 * <li><b>Body</b></li>
 * <br>It can have 0 to N Bodies in the model. 
 * </ul>
 * The @href CATIMechanicalRootFactory enables you to create a MechanicalTool and the 
 * @href CATIPartRequest interface enables you to retrieve them.
 * <br><br>A MechanicalTool feature aggregates mechanical features which can be: 
 * <ul>
 * <li>A <b>Sketch</b> feature,</li>
 * <li>A <b>Constraint</b> feature, </li>
 * <li>A <b>Solid</b> feature</li>
 * <br>The @href CATIShapeFeatureBody and @href CATIShapeFeatureProperties interfaces are dedicated 
 * to this type of feature. There are two groups of solid features:
 * <ul>
 * <li><b>Contextual</b> feature such as Draft, Split, Fillet ...</li>
 * <li><b>Form</b> feature such as Prism, Revol, Boolean Operation (Trim,Add,...), ...</li>
 * </ul>
 * The @href CATIPrtProceduralView interface is required to insert such feature inside the solid
 * body.
 * </ul>
 * The @href CATIBodyRequest interface enables you to retrieve the feature which holds
 * the topological result of the body. 
 * <br><br>This interface allows you three main actions on a MechanicalTool feature:
 * <ul>
 * <li>Retrieving the first or the last solid feature in the body thanks to 
 * @href #GetFirstShapeFeature and @href #GetLastShapeFeature respectively</li>
 * <li>Retrieving the last solid feature with a successul update, see
 * @href #GetLastShapeFeatureSuccessfullyUpdated </li>
 * <li>Retrieving the boolean operation when the MechanicalTool is an operated body 
 * (refer to the @href CATIPartRequest interface for a "operated body" definition), see
 * @href #GetBooleanOperation </li>
 * </ul>
 */
class  ExportedByMecModItfCPP CATIMechanicalTool : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

/**
 * @nodoc.
 */
  virtual void SetVisuStatus (const int& status ) = 0 ;

/**
  * @nodoc.
  */
  virtual int  GetVisuStatus () = 0 ;

/**
 * Returns the last solid feature.
 */ 
  virtual CATISpecObject_var GetLastShapeFeature() = 0 ;

/** 
 * Returns the first solid feature.
 */ 
  virtual CATISpecObject_var GetFirstShapeFeature()= 0 ;

/**
 * Returns the last activated solid feature without update error.
 * <br><b>Role:</b> returns the last solid active in the sense of @href CATIMechanicalProperties
 * Furthermore this feature must either be updated or have a geometrical result. 
 * @see CATIUpdateError, CATMfErrUpdate
 */ 
  virtual CATISpecObject_var GetLastShapeFeatureSuccessfullyUpdated() const =0 ; 

/**
 * @nodoc.
 */ 
  virtual CATISpecAttribute_var GetLastSolid() = 0 ;
 
/** 
 * Returns the boolean operation when the current solid body is operated.
 * <br><b>Role:</b>This method retrieves the boolean operation which has 
 * operated the current body. If this body has not been operated the returned value is
 * NULL_var.
 * @return
 * Refer
 * to the <tt>CATITrimBooleanFactory</tt> and <tt>CATIPrtBooleanFactory</tt> interfaces for
 * details about this feature. 
 */ 
  virtual CATISpecObject_var GetBooleanOperation() = 0 ;

};

CATDeclareHandler(CATIMechanicalTool,CATBaseUnknown);

#endif
