/**
* @quickReview DVR 05:04:18
*/
/**
* @quickReview DVR 05:04:14
*/
// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATDftGenStruct_H
#define CATDftGenStruct_H
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */
#include "CATDraftingInterfaces.h"
#include "CATListOfCATGeometries.h"
#include "CATBaseUnknown.h"
#include "CATMathTransformation.h"
#include "CATIDftGenRequest.h"
#include "CATVisPropertiesValues.h"


class CATCurve;
class CATBody;
class CATISpecObject;
class CATGeoFactory;
class CATRep;
class CATError;
class CATDftListOfOperatorType;

/** 
* A structure for 3D curves with provenance
*/
enum CATDftBodyDimensionFilter {CatFollowDftWireFrameOption=0,CatAlwaysProjectWireFrame=1};
enum CATDftBodyFilterDefinition {CatFollowDftOption=0,CatAlwaysProject=1};
enum CATDftGraphicPriority {CatOverrideDftFunctional=0,CatFollowDftFunctional=1};
class ExportedByDraftingItfCPP CATDftGen3DCurveWithProvenance
{
public:
    CATDftGen3DCurveWithProvenance();
    CATDftGen3DCurveWithProvenance(CATCurve * iCurve);
    ~CATDftGen3DCurveWithProvenance();
    
    CATCurve * GetCurve() const;
    void SetCurve(CATCurve * iCurve);
    void AddProv(CATGeometry * iGeom);
    CATLISTP(CATGeometry) GetProv() const;
    void SetColor(int iRed,int iGreen,int iBlue);
    void GetColor(int * oRed,int * oGreen,int * oBlue) const;
    void SetLineType(int iLineType);
    void GetLineType(int * oLineType) const;
    void SetThickness(int iThick);
	void GetThickness(int * oThick) const;

private:
    CATCurve *               _Curve;
    CATLISTP(CATGeometry)    _ListProvenance;
    int                      _Red;
    int                      _Green;
    int                      _Blue;
    int                      _LineType;
    int                      _Thick;
    CATDftGen3DCurveWithProvenance(const CATDftGen3DCurveWithProvenance&);
    CATDftGen3DCurveWithProvenance& operator = (const CATDftGen3DCurveWithProvenance&);
    
};


/** 
* A structure for result
*/
class ExportedByDraftingItfCPP CATDftGenResult
{
public:
    CATDftGenResult();
    CATDftGenResult(CATBody * iBody, CATISpecObject * iFeat, CATGeoFactory * iGeoFactory, CATMathTransformation * iTransfo);
    ~CATDftGenResult();
    
    CATBody * GetBody() const;
    void SetBody(CATBody * iBody);
    
    CATISpecObject * GetFeature() const;
    void SetFeature(CATISpecObject * iFeature);
    
    CATGeoFactory * GetGeoFactory() const;
    void SetGeoFactory(CATGeoFactory * iGeoFactory);
    
    CATMathTransformation * GetTransfo() const;
    void SetTransfo(CATMathTransformation * iTransfo);

    int IsVisPropOverloaded();
    void SetColor(int iRed,int iGreen,int iBlue, CATDftGraphicPriority iPrio = CatOverrideDftFunctional);
    void GetColor(int * oRed,int * oGreen,int * oBlue) const;
    void SetLineType(int iLineType,CATDftGraphicPriority iPrio = CatOverrideDftFunctional);
    void GetLineType(int * oLineType) const;
    void SetThickness(int iThick,CATDftGraphicPriority iPrio = CatOverrideDftFunctional);
    void GetThickness(int * oThick) const;
    void SetIdentifier(int iIdentifier);
    void GetIdentifier(int * oIdentifier) const;

	void InhibitViewOperators(CATDftListOfOperatorType* iOperatorsList);
	CATDftListOfOperatorType* GetViewOperatorsToInhibit() const;
	/* @deprecated */
	void DefineBodyDimensionFilter(CATDftBodyDimensionFilter iWFBehaviour=CatFollowDftWireFrameOption);

	void DefineBodyDimensionFilter(CATDftBodyFilterDefinition iWFBehaviour=CatFollowDftOption,CATDftBodyFilterDefinition i3DPointsBehaviour=CatFollowDftOption);
	void GetBodyDimensionFilter(CATDftBodyFilterDefinition* oWireframeFilter, CATDftBodyFilterDefinition* o3DPointsFilter) const;
	
	void SetLayer(int iLayer);
	void GetLayer(int* oLayer) const;
	HRESULT SetVisProperties(CATVisPropertiesValues& iVisProp,CATDftGraphicPriority* iPrio = NULL);
	HRESULT GetVisProperties(CATVisPropertiesValues& oVisProp);
	HRESULT GetGraphicPriority(CATDftGraphicPriority* ioPrio);
    void SetError(CATError * iError);
    CATError * GetError();

private:
    CATMathTransformation   _Transfo;
    CATBody *               _Body;
    CATISpecObject *        _Feat;
    CATGeoFactory *         _GeoFactory;
	int						 _Identifier;
    CATError *               _Error;
	CATDftListOfOperatorType* _OperatorsToInhibit;
	CATDftBodyFilterDefinition _WFMgt;
	CATDftBodyFilterDefinition _3DPointsMgt;

	CATVisPropertiesValues* _OverloadedVisProp;

	CATDftGraphicPriority _GraphicPrio[3];
    
    CATDftGenResult(const CATDftGenResult&);
    CATDftGenResult& operator = (const CATDftGenResult&);
	void InitVisProp();
};


/** 
* A structure for light result (CGR case)
*/

class ExportedByDraftingItfCPP CATDftGenLightResult
{
public:
    CATDftGenLightResult();
    CATDftGenLightResult(CATRep * iRep, CATMathTransformation * iTransfo);
    ~CATDftGenLightResult();
    
    CATRep * GetRep() const;
    void SetRep(CATRep * iRep);
    CATMathTransformation * GetTransfo() const;
    void SetTransfo(CATMathTransformation * iTransfo);
    
    /**
    * Use this method to tell whether the calling method has to destroy
    * the CATRep given by SetRep and GetRep methods.
    * Example :
    *    CAT3DRep * MyRep = CATReadCgr(.....);
    *    CATDftGenLightResult * MyRes = new CATDftGenLightResult();
    *    MyRes->SetRep(MyRep);
    *    MyRes->SetRepToDestroy();
    * In this case, CATReadCgr create the CAT3DRep object, the calling method will have to destroy MyRes
    * Default behavior : Calling method don't destroy CATRep (life cycle linked to VisManager)
    */
    void SetRepToDestroy();
    /**
    * Use this method to get the life cycle rule for the CATRep given by SetRep and GetRep methods.
    * return 1 when the Rep has to be destroyed by calling method. 0 otherwise
    */
    int GetRepToDestroy();

private:
    CATRep *                _Rep;
    CATMathTransformation   _Transfo;
    int                     _RepToBeDestroyed;

    CATDftGenLightResult(const CATDftGenLightResult&);
    CATDftGenLightResult& operator = (const CATDftGenLightResult&);
};


/**
* a structure which associates a CATIDftGenRequest and a CATMathTransformation
*/

class ExportedByDraftingItfCPP CATDftGenRequestWithMatrix
{
public:
    CATDftGenRequestWithMatrix();
    CATDftGenRequestWithMatrix(CATIDftGenRequest * iGenRequest, CATMathTransformation * iTransfo);
    CATDftGenRequestWithMatrix(const CATDftGenRequestWithMatrix & iGenRequestWithMatrix);
    ~CATDftGenRequestWithMatrix();
    
    CATIDftGenRequest * GetGenRequest() const;
    void SetGenRequest(CATIDftGenRequest * iGenRequest);
    CATMathTransformation * GetTransfo() const;
    void SetTransfo(CATMathTransformation * iTransfo);
    
private:
    CATIDftGenRequest *     _GenRequest;
    CATMathTransformation   _Transfo;

    CATDftGenRequestWithMatrix& operator = (const CATDftGenRequestWithMatrix&);
};

/**
* a class which encapsulates a SymbolicRep and its information
*/
class ExportedByDraftingItfCPP CATDftSymbolicRepInfo: public CATBaseUnknown 
{
public :
  CATDftSymbolicRepInfo(CATBaseUnknown* iSymbolicRep, CATUnicodeString* iApplicativeKey, CATBoolean* iDeleted);
  ~CATDftSymbolicRepInfo();
  /**
  * Use this method to retrieve the corresponding 2D feature standing for the SymbolicRep
  * [out] oSymbolicRep the 2D Feature used as a SymbolicRep
  * @return
  * A <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>
  * <dt> <tt>E_FAIL</tt>   <dd>
  * </dl>
  */
  HRESULT GetObject(CATBaseUnknown** oSymbolicRep);
  /**
  * Use this method to retrieve the custom identifier assigned to the SR by its proprietary 3D feature
  * [out] oId the custom Id assigned to the SymbolicRep
  * @return
  * A <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>
  * <dt> <tt>E_FAIL</tt>   <dd>
  * </dl>
  */
  HRESULT GetApplicativeKey(CATUnicodeString& oId);
  /**
  * Use this method to know if the SR has been deleted since the last view update
  * [out] oDeleted, TRUE if the SR has been deleted
  * @return
  * A <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>
  * <dt> <tt>E_FAIL</tt>   <dd>
  * </dl>
  */
  HRESULT HasBeenDeleted(CATBoolean& oDeleted);

private :
  CATBaseUnknown*	_pSymbolicRep;
  CATUnicodeString _ApplicativeKey;
  CATBoolean _SRDeleted;
};

#endif
