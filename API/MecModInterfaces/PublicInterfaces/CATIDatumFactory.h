#ifndef CATIDatumFactory_h
#define CATIDatumFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATUnicodeString.h"
#include "CATImportSettingBehavior.h"
#include "CATIAV5Level.h"
#ifndef CATIAV5R16
#include "CATListOfCATCells.h"
#else
class CATLISTP(CATCell);
#endif
class CATBody;
class CATListValCATBaseUnknown_var;
class CATListValCATISpecObject_var;
class CATINewDuplicate_var;
class CATIContainer_var;
class CATPathElement;

#include "CATFormat.h" 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIDatumFactory;
#else
extern "C" const IID IID_CATIDatumFactory;
#endif


/**
 * Interface to create datum features.
 * <b>Role</b>: A datum feature is a geometrical feature (@href CATIGeometricalElement ) without
 * geometrical specification. It is created with a topological object (a <tt>CATBody</tt>)
 * which represents its result. 
 * <p>For a geometrical feature there is only one <tt>CATBody</tt> and 
 * a <tt>CATBody</tt> can only be associated with one geometrical feature. So do not use the same 
 * <tt>CATBody</tt> for two instances of datum.</p>
 * <p>This interface contains two methods which create the new
 * geometrical element into the current set ( @href CATIMechanicalRootFactory ). If the current set 
 * is not available, a new one can be created to insert the new feature.</p>
 * This interface is implemented by the specification container of the Part Document 
 * that you can retrieve by these two interfaces:
 * <ul>
 * <li>@href CATIContainerOfDocument#GetSpecContainer </li>
 * <li>@href CATInit#GetRootContainer </li>
 * </ul>
 */
class ExportedByMecModItfCPP CATIDatumFactory: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

/**
 * @nodoc
 * Creates a datum feature.
 * @param iList
 *  The list should contain one element, the <tt>CATBody</tt> to associate with the 
 * geometrical feature.
 */ 
   virtual CATISpecObject_var InstanciateDatum( CATListValCATBaseUnknown_var* iList) = 0;

/**
 * @nodoc
 * Creates a datum feature with a name.
 * @param iUserName
 *  The user name of the returned datum feature.
 * @param iList
 *  The list should contain one element, the <tt>CATBody</tt> to associate with the 
 * geometrical feature.
 */ 
   virtual CATISpecObject_var InstanciateDatum( const CATUnicodeString& iUserName, 
                                                CATListValCATBaseUnknown_var* iList) = 0 ; 

#ifdef CATIAV5R16
/*EQN : declared locally in CATMfDatumFactory.h of MechanicalModeler
   virtual CATISpecObject_var InstanciatePoint( CATListValCATBaseUnknown_var* lst) = 0;
   virtual CATISpecObject_var InstanciateLine ( CATListValCATBaseUnknown_var* lst) = 0;
   virtual CATISpecObject_var InstanciatePlane( CATListValCATBaseUnknown_var* lst) = 0;
*/
/*EQN : Suppression of the 2 following methods never used. The second depends of the first.
 * nodoc.
   virtual CATISpecObject_var InstanciateDatum( CATINewDuplicate_var EntiyToDuplicate, CATIContainer_var GeomCont) = 0 ;

 * nodoc.
   virtual CATLISTV(CATISpecObject_var) InstanciateData( CATINewDuplicate_var EntiyToDuplicate, CATIContainer_var GeomCont , const CATFormat* format = NULL) = 0;
 */
#else
/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciatePoint( CATListValCATBaseUnknown_var* lst) = 0;

/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciateLine ( CATListValCATBaseUnknown_var* lst) = 0;

/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciatePlane( CATListValCATBaseUnknown_var* lst) = 0;

/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciateDatum( CATINewDuplicate_var EntiyToDuplicate, CATIContainer_var GeomCont) = 0 ;

/**
 * @nodoc.
 */
   virtual CATLISTV(CATISpecObject_var) InstanciateData( CATINewDuplicate_var EntiyToDuplicate, CATIContainer_var GeomCont , const CATFormat* format = NULL) = 0;

#endif
/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciateDatum( CATPathElement* EditedPath, CATPathElement* SelectedPath, int* ImportCreationInd = NULL,CATImportSettingBehavior iSettingBehavior = UseSettingValue ) = 0 ;

/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciateDatum( CATPathElement* EditedPath, CATPathElement* SelectedPath, CATClassId intfname, int* ImportCreationInd = NULL,CATImportSettingBehavior iSettingBehavior = UseSettingValue) = 0 ; 


#ifdef CATIAV5R16
/*EQN : Declared locally in CATMfDatumFactory.h of MechanicalModeler
   virtual CATISpecObject_var InstanciateCircle(CATListValCATBaseUnknown_var* liste) = 0;
*/ 
#else
/**
 * @nodoc.
 */
   virtual CATISpecObject_var InstanciateCircle(CATListValCATBaseUnknown_var* liste) = 0;
#endif

/**
 * Creates a datum feature.
 * <br><b>Role:</b>This method creates a datum feature with an automatic naming for
 * the cells. 
 * @param iBody
 *  The <tt>CATBody</tt> to associate with the geometrical feature.
 * @param oDatumFeature
 * The new geometrical feature. Depending on the content of the <tt>CATBody</tt>, it can be:
 *  <ul>
 *   <li>a Point, a Line, a Circle, a Plane feature: The <tt>CATBody</tt> has only one domain</li>
 *   <li>a GSMZeroDim,GSMMonoDim,GSMBiDim, Solid: The <tt>CATBody</tt> has several 
 *  domains with the same dimension. Respectively 0,1, 2 and 3.</li>
 *   <li>a GeometricalElement3D feature, otherwise </li>
 *  </ul>
 */ 
  virtual HRESULT InstanciateDatum(CATBody* iBody,CATISpecObject* &oDatumFeature) = 0;

/**
 * Creates a datum feature.
 * @param iBody
 *  The <tt>CATBody</tt> to associate with the geometrical feature.
 * @param iGNUserCells
 *  The list of followed cells (<tt>CATCell</tt>). A followed cell is
 *     <ul>
 *      <li>The faces of a solid,</li>
 *      <li>The boundary edges and the faces of a shell,</li>
 *      <li>The extremity vertices and the edges of a wire.</li>
 *     </ul>
 * @param iUserKeys
 *  The list of corresponding keys. (Only number keys are authorized). 
 * @param oDatumFeature
 * The new geometrical feature. Depending on the content of the <tt>CATBody</tt>, it can be:
 *  <ul>
 *   <li>a GSMZeroDim,GSMMonoDim,GSMBiDim, Solid: The <tt>CATBody</tt> has several 
 *  domains with the same dimension. Respectively 0,1, 2 and 3.</li>
 *   <li>a GeometricalElement3D feature, otherwise </li>
 *  </ul>
 */
  virtual HRESULT InstanciateDatum(CATBody* iBody,CATLISTP(CATCell)* iGNUserCells,CATListOfCATUnicodeString* iUserKeys,CATISpecObject* &oDatumFeature) = 0;


};

CATDeclareHandler(CATIDatumFactory, CATBaseUnknown);

#endif


