#ifndef CATIMmiUseGeometryAccess_H
#define CATIMmiUseGeometryAccess_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
#include "CATIMmiUseGeometricalElement.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATMmiContractDefs.h"

class CATListValCATIMmiUseBRepAccess_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseGeometryAccess;
#else
extern "C" const IID IID_CATIMmiUseGeometryAccess ;
#endif

/*------- Enum describing the Type of Filter to use when Retriving selcting object ---------
*
* <br><b>Role:</b> This enum used to specify the type of filter you want on the selecting object. ( @href CATIMmiUseBRepAccess )<br>
* This Filter is usefull for some application where there is a lot of almost identical selecting object
* and you have no use of the small difference.
* For exemple on a join federate, you usualy do not want one selecting object for every cells,
* since the selecting object are the same and the only different information is the selecting cell.
*
* @param CATMmrWithSelectingCell
* The selecting object will have a selecting cell,
* the method @href CATIMmiUseBRepAccess::GetBRepSelectingCell will give a result.
*
* @param CATMmrWithoutSelectingCell
* The selecting object will not have a selecting cell.
* If you have more than one connex cell with the same namming (like in a Cylinder ) you will get one selecting object.
*/
//------------------------------------------------------------------ 
 enum CATMmrBRepFilterType {CATMmrWithSelectingCell=0, CATMmrWithoutSelectingCell=1};

/**
 * Interface to get selecting objects and topological cells through generic naming or symbolic information.
 * Methods of this interfaces are called on a source shape feature.
 * They retrieve selecting objects or topological cells from
 * the specified source shape feature,
 * a key word <tt>iKey</tt>, 
 * if needed, a profile element <tt>iProfileElement</tt> of a sketch, and
 * a <tt>iFeature</tt> to specify the search domain.
 * <br>For example, the <tt>CATIMmiUseRsur</tt> selecting objects associated with the lateral face of Pad.3 
 * extruded from Line.7 are found with 
 * <tt>Pad.3->GetBReps(MfKeyExtrudedFrom,Line.7,List)</tt>.
 * Without any <tt>iFeature</tt>, the search is performed on the source solid (Pad.3 in the previous example).
 * The instruction <tt>Pad.3->GetBReps(MfKeyExtrudedFrom,Line.7,Fillet.6,List)</tt>
 * finds the <tt>CATIMmiUseRsur</tt> selecting objects associated with the lateral face of Pad.3 
 * extruded from Line.7 on the solid after Fillet.6.
 * <br>Another example, the face BRep feature associated with the top face of Pad.6 is found with
 * <tt>Pad.6->GetBReps(MfKeyTop,List)</tt>.
 * <br>The instruction <tt>Fillet.3->GetCells(List)</tt> retrieves the Fillet.3 faces,
 * and the instruction <tt>Fillet.3->GetCells(Draft.12,List)</tt> retrieves the 
 * Fillet.3 faces as they appear on the solid after Draft.12.
 * <br><b>Legal values</b>:
 * <lu><li><tt>MfKeyTop</tt> available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li><tt>MfKeyBottom</tt> available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li><tt>MfKeyExtrudedFrom</tt> available for a pad, a pocket, a rib, a slot, a stiffener, a shaft, a groove,
 * <li><tt>MfKeyStart</tt> available for a shaft, a groove,
 * <li><tt>MfKeyEnd</tt> available for a shaft, a groove.</ul>
 */

class ExportedByCATMecModUseItf CATIMmiUseGeometryAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves all the selecting objects.
 * @param oBreps [out]
 * List of selecting objects. Query CATIMmiUseBRepAccess or its derived interfaces.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetBReps(CATListValCATIMmiUseBRepAccess_var& oBreps, const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;

/**
 * Retrieves all the topological cells.
 * @param oCells [out]
 * List of cells. Query CATCell or its derived interfaces.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetTopoCells(CATLISTV(CATBaseUnknown_var)& oCells, const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;

/**
 * Retrieves selecting objects from symbolic information.
 * @param iKey [in]
 * Key word.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>: available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li> <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>: available for a shaft, a groove.</ul>
 * @param oBreps [out]
 * List of <tt>CATIMmiUseRsur</tt> selecting objects.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetBReps(const CATUnicodeString& iKey, CATListValCATIMmiUseBRepAccess_var& oBreps,
                           const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;

/**
 * Retrieves all the selecting objects from symbolic information.
 * Available for lateral faces of an extruded or revolute shape feature: a pad, a pocket, a shaft, a groove, a stiffener.
 * @param iKey [in]
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement [in]
 * Profile element.
 * @param oBreps [out]
 * List of <tt>CATIMmiUseRsur</tt> selecting objects.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetBReps(const CATUnicodeString& iKey, const CATBaseUnknown_var&  iProfileElement,
		                   CATListValCATIMmiUseBRepAccess_var& oBreps,const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;


/**
 * Retrieves selecting objects from symbolic information.
 * Available for lateral faces of a swept shape feature: a rib, a slot.
 * @param iKey [in]
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement1 [in]
 * First profile element.
 * @param iProfileElement2 [in]
 * Second profile element.
 * @param oBreps [out]
 * List of <tt>CATIMmiUseRsur</tt> selecting objects.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetBReps(const CATUnicodeString& iKey, const CATBaseUnknown_var& iProfileElement1,
		                   const CATBaseUnknown_var& iProfileElement2, CATListValCATIMmiUseBRepAccess_var& oBreps,
                           const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;


/**
 * Retrieves topological faces from symbolic information.
 * @param iKey [in]
 * Key word.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>: available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li> <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>: available for a shaft, a groove.</ul>
 * @param oCells [out]
 * List of <tt>CATFace</tt> cells.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetTopoCells(const CATUnicodeString& iKey, CATLISTV(CATBaseUnknown_var)& oCells, 
                           const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;


/**
 * Retrieves topological faces from symbolic information.
 * Available for lateral faces of an extruded or revolute shape feature: a pad, a pocket, a shaft, a groove.
 * @param iKey [in]
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement [in]
 * Profile element.
 * @param oCells [out]
 * List of <tt>CATFace</tt> cells.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetTopoCells(const CATUnicodeString& iKey, const CATBaseUnknown_var& iProfileElement,
		                   CATLISTV(CATBaseUnknown_var)& oCells,const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;

/**
 * Retrieves topological faces from symbolic information.
 * Available for lateral faces of a swept shape feature: a rib, a slot.
 * @param iKey [in]
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement1 [in]
 * First profile element.
 * @param iProfileElement2 [in]
 * Second profile element.
 * @param oCells [out]
 * List of <tt>CATFace</tt> cells.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetTopoCells(const CATUnicodeString& iKey, const CATBaseUnknown_var& iProfileElement1,
		                   const CATBaseUnknown_var& iProfileElement2, CATLISTV(CATBaseUnknown_var)& oCells,
                           const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;



/**
 * Retrieves all the selecting objects.
 * @param oBreps [out]
 * List of selecting objects. Query CATIMmiUseBRepAccess or its derived interfaces.
 * @param iDim [in]
 * the selecting object retrived will be of <tt>iDim</tt> dimension ( @href CATMmiDimension ).
 * @param iFilterType [in]
 * the number of selecting object retrived will be of one for every cell with CATMmrWithSelectingCell option,
 * and will be minimum with CATMmrWithoutSelectingCell, as cells with the same naming will share the same selecting object.
 * For exemple one a Cylinder you will retrive 2 selecting objects with CATMmrWithSelectingCell option
 * and only 1 with the other option.
 * @param iFeature [in]
 * Search is performed at the level of <tt>iFeature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>In case of error.
 *   </dl>
 */
  virtual HRESULT GetFilteredBReps(CATListValCATIMmiUseBRepAccess_var& oLBreps, const CATMmiDimension iDim = CATMmiDimUnknown, const CATMmrBRepFilterType iFilterType = CATMmrWithSelectingCell, const CATIMmiUseGeometricalElement_var& iFeature = NULL_var) = 0 ;

};
CATDeclareHandler(CATIMmiUseGeometryAccess,CATBaseUnknown);


//------------------------------------------------------------------

#endif
