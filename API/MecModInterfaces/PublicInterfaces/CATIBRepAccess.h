#ifndef CATIBRepAccess_h
#define CATIBRepAccess_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIAV5Level.h"
#include "CATMfBRepDefs.h"
#include "CATMfBRepInternalDefs.h"
#include "CATILinkableObject.h"

//#include "CATISpecObject.h"
#include "CATIGeometricalElement.h" // A migrer sur CATISpecObject ---> Attention impact Compil !! signature CATIRSur.h(59) et CATIREdge.h(64) a changer plus clients qui ont oublie de faire l'include

#include "CATLISTP_Declare.h"

#include "CATListOfCATIBRepAccess.h"

#include "CATLISTV_CATISpecObject.h"
#include "CATListOfInt.h"
#include "CATCORBABoolean.h"
#include "MecModItfCPP.h"

class CATListPtrCATBrpObject;
class CATListPtrCATBrpScope;

class CATUnicodeString;
class CATISpecObject_var;
class CATCell_var;
#if defined(CATIAV5R25) || defined(CATIAR417)
class CATTopology_var;
#endif
class CATBody_var;
class CATBrpObject;
class CATBrpScope;
class CATReportSelect;
class CATNamingReference;
class CATIBRepAccess_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIBRepAccess;
#else
extern "C" const IID IID_CATIBRepAccess;
#endif

/**
* Interface to manage a selecting object.
* The selecting objects:
* <br> @ref CATIRSur, @ref CATIBorderREdge, @ref CATIWireREdge and @ref CATIBorderFVertex
* are directely named in the generic naming graph.
* <br>The selecting objects:
* @ref CATIREdge @ref CATIFVertex and @ref CATIWireFVertex
* are identified by a list of objects in the generic naming graph.
* @see CATIMfBRepFactory, CATIFeaturize, CATIMfProcReport
*/
class ExportedByMecModItfCPP CATIBRepAccess: public CATILinkableObject
{
  CATDeclareInterface;

public: 

  /**
  * Creates the extended label.
  * @param iFeature
  * Support feature.
  * @param iBRepType
  * <b>Legal values</b>: <tt>MfRelimited</tt>, <tt>MfFunctional</tt>.
  * @exception @href CATError
  */
  virtual CATUnicodeString GetMechanicalExtendedLabel(const CATISpecObject_var &iFeature, 
    const CATMfBRepType iBRepType) const= 0; 

  /**
  * Reads the object validity status.
  * @return
  * Returns True if the selecting object is correctly named by the generic naming.
  */
  virtual CATBoolean IsValid() const = 0; 

  /**
  * Reads the object validity.
  * @return
  * Returns True if the selecting object is correctly named by the generic naming.
  */
  virtual CATBoolean GetValidity() const = 0;

  /**
  * Reads the selecting object type.
  * @return
  * <b>Legal values</b>:
  * <tt>MfRVolume</tt>,
  * <tt>MfRSur</tt>,
  * <tt>MfREdge</tt>,
  * <tt>MfFVertex</tt>,
  * <tt>MfBorderREdge</tt>,
  * <tt>MfBorderFVertex</tt>,
  * <tt>MfWireREdge</tt>,
  * <tt>MfWireFVertex</tt>,
  * <tt>MfAxis</tt>,
  * <tt>MfExtremity</tt>,
  * <tt>MfPlanarSubElement</tt>,
  * <tt>MfUnknownElementType</tt>
  * @exception @href CATError
  */
  virtual CATMfBRepAccessElementType GetBRepElementType() = 0;   

  /**
  * Reads the selecting object type status.
  * @param iType
  * <b>Legal values</b>:
  * <tt>MfRVolume</tt>,
  * <tt>MfRSur</tt>,
  * <tt>MfREdge</tt>,
  * <tt>MfFVertex</tt>,
  * <tt>MfBorderREdge</tt>,
  * <tt>MfBorderFVertex</tt>,
  * <tt>MfWireREdge</tt>,
  * <tt>MfWireFVertex</tt>,
  * <tt>MfAxis</tt>,
  * <tt>MfExtremity</tt>,
  * <tt>MfPlanarSubElement</tt>,
  * <tt>MfUnknownElementType</tt>
  * @return
  * Returns 1 if <tt>iType</tt> is the correct type, 0 if <tt>iType</tt> is not.
  * @exception @href CATError
  */
  virtual int IsABRep(const CATMfBRepAccessElementType iType) = 0; 

  /**
  * Returns the feature that generated the selecting object.
  * This feature is the oldest according to the history of the mechanical part, and takes connexity into account.
  * <br>If this feature is a <tt>ResultOUT</tt>, it is not displayed in the specification tree.
  * @exception @href CATError
  */
  virtual CATISpecObject_var GetLastFeature() const = 0;

  /**
  * Returns the youngest feature according to the history of the mechanical part, that generated the selecting object.
  * <br>If this feature is a <tt>ResultOUT</tt>, it is not displayed in the specification tree.
  * @exception @href CATError
  */
  virtual CATISpecObject_var GetInitialFeature() const = 0; 

  /**
  * Returns the visible feature that generated the selecting object.
  * Returns the youngest feature according to the history of the mechanical part, 
  * that generated the selecting object and that is displayed in the specification tree.
  * @exception @href CATError
  */
  virtual CATISpecObject_var  GetInitialMasterFeature() const = 0;  

  /**
  * Returns the oldest feature, according to the history of the mechanical part, that generated the selecting object.
  * Searching strategy starts from the current feature of the part and goes back in time through the part history
  * according to the input parameter. This is an advanced method.
  *
  * @param iSearchType
  * <b>Legal values</b>:
  * 
  * <br>With <tt>MfModification</tt>, the returned feature is the oldest one that generated the selecting object.
  * The search stops at a mirror, draft angle or thickness feature, even if the source feature is younger. 
  * For example, the returned feature is the thickness if the selecting object is the thicked lateral face of a pad.
  * This is the default strategy of the previous methods.
  * 
  * <br>With <tt>MfCovering</tt>, the search goes beyond mirror, draft angle and thickness.
  * For example, the returned feature is the pad if the selecting object is a thicked lateral face of the pad.
  * 
  * <br>With <tt>MfGeneration</tt>, the returned feature is searched through mirror, draft angle, thickness 
  * and up to the highest root. 
  * For example, if the selecting object is the thicked lateral face of the pad, 
  * the returned feature is the curve in the sketch of the pad from which the lateral face is built.
  * @exception @href CATError
  */

  virtual CATISpecObject_var GetInitialFeature(const CATMfNodeReportType iSearchType) const = 0;

  /**
  * Returns the feature containing the selected object.
  * <br>If this feature is a <tt>ResultOUT</tt>, it is not displayed in the specification tree.
  * @exception @href CATError
  */
  virtual CATISpecObject_var GetSelectingFeature() const = 0;

  /**
  * Returns the parent feature of the feature containing the selected object. 
  * This feature is displayed in the specification tree.
  * @exception @href CATError
  */
  virtual CATISpecObject_var GetSelectingMasterFeature()  const = 0;

  /**
  * Returns the selected cell.
  */
  virtual CATCell_var GetSelectingCell() const =0;

  /**
  * Returns the body that contains the selected cell.
  * @exception @href CATError
  */
  virtual CATBody_var GetSelectingBody() const =0;

  /**
  * Returns the low topological dimension of the domain that contains the selected cell.
  * @return
  * Returns 1 for a wire, 2 for a shell, 3 for a lump, -1 if the dimension cannot be computed.
  * @exception @href CATError
  */
  virtual short GetSelectingLowDimension() const = 0 ;

  /**
  * Returns the high topological dimension of the domain that contains the selected cell.
  * @return
  * Returns 1 for a wire, 2 for a shell, 3 for a lump, -1 if the dimension cannot be computed.
  * @exception @href CATError
  */
  virtual short GetSelectingHighDimension() const = 0;

  /**
  * Returns the children of the selecting object in the generic naming graph.
  * @param iFeature
  * Search is performed at the <tt>iFeature</tt> level; in the whole generic naming graph if <tt>iFeature</tt> is NULL.
  * @param iType
  * <b>Legal values</b>:
  * <tt>MfModification</tt>, 
  * <tt>MfCovering</tt>, 
  * <tt>MfGeneration</tt> specifies the search strategy.
  * @exception @href CATError
  */
  virtual CATLISTP(CATIBRepAccess) UnGroup (const CATISpecObject_var &iInFeature = NULL_var,
    const CATMfNodeReportType iType = MfModification) const = 0;

  /**
  * Returns the grandparents of the selecting object.
  * @param iFeature
  * Search in performed in the <tt>iFeature</tt> body, in the whole generic naming graph if <tt>iFeature</tt> is NULL.
  * @param iType
  * <b>Legal values</b>:
  * <tt>MfModification</tt>, 
  * <tt>MfCovering</tt>, 
  * <tt>MfGeneration</tt> specifies the search strategy.
  * @exception @href CATError
  */
  virtual CATLISTP(CATIBRepAccess) GetAncestors(const CATISpecObject_var &iFeature = NULL_var,
    const CATMfNodeReportType iType = MfModification) const = 0;

  /**
  * Returns the selecting objects with the same topological dimension.
  * All these selecting objects have the same label, they cannot be distinguished from each other.
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBReps()= 0;

  /**
  * Returns selecting objects with the same topological dimension.
  * All these selecting objects have the same label, they cannot be distinguished from each other.
  * @param iFeature
  * Search is performed in the body associated with <tt>iFeature</tt>. 
  * @param iBRepType
  * either MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType. 
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBReps(const CATISpecObject_var &iFeature,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * Returns selecting objects according to a specified dimension.
  * @param iDim
  * Topological dimension of search objects.
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBReps(const int iDim)= 0;

  /**
  * Returns selecting objects according to a specified dimension.
  * @param iFeature
  * Search is performed in the body associated with <tt>iFeature</tt>.
  * @param iDim
  * Topological dimension of search objects.
  * @param iBRepType
  * either MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType. 
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBReps(const CATISpecObject_var &iFeature,
    const int iDim,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * Returns the connectivity of a selecting object.
  * <br>The selecting object is not connected when the underlying geometry is made of more than one piece.
  * In this case several selecting objects have the same label.
  * <br>The selecting object is connected when the underlying geometry is made of exactly one piece.
  * @return
  * <b>Legal values</b>:
  * <tt>MfNoConnex</tt> when it is not connected, <tt>MfConnex</tt> when it is connected, 
  * <tt>MfUnknownConnexity</tt> when the connectivity status is unknown.
  * @exception @href CATError
  */
  virtual CATMfConnexityType GetConnexity()= 0;

  /**
  * Returns the connectivity of a selecting object.
  * <br>The selecting object is not connected when the underlying geometry is made of more than one piece.
  * In this case several selecting objects have the same label.
  * <br>The selecting object is connected when the underlying geometry is made of exactly one piece.
  * @param iFeature
  * Search is performed in the body associated with <tt>iFeature</tt>. 
  * @param iBRepType
  * either MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType. 
  * @return
  * <b>Legal values</b>:
  * <tt>MfNoConnex</tt> when it is not connected, <tt>MfConnex</tt> when it is connected, 
  * <tt>MfUnknownConnexity</tt> when the connectivity status is unknown.
  * @exception @href CATError
  */
  virtual CATMfConnexityType GetConnexity(const CATISpecObject_var &iFeature,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * Returns the topological dimension of a selecting object.
  * @return
  * <b>Legal values</b>:
  * 0 for a vertex, 1 for an edge or 2 for a face.
  * @exception @href CATError
  */
  virtual int GetDimension() const = 0;

  /**
  * Returns the infinite property of a selecting object.
  * @return
  * The infinity mode of <tt>this</tt>.
  * <br><b>Legal values</b>:
  * <tt>TRUE</tt>, if <tt>this</tt> must be considered as infinite, 
  * <tt>FALSE</tt> if it is finite (default mode).
  * @exception @href CATError
  */
  virtual CATBoolean IsInfinite() =0;

  /**
  * Returns 1 if the the selecting object can be solved in the body of the <tt>ResultOUT</tt> of iFeature object.
  * @param iFeature
  * Solving is performed in the body of the <tt>ResultOUT</tt> of <tt>iFeature</tt> object.
  * @param iBRepType
  * either MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType. 
  */
  virtual int IsSolvable(const CATISpecObject_var &iFeature,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0;

  /**
  * Returns the cells associated with the selecting object.
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetCells() = 0;

  /**
  * Returns the cells associated with the children nodes of the selecting object.
  * @param iFeature
  * Search is performed in the body associated with iFeature. 
  * @param iBRepType
  * either MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType. 
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetCells(const CATISpecObject_var &iFeature,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0;

  /**
  * Returns the cells with a specified dimension and associated with the selecting object.
  * @param iDim
  * 0 for vertices, 1 for edges or 2 for faces. 
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetCells(const int iDim)= 0;

  /**
  * Returns the cells with a specified dimension and associated with the selecting object.
  * @param iFeature
  * Search is performed in the bidy associated with <tt>iFeature</tt>. 
  * @param iDim
  * 0 for vertices, 1 for edges or 2 for faces. 
  * @param iBRepType
  * either MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType. 
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) GetCells(const CATISpecObject_var &iFeature,
    const int iDim,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * Returns the associated faces followed by the generic naming graph.
  *
  * @param oCardList
  * 
  * If the selecting object is a @href CATIMmiUseVolumeAccess then <tt>oCardList[1]</tt> is the number of faces.

  * If the selecting object is a @href CATIRSur  then <tt>oCardList[1]</tt> is the number of faces.
  * 
  * <br>If the selecting object is a @href CATIREdge then <tt>oCardList[1]</tt> is the number of adjacent left faces and
  * <tt>oCardList[2]</tt> is the number of adjacent right faces.
  * 
  * <br>If the selecting object is a @href CATIFVertex then <tt>oCardList[i]</tt> is the number of faces 
  * adjacent to the vertex, faces that are trimmed pieces of the same initial face.
  *
  * <br>If the selecting object is a @href CATIBorderREdge then <tt>oCardList[1]</tt> is the number of faces 
  * adjacent to the edge. 
  * All these faces are located on the same side of the edge in case of the selecting object is a border edge.
  ** @return
  * Returns an empty list if the selecting object is a 
  * @href CATIBorderFVertex, a @href CATIWireREdge or a @href CATIWireFVertex
  * since they never have any adjacent faces.
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) ResolveFaces(CATListOfInt& oCardList) = 0 ;

  /**
  * Returns the faces associated to a selecting object.
  * @param iFeature
  * Search is performed in the body associated with iFeature. 
  * @param oCardList
  * If the selecting object is a @href CATIRSur then <tt>oCardList[1]</tt> is the number of faces.
  * 
  * <br>If the selecting object is a @href CATIREdge then <tt>oCardList[1]</tt> is the number of adjacent left faces and
  * <tt>oCardList[2]</tt> is the number of adjacent right faces.
  * 
  * <br>If the selecting object is a @href CATIFVertex then <tt>oCardList[i]</tt> is the number of faces 
  * adjacent to the vertex, faces that are trimmed pieces of the same initial face.
  *
  * <br>If the selecting object is a @href CATIBorderREdge then <tt>oCardList[1]</tt> is the number of faces 
  * adjacent to the edge. 
  * All these faces are located on the same side of the edge in case of the selecting object is a border edge.
  *
  * @param iBRepType
  * Specify the way the serach is to be processed.
  * MfFunctional to get all the elements with same underlying geometry or MfDefaultBRepType can be specified according to the needs.
  * @return
  * Returns an empty list if the selecting object is a 
  * @href CATIBorderFVertex, a @href CATIWireREdge or a @href CATIWireFVertex
  * since they never have any adjacent faces.
  * @exception @href CATError
  */
  virtual CATLISTV(CATBaseUnknown_var) ResolveFaces(const CATISpecObject_var &iFeature,
    CATListOfInt& oCardList,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0;

  /**
  * Returns the Geometry associated to a selecting object.
  * @param oGeometries
  * Geometrical elements associated with the selecting object. 
  * @exception @href CATError
  */
  virtual int GetGeometries(CATLISTV(CATBaseUnknown_var) &oGeometries) =0;

  /**
  * Returns the cells associated with the selecting object.
  * @param iFeature
  * Search is performed in the body associated with iFeature. 
  * @param oGeometries
  * Geometrical elements associated with the selecting object. 
  * @exception @href CATError
  */   
  virtual int GetGeometries(const CATISpecObject_var &iFeature,CATLISTV(CATBaseUnknown_var) &oGeometries) =0; 

  /**
  * Returns the body created with cells followed in the generic naming graph.
  * @exception @href CATError
  */
  virtual CATBody_var CreateBody()=0;

  /**
  * Creates the body created with cells associated with the selecting object.
  * @param iFeature
  * Search is performed in the body associated with iFeature. 
  * @exception @href CATError
  */   
  virtual CATBody_var CreateBody(const CATISpecObject_var &iFeature,const CATMfBRepType iBRepType = MfDefaultBRepType)=0;

  /**
  * Analyses if the selecting object involves a specified feature.
  * If the specified feature is deleted, the selecting object becomes invalid.
  * @param iFeature
  * Design feature. 
  * @exception @href CATError
  */ 
  virtual int IsImpactedBy(const CATISpecObject_var &iFeature) const = 0; 

  /**
  * Analyses if the selecting object involves a specified feature.
  * If the specified feature is deleted, the selecting object becomes invalid.
  * @param iFeature
  * Design feature.
  * @param iBRepType
  * <b>Legal values</b>:
  * <tt>MfFunctional</tt>, <tt>MfRelimited</tt> is the default value if <tt>iBRepType</tt> parameter is not specified. 
  * @exception @href CATError
  */
  virtual int IsImpactedBy(const CATISpecObject_var &iFeature,
    const CATMfBRepType iBRepType) const = 0;

  /**
  * Returns the features involved in the selecting object definition.
  * @exception @href CATError
  */
  virtual CATLISTV(CATISpecObject_var) GetNecessaryFeatures() const =0;

  /**
  * Returns the features involved in the selecting object definition.
  * @param iBRepType
  * <b>Legal values</b>:
  * <tt>MfFunctional</tt>, <tt>MfRelimited</tt> is the default value if <tt>iBRepType</tt> parameter is not specified. 
  * @exception @href CATError
  */
  virtual CATLISTV(CATISpecObject_var) GetNecessaryFeatures(const CATMfBRepType iBRepType) const =0;

  /**
  * Returns 1 if the selecting objects are same.
  * @param iBrep
  * Selecting object to be compared.
  */
  virtual int IsSame(const CATIBRepAccess_var &iBrep) const = 0; 

  /**
  * Returns 1 if the labels of selecting objects are same.
  * @param iBrep
  * Selecting object to be compared.
  * @param iBRepType
  * BRep type.
  */
  virtual int IsSameLabel(const CATIBRepAccess_var &iBrep,
    const CATMfBRepType iBRepType = MfDefaultBRepType) const = 0; 



  /**
  * @nodoc 
  * Internal use only.
  */
  /**
  * @nodoc
  */
  virtual CATUnicodeString GetEtiquette() const = 0;

  /**
  * @nodoc
  */
  virtual CATUnicodeString GetEtiquette(const CATMfBRepType iBRepType) const = 0;

  /**
  * @nodoc 
  */  
  virtual int GetAncestorsFeatures(CATLISTV(CATISpecObject_var) &oSpecs) const = 0;

  /**
  * @nodoc 
  */
  virtual int GetAncestorsFeatures(const CATMfSearchFathersOrSons iSearch,CATLISTV(CATISpecObject_var) &iSpecs) const = 0; 

  /**
  * @nodoc 
  */
  virtual int GetAncestorsFeatures(const CATMfNodeReportType iType,const CATMfSearchFathersOrSons iSearch,CATLISTV(CATISpecObject_var) &oSpecs) const = 0; 

  /**
  * @nodoc
  */
  virtual CATBrpScope *GetSelectingScope() const =0;

  /**
  * @nodoc 
  */
  virtual int AddDelegateGeometry() const= 0;
  /**
  * @nodoc 
  */
  virtual int AddDelegateGeometry(const CATCell_var &iCell) const= 0;
  /**
  * @nodoc 
  */
  virtual int RemoveDelegateGeometry() const= 0;

  /**
  * @nodoc 
  */ 
  virtual CATLISTP(CATIBRepAccess) UnGroup (const CATISpecObject_var &iInScope,const CATMfNodeReportType iType,const CATMfGNNavigMode navigMode) const = 0;

  /**
  * @nodoc 
  */ 
  virtual CATLISTP(CATIBRepAccess) GetAncestors(const CATISpecObject_var &iInScope,const CATMfNodeReportType iType,const CATMfGNNavigMode navigMode) const = 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBRepNodes() = 0; 

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBRepNodes(CATBrpScope *iInScope,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBRepNodes(const CATISpecObject_var &iInScope,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBReps(CATBrpScope *iInScope,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetBReps(CATBrpScope *iScope,
    const int iDim,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * @nodoc
  */
  virtual CATMfConnexityType GetConnexity(CATBrpScope *iScope,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetCells(CATBrpScope* iScope,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) GetCells(CATBrpScope *iScope,
    const int iDim,const CATMfBRepType iBRepType = MfDefaultBRepType)= 0;

  /**
  * @nodoc
  */
  virtual CATLISTV(CATBaseUnknown_var) ResolveFaces(CATBrpScope *iScope,
    CATListOfInt &oCardList,const CATMfBRepType iBRepType = MfDefaultBRepType) = 0 ;

  /**
  * @nodoc 
  */  
  virtual int GetGeometries(const CATISpecObject_var &ScopeAccess,const CATMfBRepType iBRepType,CATLISTV(CATBaseUnknown_var) &oGeometries) =0;

  /**
  * @nodoc 
  */ 
  virtual int GetGeometries(CATBrpScope *scope,const CATMfBRepType iBRepType,CATLISTV(CATBaseUnknown_var) &oGeometries)=0;

  /**
  * @nodoc 
  */
  virtual CATBody_var CreateBody(CATBrpScope *scope,const CATMfBRepType iBRepType = MfDefaultBRepType)=0;        

  /**
  * @nodoc 
  */ 
  virtual HRESULT CreateBRepAccessForSymbolicLink(const CATMfFeaturizeMode iMode,const CATUnicodeString &iViewName,CATIBRepAccess_var & oBRepAccess) = 0;

  /**
  * @nodoc 
  */ 
  virtual CATMfFeaturizeMode GetSymbolicLinkResolveMode() const = 0;

  /**
  * @nodoc 
  */  
  virtual CATBoolean WithSymbolicLinkResolveMode(const CATMfFeaturizeMode iMode) const = 0;

  /**
  * @nodoc 
  */ 
  virtual void SetSymbolicLinkResolveView(const CATUnicodeString &iNameVue) = 0;

  /**
  * @nodoc 
  */ 
  virtual void GetSymbolicLinkResolveView(CATUnicodeString &oViewName) const = 0;

  /**
  * @nodoc 
  */ 
  virtual CATBoolean InSymbolicLinkResolveView(const CATUnicodeString &iViewName) const = 0;

  /**
  * @nodoc
  */
  virtual CATNamingReference* GetNamingReference() const = 0; 

  /**
  * @nodoc
  */
  virtual CATNamingReference* GetNamingReference(const CATMfBRepType iBRepType,
    const CATMfTypeNamingReference iNamingReferenceType) const = 0; 

  /**
  * @nodoc
  */
  virtual CATBrpScope* GetCreatingScope() const = 0;

  /**
  * @nodoc
  */
  virtual CATBrpObject* GetNode() const = 0;

  /**
  * @nodoc
  */
  virtual CATLISTP(CATBrpObject) GetNodes() = 0; 

  /**
  * @nodoc
  */
  virtual int IsInScope(CATBrpScope *iScope) const = 0; 

  /**
  * @nodoc
  */
  virtual int IsInScope(const CATISpecObject_var &iFeature) const = 0; 

  /**
  * @nodoc 
  * Deleted in next version
  */


  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual void InitBRep() = 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual void InitBRep(const CATCell_var &iSelectingCell,
    CATReportSelect *iSelector,
    CATBrpScope *iSelectingScope, 
    const CATMfBRepAccessElementType iType,const CATMfBRepSelectInitMode iInitMode = MfInitMode_RW) = 0; /**
                                                                                                         * @nodoc 
                                                                                                         * Deleted in next version
                                                                                                         */ 
  virtual CATUnicodeString GetExtendedLabel(const CATISpecObject_var &iFeature,
    const CATMfBRepType iBRepType) const= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */ 
  virtual void CreateExtendedLabel(unsigned int iDiezele,const CATMfBRepType iBRepTypeUser,
    CATUnicodeString &oLabel) const =0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual CATISpecObject_var GetSpecLabel(const CATISpecObject_var &iFeature,
    const CATMfBRepType iBRepType) const= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual CATISpecObject_var GetSpecLabel(const CATMfBRepType iBRepType) const= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual CATISpecObject_var GetSpecLabel() const= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual CATReportSelect* GetSelector()= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual CATReportSelect* GetSelector(const CATMfBRepType iBRepType)= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual void SetSelector(CATReportSelect* iSelector)= 0; 
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual void DeleteSelector(CATReportSelect* iSelector) const= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual   void CreateMechanicalExtendedLabel(unsigned int iDiezele,
    const CATMfBRepType iBRepType,
    CATUnicodeString &oLabel) const= 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual void SetValidity(CATBoolean validity) = 0;
  /**
  * @nodoc 
  * Deleted in next version
  */
  virtual void SetSelectingScope(CATBrpScope *scope)=0;

  /**
  * @nodoc 
  * Deleted in next version
  */ 
  virtual int IsFeaturizableAndSolvable(const CATMfBRepType &iBRepTypeUser,const CATBaseUnknown_var &iSupport,const CATMfFeaturizeMode iMode,const CATISpecObject_var &iFeat)= 0;
  /**
  * @nodoc
  * Deleted in next version
  */
  virtual CATLISTP(CATBrpScope) GetCreatingScopes() = 0; 

  /**
  * @nodoc 
  * Deleted in next version
  */ 
  virtual void SetSymbolicLinkResolveMode(const CATMfFeaturizeMode iMode) = 0;

#if defined(CATIAV5R25) || defined(CATIAR417)
  /**
  * Returns the selected topology.
  */
  virtual CATTopology_var GetSelectingTopology() const = 0;
#endif

};

CATDeclareHandler( CATIBRepAccess, CATILinkableObject) ;

#endif
