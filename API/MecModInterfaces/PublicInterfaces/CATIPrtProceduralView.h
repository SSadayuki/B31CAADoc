#ifndef CATIPrtProceduralView_h
#define CATIPrtProceduralView_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include <CATISpecObject.h>
#include <CATUnicodeString.h>
 
class CATListValCATISpecObject_var;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIPrtProceduralView;
#else
extern "C" const IID IID_CATIPrtProceduralView;
#endif


/**
 * Interface to insert and reorder a solid feature into a procedural body. 
 * <b>Role</b>: A procedural body, see the @href CATIMechanicalTool
 * interface, is a body which contains solid features involved in the procedural view 
 * of the body. The solid feature (@href CATIShapeFeatureProperties ) participates to 
 * the global topological result of 
 * the federating body in which it is instanciated. It is plugged in a "spine" and 
 * is automatically involved in a boolean operation with the previous solid feature. The
 * @href CATIBodyRequest interface enables you to retrieve the result of this procedural body.
 *
 * <br>This interface is available for the features which can be set in a procedural body. 
 * It enables you to:
 * <ul>
 * <li>Insert one into a Body or Solid Body: see  @href #InsertInProceduralView </li>
 * <li>Relocate one: see  @href #Reorder </li>
 * </ul>
 */
class ExportedByMecModItfCPP CATIPrtProceduralView : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

 /**
 * Relocates a solid feature in the procedural body.
 * <br><b>Role:</b>This method enables you to move a solid feature, already existing
 * into a procedural body, at another position.
 * If the destination for reorder reveals inappropriate, a new destination can sometimes
 * be redefined automatically.
 * @param iDestination
 * The position of the feature into the procedural body depends on this argument:
 * <ul>
 * <li>It is a <b>Body or Solid Body</b>: the feature is set at the first position in the 
 * Body or Solid Body.</li>
 * <li>It is a <b>solid feature</b>: the feature is set after <tt>iDestination</tt></li>
 * <li>It is <b>NULL_var</b>: iDestination is automatically valuated with
 * the "in work object" feature. You set it thanks to the @href CATIPrtPart#SetCurrentFeature,
 * method and you retrieve it thanks to the @href CATIPrtPart#GetCurrentFeature method.</li>
 * </ul>
 * If <tt>iDestination</tt> or the "in work object" feature is not valid, the <tt>Reorder</tt>
 * method will throw @href CATInternalError exceptions.
 */
  virtual void Reorder(const CATISpecObject_var& iDestination) = 0;

/**
 * @nodoc
 */
  virtual void GetLimitPositionsForReorder(CATListValCATISpecObject_var& oLst) = 0;
  
/**
 * @nodoc
 */
  virtual void ExtractFromProceduralView()=0;

  /**
 * Inserts a solid feature into a procedural body.
 * <br><b>Role:</b>This method enables to insert a solid feature into a procedural body. If the
 * feature already exists in a Body or Solid Body, use the @href #Reorder method to move it.
 * @param iDestination
 * The position of the feature into the procedural body depends on this argument:
 * <ul>
 * <li>It is a <b>Body or Solid Body</b>: the feature is set at the first position in the 
 * Body or Solid Body.</li>
 * <li>It is a <b>solid feature</b>: the feature is set after <tt>iDestination</tt></li>
 * <li>It is <b>NULL_var</b> (the default value): iDestination is automatically valuated with
 * the "in work object" feature. You set it thanks to the @href CATIPrtPart#SetCurrentFeature,
 * method and you retrieve it thanks to the @href CATIPrtPart#GetCurrentFeature method.
 * If the "in work object" is a Body or Solid Body, the insertion will take place in last
 * position of the Body or Solid Body. </li>
 * </ul>
 * If <tt>iDestination</tt> or the "In work object" feature is not valid, the <tt>InsertInProceduralView</tt>
 * method will throw @href CATInternalError exceptions.
 */
  virtual void InsertInProceduralView(const CATISpecObject_var&  iDestination = NULL_var ) =0 ;
};

CATDeclareHandler(CATIPrtProceduralView,CATBaseUnknown);

#endif
