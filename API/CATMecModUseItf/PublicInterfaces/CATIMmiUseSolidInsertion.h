#ifndef CATIMmiUseSolidInsertion_h
#define CATIMmiUseSolidInsertion_h

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATMmrUseSolidInsertionAdapt
 */

#include "CATBaseUnknown.h"
#include "CATMecModUseItf.h"
#include "CATSysErrorDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseSolidInsertion;
#else
extern "C" const IID IID_CATIMmiUseSolidInsertion ;
#endif

class CATIMmiMechanicalFeature_var; 

/**
 * Interface to insert and reorder a solid feature into a procedural body. 
 * <b>Role</b>: A procedural body, see the @href CATIMmiUseMechanicalTool interface, 
 * is a body which contains solid features involved in the procedural view of the body. 
 * A solid feature contributes to the global topological result of the federating body in which it is instanciated. 
 * It is plugged to a "spine" and is automatically involved in a boolean operation with the previous solid feature. 
 * The @href CATIBodyRequest interface enables you to retrieve the result of this procedural body.
 *
 * <br>This interface is available for the features which can be set in a procedural body. 
 * It enables you to:
 * <ul>
 * <li>Insert one into a Body or Solid Body: see  @href #InsertFeature </li>
 * <li>Relocate one: see  @href #ReorderFeature </li>
 * </ul>
 * <p><b>BOA information</b>: this interface CAN be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATMecModUseItf CATIMmiUseSolidInsertion : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

 /**
 * Relocates a solid feature in a procedural body.
 * <br><b>Role:</b>This method is used to move a solid feature, that already exists in a procedural body, 
 * to another position.
 * If the given destination is not valid, a new destination will sometimes be automatically redefined.
 * @param iDestination
 * The place where the feature will be inserted depends on the factors described below:
 * <ul>
 * <li>The feature is a <b>Body or Solid Body</b>: the feature is set at the first position in the 
 * Body or Solid Body.</li>
 * <li>The feature is a <b>solid feature</b>: the feature is set after the given <tt>iDestination</tt></li>
 * <li>The feature equals <b>NULL_var</b>: the destination is automatically valuated with the "In Work Object" feature. 
 * The "In Work Object" can be set by using the interface @href CATIMmiUsePrtPart#SetCurrentFeature,
 * method and can be set with the @href CATIMmiUsePrtPart#GetCurrentFeature method.</li>
 * </ul>
 * If the given <tt>iDestination</tt> and the "In Work Object" feature are not valid, the <tt>ReorderFeature</tt> method will throw @href CATInternalError exceptions.
 * @return 
 * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
 */
  virtual HRESULT ReorderFeature( const CATIMmiMechanicalFeature_var& iDestination ) = 0;

  /**
 * Inserts a solid feature into a procedural body.
 * <br><b>Role:</b>This method is used to insert a solid feature into a procedural body. If the
 * feature already exists in a Body or Solid Body, use the @href #ReorderFeature method to move it.
 * @param iDestination
 * The place where the feature will be inserted depends on the factors described below:
 * <ul>
 * <li>The feature is a <b>Body or Solid Body</b>: the feature is set at the first position in the 
 * Body or Solid Body.</li>
 * <li>The feature is a <b>solid feature</b>: the feature is set after the given <tt>iDestination</tt></li>
 * <li>The feature equals <b>NULL_var</b>: the destination is automatically valuated with the "In Work Object" feature. 
 * The "In Work Object" can be set by using the interface @href CATIMmiUsePrtPart#SetCurrentFeature,
 * method and can be set with the @href CATIMmiUsePrtPart#GetCurrentFeature method.</li>
 * </ul>
 * If the given <tt>iDestination</tt> and the "In Work Object" feature are not valid, the <tt>ReorderFeature</tt> method will throw @href CATInternalError exceptions.
 * @return 
 * This method returns S_OK if the operation went through successfully and E_FAIL otherwise.
 */
  virtual HRESULT InsertFeature( const CATIMmiMechanicalFeature_var&  iDestination ) =0 ;
};

CATDeclareHandler(CATIMmiUseSolidInsertion,CATBaseUnknown);

#endif
