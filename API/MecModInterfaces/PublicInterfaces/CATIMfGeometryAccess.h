#ifndef CATIMfGeometryAccess_h
#define CATIMfGeometryAccess_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATMfBRepDefs.h"
#include "CATMfBRepInternalDefs.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATLISTP(CATBrpObject);
class CATLISTP(CATBrpScope);

class CATIGeometricalElement_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfGeometryAccess;
#else
extern "C" const IID IID_CATIMfGeometryAccess;
#endif

/**
 * Interface to get selecting objects and topological cells through generic naming or symbolic information.
 * Methods of this interfaces are called on a source shape feature.
 * They retrieve selecting objects or topological cells from
 * the specified source shape feature,
 * a key word <tt>iKey</tt>, 
 * if needed, a profile element <tt>iProfileElement</tt> of a sketch, and
 * a <tt>iFeature</tt> to specify the search domain.
 * <br>For example, the <tt>CATIRsur</tt> selecting objects associated with the lateral face of Pad.3 
 * extruded from Line.7 are found with 
 * <tt>Pad.3->GetBReps(MfKeyExtrudedFrom,Line.7,List)</tt>.
 * Without any <tt>iFeature</tt>, the search is performed on the source solid (Pad.3 in the previous example).
 * The instruction <tt>Pad.3->GetBReps(MfKeyExtrudedFrom,Line.7,Fillet.6,List)</tt>
 * finds the <tt>CATIRsur</tt> selecting objects associated with the lateral face of Pad.3 
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

class ExportedByMecModItfCPP CATIMfGeometryAccess : public CATBaseUnknown
{
  CATDeclareInterface;
  public:

/**
 * Retrieves all the selecting objects.
 * @param oBreps
 * List of selecting objects. Query CATIBRepAccess or its derived interfaces.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(CATLISTV(CATBaseUnknown_var)& oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;

/**
 * Retrieves all the selecting objects.
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oBreps
 * List of selecting objects. Query CATIBRepAccess or its derived interfaces.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves all the topological cells.
 * @param oCells
 * List of cells. Query CATCell or its derived interfaces.
 */
  virtual int GetCells(CATLISTV(CATBaseUnknown_var)& oCells) = 0 ;

/**
 * Retrieves all the topological cells.
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oCells
 * List of topological cells. Query CATCell or its derived interfaces.
 */
  virtual int GetCells(const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oCells) = 0 ;
/** 
 * Retrieves selecting objects from symbolic information.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>: available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li> <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>: available for a shaft, a groove.</ul>
 * @param oBreps
 * List of <tt>CATIRsur</tt> selecting objects.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATUnicodeString&       iKey,
		       CATLISTV(CATBaseUnknown_var)& oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves selecting objects from symbolic information.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>: available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li> <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>: available for a shaft, a groove.</ul>
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oBreps
 * List of <tt>CATIRsur</tt> selecting objects.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATUnicodeString&           iKey,
		       const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves all the selecting objects from symbolic information.
 * Available for lateral faces of an extruded or revolute shape feature: a pad, a pocket, a shaft, a groove, a stiffener.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement
 * Profile element.
 * @param oBreps
 * List of <tt>CATIRsur</tt> selecting objects.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATUnicodeString&       iKey,
		       const CATBaseUnknown_var&     iProfileElement,
		       CATLISTV(CATBaseUnknown_var)& oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves all the selecting objects from symbolic information. 
 * Available for lateral faces of an extruded or revolute shape feature: a pad, a pocket, a shaft, a groove, a stiffener. 
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>.
 * @param iProfileElement
 * Profile element.
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oBreps
 * List of <tt>CATIRsur</tt> selecting objects.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATUnicodeString&           iKey,
		       const CATBaseUnknown_var&         iProfileElement,
		       const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves selecting objects from symbolic information.
 * Available for lateral faces of a swept shape feature: a rib, a slot.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement1
 * First profile element.
 * @param iProfileElement2
 * Second profile element.
 * @param oBreps
 * List of <tt>CATIRsur</tt> selecting objects.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATUnicodeString&       iKey,
		       const CATBaseUnknown_var&     iProfileElement1,
		       const CATBaseUnknown_var&     iProfileElement2,
		       CATLISTV(CATBaseUnknown_var)& oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves selecting objects from symbolic information.
 * Available for lateral faces of a swept shape feature: a rib, a slot.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement1
 * First profile element.
 * @param iProfileElement2
 * Second profile element.
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oBreps
 * List of <tt>CATIRsur</tt> selecting objects.
 * @param iInitMode
 * use Default value only.
 */
  virtual int GetBReps(const CATUnicodeString&           iKey,
		       const CATBaseUnknown_var&         iProfileElement1,
		       const CATBaseUnknown_var&         iProfileElement2,
		       const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oBreps,const CATMfBRepSelectInitMode iInitMode = MfInitMode_Default) = 0 ;
/**
 * Retrieves topological faces from symbolic information.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>: available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li> <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>: available for a shaft, a groove.</ul>
 * @param oCells
 * List of <tt>CATFace</tt> cells.
 */
  virtual int GetCells(const CATUnicodeString&       iKey,
		       CATLISTV(CATBaseUnknown_var)& oCells) = 0 ;
/**
 * Retrieves topological faces from symbolic information.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>:
 * <ul><li><tt>MfKeyTop</tt>, <tt>MfKeyBottom</tt>: available for a pad, a pocket, a rib, a slot, a stiffener,
 * <li> <tt>MfKeyStart</tt>, <tt>MfKeyEnd</tt>: available for a shaft, a groove.</ul>
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oCells
 * List of <tt>CATFace</tt> cells.
 */
  virtual int GetCells(const CATUnicodeString&           iKey,
		       const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oCells) = 0 ;
/**
 * Retrieves topological faces from symbolic information.
 * Available for lateral faces of an extruded or revolute shape feature: a pad, a pocket, a shaft, a groove.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement
 * Profile element.
 * @param oCells
 * List of <tt>CATFace</tt> cells.
 */
  virtual int GetCells(const CATUnicodeString&       iKey,
		       const CATBaseUnknown_var&     iProfileElement,
		       CATLISTV(CATBaseUnknown_var)& oCells) = 0 ;
/**
 * Retrieves topological faces from symbolic information.
 * Available for lateral faces of an extruded or revolute shape feature: a pad, a pocket, a shaft, a groove, a stiffener.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement
 * Profile element.
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oCells
 * List of <tt>CATFace</tt> cells.
 */
  virtual int GetCells(const CATUnicodeString&           iKey,
		       const CATBaseUnknown_var&         iProfileElement,
		       const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oCells) = 0 ;
/**
 * Retrieves topological faces from symbolic information.
 * Available for lateral faces of a swept shape feature: a rib, a slot.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement1
 * First profile element.
 * @param iProfileElement2
 * Second profile element.
 * @param oCells
 * List of <tt>CATFace</tt> cells.
 */
  virtual int GetCells(const CATUnicodeString&       iKey,
		       const CATBaseUnknown_var&     iProfileElement1,
		       const CATBaseUnknown_var&     iProfileElement2,
		       CATLISTV(CATBaseUnknown_var)& oCells) = 0 ;
/**
 * Retrieves topological faces from symbolic information.
 * Available for lateral faces of a swept shape feature: a rib, a slot.
 * @param iKey
 * Key word.
 * <br><b>Legal values</b>: <tt>MfKeyExtrudedFrom</tt>
 * @param iProfileElement1
 * First profile element.
 * @param iProfileElement2
 * Second profile element.
 * @param iFeature
 * Search is performed at the level of <tt>iFeature</tt>.
 * @param oCells
 * List of <tt>CATFace</tt> cells.
 */
  virtual int GetCells(const CATUnicodeString&           iKey,
		       const CATBaseUnknown_var&         iProfileElement1,
		       const CATBaseUnknown_var&         iProfileElement2,
		       const CATIGeometricalElement_var& iFeature,
		       CATLISTV(CATBaseUnknown_var)&     oCells) = 0 ;


/**
 * @nodoc
 * Internal use only.
 */  
  virtual int GetNodes(const CATIGeometricalElement_var &iFeature,CATLISTP(CATBrpScope) &oScopes,CATLISTP(CATBrpObject) &oNodes) = 0;

/**
 * @nodoc
 * Internal use only.
 */  
  virtual int GetBReps(CATLISTV(CATBaseUnknown_var) &oBreps, CATListOfInt &oInformation, const CATMfBRepSelectInitMode InitMode = MfInitMode_Default) = 0;

};

CATDeclareHandler( CATIMfGeometryAccess, CATBaseUnknown ) ;

#endif




