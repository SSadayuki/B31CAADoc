#ifndef CATIMfBRep_h
#define CATIMfBRep_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATMfBRepDefs.h"
#include "CATMmiContractDefs.h"
#include "CATMfBRepInternalDefs.h"
#include "CATBaseUnknown.h"
#include "CATISpecObject.h" 
#include "CATIGeometricalElement.h" 
#include "CATIPrtContainer.h"
#include "CATIAV5Level.h"
#include "CATListOfCATIRSur.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATUnicodeString.h"
class CATLISTP(CATCell);
class CATLISTP(CATGeometry);
class CATIMfBRep_var; 
class CATIBRepAccess_var; 
class CATISpecObject_var; 
class CATISpecAttribute_var;
class CATIMfPropagation_var; 
class CATBrpScope;
class CATReportSelect;
class CATNamingReference; 
class CATBody_var; 
class CATIMmiBrepFtrContract_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfBRep;
#else
extern "C" const IID IID_CATIMfBRep;
#endif

/**
 * Interface to manage BRep features.
 */

class ExportedByMecModItfCPP CATIMfBRep : public CATBaseUnknown
{
  CATDeclareInterface;
  public:


/**
 * Returns BRep type.
 * @return
 * <b>Legal values</b>: <tt>MfRelimited</tt>, <tt>MfFunctional</tt>
 * @exception @href CATError
 */
  virtual CATMfBRepType GetBRepType() const = 0;

/**
 * Returns True if <tt>iType</tt> is the correct type, otherwise False.
 * @param iType
 * <b>Legal values</b>: <tt>MfRelimited</tt>, <tt>MfFunctional</tt>
 * @exception @href CATError
 */
  virtual CATBoolean IsABRep(const CATMfBRepType iType) const = 0;

/**
 * Returns True if <tt>iType</tt> is the correct type, otherwise False.
 * @param iSuperBRepType
 * <b>Legal values</b>:
 * <ul><li><tt>MfSimpleBRep</tt>,
 * <li><tt>MfSuperBRep</tt>,
 * <li><tt>MfSBWithoutSecoursInit</tt>,
 * <li><tt>MfSBWithAutomaticSecoursInits</tt>,
 * <li><tt>MfSBWithMonoBody</tt>,
 * <li><tt>MfSBWithMultiBody</tt>,
 * <li><tt>MfSBWithSecondaryInits</tt>,
 * <li><tt>MfSBWithoutSecondaryInit</tt>,
 * <li><tt>MfIntersectionBRep</tt>.</ul>
 * @exception @href CATError
 */ 
  virtual CATBoolean IsASuperBRep(const CATMfSuperBRepType iSuperBRepType=MfSuperBRep) const = 0 ;

/**
 * Returns True if <tt>MfIntersectionBRep</tt> is the correct type, otherwise False.
 * @exception @href CATError
 */ 
  virtual CATBoolean IsAIntersectionBRep() const = 0;

/**
 * Returns 1 if the BRep feature is same as <tt>iObject</tt>.
 * @param iObject
 * Selecting object or BRep feature.
 */
  virtual int IsSame(const CATBaseUnknown_var &iObject)=0;

/**
 * Returns 1 if the labels are same.
 * @param iLabel
 * Label.
 */
  virtual int IsSame(const CATUnicodeString &iLabel)=0;

/**
 * Returns True if the selecting object <tt>iBRep</tt> can generate a <tt>this</tt> type BRep feature.
 * @param iBRep
 * Selecting object.
 * @exception @href CATError
 */
  virtual CATBoolean IsCompatibleWith(const CATIBRepAccess_var &iBRep) const = 0;

/**
 * Returns the cells associated with the BRep feature.
 * @param iFeat
 * Cells are searched on <tt>iFeat</tt> solid.
 * @return
 * Either a list of <tt>CATFace</tt> or <tt>CATEdge</tt> or <tt>CATVertex</tt>.
 * @exception @href CATError
 */
  virtual CATLISTP(CATCell) GetCells(const CATISpecObject_var &iFeat=NULL_var)const =0; 

/**
 * Returns the geometrical objects associated with the cells of the BRep feature.
 * @param iFeat
 * Geometrical objects are searched on <tt>iFeat</tt> solid.
 * @return
 * List of <tt>CATGeometry</tt>.
 * @exception @href CATError
 */
  virtual CATLISTP(CATGeometry) GetGeometry(const CATISpecObject_var &iFeat=NULL_var)const =0; 

/**
 * Changes the definition of the BRep feature with the <tt>iNewBrep</tt> definition.
 * @param iNewBrep
 * New BRep definition.
 * @exception @href CATError
 */
  virtual int Modify(const CATIBRepAccess_var &iNewBrep)=0;

/**
 * Changes the definition of the BRep feature with the <tt>iNewBrep</tt> definition.
 * @param iNewBrep
 * New BRep definition.
 * @param iSupport
 * New support.
 * @param iMode
 * <b>Legal values</b>:
 * <ul><li><tt>MfNoDuplicateFeature</tt>,
 * <li><tt>MfDuplicateFeature</tt>,
 * <li><tt>MfTemporaryBody</tt>,
 * <li><tt>MfPermanentBody</tt>,
 * <li><tt>MfInitialFeatureSupport</tt>,
 * <li><tt>MfSelectingFeatureSupport</tt>, 
 * <li><tt>MfLastFeatureSupport</tt>, 
 * <li><tt>MfNoFeatureSupport</tt>, 
 * <li><tt>MfDefaultFeatureSupport</tt>,
 * <li><tt>MfWithBuildError</tt>,  
 * <li><tt>MfWithoutBuildError</tt>,
 * <li><tt>MfNoFeaturization</tt>,
 * <li><tt>MfFunctionalFeaturization</tt>, 
 * <li><tt>MfRelimitedFeaturization</tt>,
 * <li><tt>MfBorderFeaturization</tt>,
 * <li><tt>MfWireFeaturization</tt>.</ul>
 * @exception @href CATError
 */
  virtual int Modify(const CATIBRepAccess_var &iNewBrep,
                     const CATBaseUnknown_var &iSupport,
                     const CATMfFeaturizeMode iMode)=0;

/**
 * Returns the support.
 * Support can be a shape feature of the specification tree or a result out of a shape feature.
 * @exception @href CATError
 */
  virtual CATISpecObject_var  GetSupport()const =0;

/**
 * Returns the support as a shape feature displayed in the specification tree.
 * @exception @href CATError
 */
  virtual CATISpecObject_var GetMasterSupport() const =0;

/**
 * Updates the support.
 * @exception @href CATError
 */
  virtual HRESULT UpdateSupport()=0;

/**
 * Updates the support.
 * @param iMode
 * <b>Legal values</b>:
 * <tt>MfStandardUpdateSupport</tt>, <tt>MfForceUpdateSupport</tt>.
 * @return
 *   <code>S_OK or E_FAIL</code>.<br>
 */
  virtual HRESULT UpdateSupport(const CATMfBRepUpdateSupport iMode)=0;


/**
 * Returns the number of surfaces associated with the BRep feature.
 * @return
 * <ul><li>1 if the BRep feature is a <tt>CATIMfFSur</tt> or a <tt>CATIMfRSur</tt>,
 * <li>2 if the BRep feature is a <tt>CATIMfFedge</tt> or a <tt>CATIMfRedge</tt>,
 * <li>3 and more if the BRep feature is a <tt>CATIMfFvertex</tt>.</ul>
 */
  virtual int GetNbSur() const=0;

/**
 * Returns 1 if the BRep feature can be solved.
 * @param iFeat
 * Solving is performed on the body of the <tt>ResultOUT</tt> of <tt>iFeat</tt> object.
 */
  virtual int IsSolvable(const CATISpecObject_var &iFeat=NULL_var) const =0;

/**
 * Returns the connectivity of the BRep feature.
 * <br>The BRep feature is not connected when the underlying geometry is made of more than one piece.
 * In such case several nodes have the same label in the generic naming graph.
 * It is connected when the underlying geometry is made of one piece only.
 * @param iFeat
 * Search in performed in the body associated with <tt>iFeat</tt>. 
 * @return
 * <b>Legal values</b>:
 * <tt>MfNoConnex</tt> when not connected, <tt>MfConnex</tt> when connected, <tt>MfUnknownConnexity</tt>.
 * @exception @href CATError
 */
  virtual CATMfConnexityType GetConnexity(const CATISpecObject_var &iFeat=NULL_var)const =0;  

/**
 * Returns the selecting objects associated with the BRep feature.
 * @param iFeat
 * Search in performed in the <tt>ResultOUT</tt> body associated with <tt>iFeat</tt>. 
 * @exception @href CATError
 */
  virtual CATLISTV(CATBaseUnknown_var)  GetBRep(const CATISpecObject_var &iFeat=NULL_var)const =0; 

/**
 * Returns the surface selecting objects associated with the BRep feature.
 * @param iNumSur
 * Number of surfaces.
 * @return
 * If the BRep feature is a face, returns the associated selecting objects.
 * <br>If the BRep feature is an edge, <ul><li><tt>iNumSur=0</tt> returns the selecting objects on both sides of the edge, 
 * <li><tt>iNumSur=1</tt> returns the selecting objects on the left side of the edge,
 * <li><tt>iNumSur=2</tt> returns the selecting objects on the right side of the edge.</ul>
 * <br>If the selecting object is a vertex, 
 * <ul><li><tt>iNumSur=0</tt> returns the selecting objects associated with the vertex,
 * <li><tt>iNumSur=i</tt> returns the selecting objects on the ith side of the vertex. </ul>
 * @exception @href CATError
 */
  virtual CATLISTP(CATIRSur) GetRSurs(const int iNumSur=0) const =0;

/**
 * Returns the surface selecting objects associated with the BRep feature.
 * @param iFeat
 * Defines the body of the search.
 * @param iNumSur 
 * Number of surfaces. 
 * @return 
 * If the BRep feature is a face, returns the associated selecting objects. 
 * <br>If the BRep feature is an edge, <ul><li><tt>iNumSur=0</tt> returns the selecting objects on both sides of the edge,  
 * <li><tt>iNumSur=1</tt> returns the selecting objects on the left side of the edge, 
 * <li><tt>iNumSur=2</tt> returns the selecting objects on the right side of the edge. </ul>
 * <br>If the selecting object is a vertex,  
 * <ul><li><tt>iNumSur=0</tt> returns the selecting objects associated with the vertex, 
 * <li><tt>iNumSur=i</tt> returns the selecting objects on the ith side of the vertex.  </ul>
 * @exception @href CATError
 */ 
  virtual CATLISTP(CATIRSur) GetRSurs(const CATISpecObject_var &iFeat,const int iNumSur=0)const=0;

/**
 * Returns the build type.
 * @return
 * <b>Legal values</b>:
 * <tt>MfWithTemporaryBody</tt>, <tt>MfWithPermanentBody</tt>.
 * @exception @href CATError
 */
  virtual CATMfBRepBuildType GetBRepBuildType() const = 0;

/**
 * Creates the body according to the build type.
 * @param iBuildType
 * <b>Legal values</b>:
 * <tt>MfWithTemporaryBody</tt>, <tt>MfWithPermanentBody</tt>.
 * @exception @href CATError
 */
  virtual CATBody_var CreateBody(const CATMfBRepBuildType iBuildType) = 0;

/**
 * Returns the body associated with the BRep feature.
 * @exception @href CATError
 */
  virtual CATBody_var GetBody() const = 0;

/**
 * Returns the topological faces associated with the BRep feature.
 * @param iNumSur
 * Number of faces
 * @return
 * If the BRep feature is a face, returns the associated topological faces.
 * <br>If the BRep feature is an edge, <ul><li><tt>iNumSur=0</tt> returns the topological faces on both sides of the edge, 
 * <li><tt>iNumSur=1</tt> returns the topological faces on the left side of the edge,
 * <li><tt>iNumSur=2</tt> returns the topological faces on the right side of the edge.</ul>
 * <br>If the selecting object is a vertex, 
 * <ul><li><tt>iNumSur=0</tt> returns the topological faces associated with the vertex,
 * <li><tt>iNumSur=i</tt> returns the topological faces on the ith side of the vertex. </ul>
 * @exception @href CATError
 */
  virtual CATLISTP(CATCell) GetFaces(const int iNumSur=0)const=0; 

/**
 * Returns the topological faces associated with the BRep feature.
 * @param iFeat 
 * Defines the body of the search. 
 * @param iNumSur
 * Number of faces
 * @return
 * If the BRep feature is a face, returns the associated topological faces.
 * <br>If the BRep feature is an edge, <ul><li><tt>iNumSur=0</tt> returns the topological faces on both sides of the edge, 
 * <li><tt>iNumSur=1</tt> returns the topological faces on the left side of the edge,
 * <li><tt>iNumSur=2</tt> returns the topological faces on the right side of the edge.</ul>
 * <br>If the selecting object is a vertex, 
 * <ul><li><tt>iNumSur=0</tt> returns the topological faces associated with the vertex,
 * <li><tt>iNumSur=i</tt> returns the topological faces on the ith side of the vertex. </ul>
 * @exception @href CATError
 */
  virtual CATLISTP(CATCell) GetFaces(const CATISpecObject_var &iFeat,
                                     const int iNumSur=0) const=0; 

/**
 * Returns the topological edges <tt>CATEdge</tt> associated with the BRep feature.
 * @param iFeat 
 * Defines the body of the search. 
 * @return
 * <ul><li>If the BRep feature is a face, returns the boundary edges.
 * <li>If the BRep feature is an edge, returns the topological edges.
 * <li>If the BRep feature is a vertex, returns the topological edges shared by 
 * the topological faces adjacent to the vertex. </ul>
 * @exception @href CATError
 */
  virtual CATLISTP(CATCell) GetEdges(const CATISpecObject_var &iFeat=NULL_var)const=0; 

/**
 * Analyses if the BRep feature involves the input feature.
 * If the input feature is deleted, the BRep feature becomes invalid.
 * @param iFeat 
 * Design feature. 
 * @exception @href CATError
 */ 
  virtual int IsImpactedBy(const CATISpecObject_var &iFeat)const = 0; 

/**
 * Returns the list of features involved in the BRep feature definition.
 * @exception @href CATError
 */
  virtual CATLISTV(CATISpecObject_var) GetNecessaryFeatures()const = 0; 

/**
 * Creates the sick body in case of update error.
 */
  virtual CATBody_var CreateSickBody() const = 0;

/**
 * Returns the sick body in case of update error.
 */
  virtual CATBody_var GetSickBody() const = 0; 

/**
 * Returns the sick cells in case of update error.
 */
  virtual CATLISTP(CATCell) GetSickCells() const = 0;

 /**
 * Retrieves the type of geometry pointed by the BRep Feature.
 * <br><b>Role</b>: this method gets the type of geometry associated with the BRep Feature.
 * <br>You get the dimension of the geometry <tt>oDim</tt> and the type of geometry position  <tt>oType</tt>.
 * @param oDim [out]
 * Principal type (dimension : vertex, edge, or face)</tt>. 
 * @param oType [out]
 * Secondary type. Is the element isolated (wire), border, or internal </tt>.
 * @return
 *   <code>S_OK or E_FAIL</code>.<br>
 * @exception @href CATError
 */

 virtual HRESULT GetBrepFtrGeometryType ( CATMmiDimension &oDim, CATMmiDimensionType &oType ) const =0;

 /**
 * Retrieves the cells associated with the BRep feature.
 * <br><b>Role</b>: this method gets the lists of cells pointed by the BRep feature.
 * <br>You can get different cells, depending of the Feature selected for the resolution <tt>iFeat</tt>, the type of resolution  <tt>iType</tt> and the type define at the creation of the BRep feature.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep Feature creation</tt>.
 * <ul>
 *  <li>iType = CATMmrRelimited  
 *                             <dl><tt><dt>if CATMmrRelimited  was selected at the creation it gives the same result,</dt></tt>
 *                             <tt><dt>if CATMmrFunctional return S_FALSE.</dt></dl></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                             <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param iFeat [in]
 * Search is performed in the ResultOUT body associated with <tt>iFeat</tt> solid.
 * @param oLCells [out]
 * a <b>list</b> of <tt>CATFace</tt> or <tt>CATEdge</tt> or <tt>CATVertex</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>S_FALSE</tt>       <dd>the param iType is set to CATMmrRelimited on a BRep feature declare with the value CATMmrFunctional.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 * @exception @href CATError
 */
 virtual HRESULT GetBrepFtrCells ( CATMmrLimitationType iType, const CATISpecObject_var &iFeat, CATLISTP (CATCell) &oLCells ) const =0;

 /** 
 * Retrieves all the Features associated with the BRep feature.
 * <br><b>Role</b>: this method gets the lists of all the Features used by the BRep feature.
 * <br>You can get different features, depending on the type of resolution asked <tt>iType</tt> and the type define at the creation of the BRep feature.
 * @param iType [in]
 * allows the search to be different than what was selected at the BRep Feature creation</tt>.
 * <ul>
 *  <li>iType = CATMmrRelimited  
 *                             <dl><tt><dt>if CATMmrRelimited  was selected at the creation it gives the same result,</dt></tt>
 *                             <tt><dt>if CATMmrFunctional return S_FALSE.</dt></dl></tt>
 * <li>iType = CATMmrFunctional 
 *                             <tt><dl><dt>if CATMmrFunctional was selected at the creation it gives the same result,</dt>
 *                             <dt>if CATMmrRelimited  gives the same result as if CATMmrFunctional was selected at the creation.</dt></dl></tt>
 *</ul>
 * @param oLFeats [out]
 * a list of Features used to define the BRep Feature</tt>.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>the resolution has been successfull.
 *   <dt><tt>S_FALSE</tt>       <dd>the param iType is set to CATMmrRelimited on a BRep feature declare with the value CATMmrFunctional.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured in the resolution.
 *   </dl>
 * @exception @href CATError
 */
 virtual HRESULT GetBrepFtrNecessaryFeatures ( CATMmrLimitationType iType, CATLISTV (CATISpecObject_var) &oLFeats ) const =0;

//###########################################################################################
/**
 * @nodoc.
 * Internal use only.
 */
  virtual void SetSickBody(const CATBody_var &iBody) = 0;

/**
 * @nodoc
 * Internal use only.
 */
  virtual int Init(const CATIBRepAccess_var &BRep,
                   const CATBaseUnknown_var &support,
                   const CATMfBRepType Type,
                   const CATMfFeaturizeMode mode,
                   const CATMfBRepVersion BRepVersion=MFBRepVersion_CURRENT)= 0;
                   
/**
 * @nodoc
 * Internal use only.
 */
  virtual int Init(const CATISpecObject_var &label,
                   const CATBaseUnknown_var &support,
                   const CATMfBRepType Type,
                   const CATMfFeaturizeMode mode,
                   const CATMfBRepVersion BRepVersion=MFBRepVersion_CURRENT)= 0;
  
/**
 * @nodoc
 * Internal use only.
 */
  virtual int Init(const CATUnicodeString &label,
                   const CATBaseUnknown_var &support,
                   const CATMfBRepType Type,
                   const CATMfFeaturizeMode mode,
                   const CATMfBRepVersion BRepVersion=MFBRepVersion_CURRENT)= 0;
/**
 * @nodoc
 * InternalUse
 */
  virtual CATMfBRepVersion GetBRepVersion() =0;
/**
 * @nodoc
 * Internal use only.
 */  
  virtual short GetDimension() const = 0;

/**
 * @nodoc
 * Internal use only.
 */
  virtual HRESULT SetSupport(const CATBaseUnknown_var &support)=0;

/**
 * @nodoc
 * Internal use only.
 */
  virtual HRESULT UnsetSupport()=0; 
/**
 * @nodoc
 * Returns the feature containing the attribute pointed by the support attribute of the BRep feature. 
 */
  virtual CATISpecObject_var GetDirectSupport() const = 0;

/**
 * @nodoc
 * Returns True if the support of the BRep feature is the input feature of a contextual feature 
 * (fillet, draft angle, chamfer, pad or pocket up to something).
 * The support attribute of the BRep feature points to the IN attribute of its aggregating feature.
 */
  virtual CATBoolean IsSlaveContextuelle() const = 0;

/**
 * @nodoc
 * Returns the label as a <tt>CATISpecObject</tt>. 
 */
  virtual CATISpecObject_var GetSpecLabel() const= 0;

/**
 * @nodoc
 * Internal use only.
 */
  virtual void SetSpecLabel(const CATISpecObject_var &specLabel)= 0;

/**
 * @nodoc
 * Internal use only.
 */
  virtual CATReportSelect *GetSelector() const= 0;

/**
 * @nodoc
 * Internal use only.
 */
  virtual void DeleteSelector(CATReportSelect* selector) const= 0;

/**
 * @nodoc
 * Old method.
 */
  virtual CATUnicodeString  GetEtiquette(const int numSur=0)const =0;

/**
 * @nodoc
 * Old method.
 */
  virtual void SetEtiquette(const CATUnicodeString &etiquette)=0;

/**
 * @nodoc
 */
  virtual void SetSuperBRep(const CATIMfPropagation_var &iPropagation) = 0 ;

/**
 * @nodoc
 */
  virtual void SetSuperBRep(const CATIMfPropagation_var &iPropagation,
			    const CATMfSuperBRepType  iSecoursInits) = 0;
/**
 * @nodoc
 * Internal use only.
 */
  virtual  CATISpecObject_var GetResolveScopeAccess(const CATISpecObject_var &iFeat=NULL_var)const =0;

  /**
 * @nodoc
 * Internal use only.
 */
  virtual CATLISTP(CATCell) GetFaces(CATBrpScope *iScope, 
                                     const int iNumSur=0) const=0; 
/**
 * @nodoc
 * Internal use only.
 */
  virtual CATLISTV(CATISpecObject_var) GetValidFeatureAncestors()const = 0; 
/**
 * @nodoc
 * Internal use only.
 */
  virtual int UpdateDelegateGeometry() const = 0; 

/**
 * @nodoc
 * Returns the journaling information relative to the BRep feature.
 */
  virtual CATNamingReference* GetNamingReference() const = 0; 

};

CATDeclareHandler( CATIMfBRep, CATBaseUnknown ) ;

#endif


