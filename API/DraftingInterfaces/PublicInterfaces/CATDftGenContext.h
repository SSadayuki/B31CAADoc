//	COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATDftGenContext_H
#define CATDftGenContext_H
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */
#include "CATBaseUnknown.h"
#include "CATDraftingInterfaces.h"
#include "CATListPV.h"
#include "CatRepresentationMode.h"

class CATIDftGenParamAccess;
class CATISpecObject;
class CATLISTP(CATMathPlane);
class CATIStringList;
class CATMathTransformation;
class CATMathPlane;
class CATIUnknownList;
class CATIDrawing;
class CATMathBox;
class IUnknown;
    /**
    * Definition of the object which describes the Generation Context
    */

class ExportedByDraftingItfCPP CATDftGenContext : public CATBaseUnknown
{
    
public:
    /**
    * Constructors.
    */
    CATDftGenContext(const CATDftGenContext& iContext);
    CATDftGenContext(CATIStringList * iStringList);
    CATDftGenContext(const CATLISTP(CATMathPlane) * iPlaneList, CATIStringList * iStringList);
    
    /**
    * Destructor
    */
    virtual ~CATDftGenContext();
    
    /**
    * Returns the Planes of Projection.
    * @param oPlanes
    *  a CATLISTP(CATMathPlane) which describes the Projection Planes
    */
    virtual HRESULT GetPlanes(CATLISTP(CATMathPlane) ** oPlanes) const;

    /**
    * Returns the initial planes (those added at the construction of the context).
    * Does not take in account any previously applied transformation
    * * @param oPlanes
    *  a CATLISTP(CATMathPlane) which describes the initial Projection Planes
    */
    virtual HRESULT GetInitialPlanes(CATLISTP(CATMathPlane) ** oPlanes) const;

    /**
    * Sets the generative views which correspond to the planes set in the constructor
    * @param iGenViews
    *   the CATIUnknownList which contains the generative views
    */
    virtual HRESULT SetViews(CATIUnknownList * iGenViews);

    /**
    * Returns the views wich are associated to the CATMathPlane in argument.
    * @param iPlane
    *   the description of the input plane as a CATMathPlane
    * @param iIID
    *   the Identifier of the interfaces asked as return
    * @param oGenViews
    *   a CATIUnknownList which contains the views wich are associated to the CATMathPlane in argument
    */
    virtual HRESULT GetViews(const CATMathPlane * iPlane, const IID & iIID, CATIUnknownList ** oGenViews) const;

    /**
    * Returns all the views.
    * @param iIID
    *   the Identifier of the interfaces asked as return
    * @param oGenViews
    *   a CATIUnknownList which contains all the views
    */
    virtual HRESULT GetViews(const IID & iIID, CATIUnknownList ** oGenViews) const;
    
    /**
    * Returns the Description of the context of Generation as a CATIStringList.
    * @param oStringList
    *  a CATIStringList which represents the context of Generation
    */
    virtual HRESULT GetDescription(CATIStringList ** oStringList) const;
    
    /**
    * Returns the first IID to be used as a filter on responding feature type.
    * It also initialize the cursor for the NextIID method
    * @param oIID
    *   contains the next IID or NULL
    */
    virtual HRESULT GetFirstIID(IID ** oIID) const;

    /**
    * Returns the next IID stored in the CATDftGenContext.
    * @param oIID
    *   contains the next IID or NULL
    */
    virtual HRESULT NextIID(IID ** oIID) const;
    
    /**
    * Adds an IID to be used as a filter on responding feature type.
    */
    virtual HRESULT AddIID(const IID & iIID);

    /**
    * Transforms the planes of this CATDftGenContext.
    * Keeps a reference on the original plane
    * @param iTransfo
    *   the transformation to be aplied to this context
    */
    virtual HRESULT Transform(CATMathTransformation * iTransfo);

    /**
    * Returns the global transformation applied to the context.
    * @param oTransfo
    *   the global transformation applied to the context
    */
    virtual HRESULT GetTransformation(CATMathTransformation ** oTransfo) const;
    
    /**
    * Compares two CATDftGenContext.
    * @param <tt>CATDftGenContext * iContext</tt>
    * [in] the CATDftGenContext this must be compared with
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> the two contexts are the same
    * <dt> <tt>S_FALSE</tt>     <dd> the two contexts are different
    * <dt> <tt>E_FAIL</tt>   <dd> Did not  succeeded in comparing. No valid status
    * </dl>
    */
    virtual HRESULT Compare(CATDftGenContext * iContext);
    
    
    /**
    * Sets the minimum and the maximum dimensions of the 3D Geometrical elements conidered
    * during the current extraction.
    * @param <tt>int iMinDim</tt>
    * [in] Minimum dimension (between 0 and 3)
    * @param <tt>int iMaxDim</tt>
    * [in] Maximum dimension (between 0 and 3)
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * <dt> <tt>E_INVLIDARG</tt>   <dd> Bad values for Dim or iMinDim > iMaxDim
    * </dl>
    */
    virtual HRESULT SetMinMaxDim(int iMinDim, int iMaxDim);

    /**
    * Returns the minimum and the maximum dimensions of the 3D Geometrical elements conidered
    * during the current extraction.
    * @param <tt>int iMinDim</tt>
    * [in] Minimum dimension (between 0 and 3)
    * @param <tt>int iMaxDim</tt>
    * [in] Maximum dimension (between 0 and 3)
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * <dt> <tt>E_FAIL</tt>   <dd> No Min or Max.
    * </dl>
    */
    virtual HRESULT GetMinMaxDim(int * oMinDim, int * oMaxDim);
    
    /**
    * Sets the List of Links pointed by the first view of the viewlist
    * @param <tt>CATIUnknownList * iList</tt>
    * [in] the List of Links pointed by the first view of the viewlist
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * <dt> <tt>E_FAIL</tt>   <dd> iList NULL
    * </dl>
    */
    virtual HRESULT SetLinkList(CATIUnknownList * iList);
    
    
    /**
    * Returns the List of Links pointed by the first view of the viewlist
    * @param <tt>CATIUnknownList ** oList</tt>
    * [out] the List of Links pointed by the first view of the viewlist
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * <dt> <tt>E_FAIL</tt>   <dd> No List Stored
    * </dl>
    */
    virtual HRESULT GetLinkList(CATIUnknownList ** oList);
    
    /**
    * Sets the status, axis must be generated or not.
    * @param <tt>int iStatus</tt>
    * [in] the status in question
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * </dl>
    */
    virtual HRESULT SetAxisLineGeneration(int iStatus);
    
    /**
    * Returns the status, axis must be generated or not.
    * @param <tt>int * oStatus</tt>
    * [out] the status in question
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * <dt> <tt>E_INVALIDARG</tt>   <dd> oStatus NULL
    * </dl>
    */
    virtual HRESULT GetAxisLineGeneration(int * oStatus);

    /**
    * Sets the list of 3D operators to apply on geometry.
    * These can be used at this stage for instance to exclude
    * some objects of the view a-priori.
    * @param <tt>CATIUnknownList * oList</tt>
    * [in] the list of operators
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * </dl>
    */
    virtual HRESULT Set3DOperatorList (CATIUnknownList * oList);

    /**
    * Returns the list of 3D operators to apply on geometry.
    * These can be used at this stage for instance to exclude
    * some objects of the view a-priori.
    * @param <tt>CATIUnknownList ** oList</tt>
    * [out] the list of operators
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * </dl>
    */
    virtual HRESULT Get3DOperatorList (CATIUnknownList ** oList) const;
    
	/**
      * @nodoc
      * DO NOT USED   
      */
    virtual HRESULT Set3DPointGeneration(int iStatus);

	/**
      * @nodoc
      * - DO NOT USED -
      */
    virtual HRESULT Get3DPointGeneration(int * oStatus);

    /**
    * Turn ON/OFF the generation Mode.
    * There are two steps in the drafting generation algorithm:
    * the preview and the actual generation.
    * During the preview, some information (projection plane,...)
    * are not available in the context, 
    *   the Step is set to FALSE (0).
    * During the generation, all the information are available,
    *   the Step is set to TRUE  (1). (by default, when the context is created)
    * @param <tt>int iStep</tt>
    * [in] the Generation Step
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> Everything OK
    * </dl>
    */
    virtual HRESULT SetGenerationStep (const int iStep);

    /**
    * Returns the generation Step
    * There are two steps in the drafting generation algorithm:
    * the preview and the actual generation.
    * During the preview, some information (projection plane,...)
    * are not available in the context, 
    *   the Step is set to FALSE (0).
    * During the generation, all the information are available,
    *   the Step is set to TRUE  (1). (by default, when the context is created)
    * @param <tt>int &oStep</tt>
    * [out] the Generation Step
    * @return
    * A <tt>HRESULT</tt>
    * <dl>
    * <dt> <tt>1</tt>     <dd> information (projection plane,...) available
    * <dt> <tt>0</tt>     <dd> information not available
    * </dl>
    */
    virtual HRESULT GetGenerationStep (int *oStep) const;

    /**
    * @nodoc
    * - DO NOT USED -
    * Retrieves the generated geometry representation mode.
    * @param oRepMode 
    *  The different modes of representation 
    *  <br><b>Legal values</b>: Possible values are catExactMode (2D geometry
	*  generated from topological data) or catPolyhedricMode (2D geometry generated from CGR).
    * @return
    * <dt><tt>S_OK</tt> <dd>if operation succeeded.
    * <dt><tt>E_FAIL</tt> <dd>if an unspecified failure has occurred.
    * </dl>
    */
    virtual HRESULT GetRepresentationMode (CatRepresentationMode * oRepMode) const;
    
    /**
    * Sets the generated geometry representation mode.
    * @param iRepMode 
    *  The different modes of representation 
    *  <br><b>Legal values</b>: Possible values are catExactMode (generated geometry
	*  comes from topological data) or catPolyhedricMode (geometry comes from CGR).
    * @return
    * <dt><tt>S_OK</tt> <dd>if the operation succeeded.
    * <dt><tt>E_FAIL</tt> <dd>if the drawing view owns a detail, section or breakout 
	* specification, or if an unspecified failure has occurred.
    * </dl>
	*/
	/**
      * @nodoc
      * - DO NOT USED -
      */
    virtual HRESULT SetRepresentationMode (const CatRepresentationMode iRepMode);
	/**
      * @nodoc
      * - DO NOT USED -
      */
    virtual HRESULT GetGenParamAccess(CATIDftGenParamAccess** oPtr);
	/**
      * @nodoc
      * DO NOT USED   
      */
    virtual HRESULT SetGenParamAccess(CATIDftGenParamAccess* iPtr);

    virtual HRESULT GetSubElementIdentifier(int *oIdentifier) const;
    virtual HRESULT SetSubElementIdentifier(const int iIdentifier);

    virtual HRESULT SetLastShapeFeature(CATISpecObject *iLastShapeFeature);
    virtual HRESULT GetLastShapeFeature(CATISpecObject **oLastShapeFeature);


	/**
    * Determines if a string is contained in the Description. 
    * @return
    * <dt><tt>S_OK</tt> <dd>if the string is contained in Description.
    * <dt><tt>S_FALSE</tt> <dd>if not.
	* <dt><tt>E_FAIL</tt> <dd>internal error.
    * </dl>
	*/
	/**
      * @nodoc
      * DO NOT USED   
      */
	virtual HRESULT IsStringContainedInDescription(CATUnicodeString & iString) const;

    virtual HRESULT GetCurrentViewScale(double & scale);
    virtual HRESULT SetCurrentViewScale(double scale);

    virtual HRESULT SetCurrentDrawing(CATIDrawing* idrawing);
    virtual HRESULT GetCurrentDrawing(CATIDrawing** odrawing);
        
    virtual HRESULT SetCurrentViewVersion(int iVer);
    virtual HRESULT GetCurrentViewVersion(int & oVer);

    virtual HRESULT Get3DEncumbrancy(CATMathBox ** oBox, CATMathPlane * iWosPlane = NULL);

    virtual HRESULT SetProduct(IUnknown * iProduct);
    virtual HRESULT GetProduct(const IID & iIID, IUnknown ** oProduct);
	/**
	* @nodoc */
    virtual HRESULT AddDescription(CATUnicodeString iDescription);

private : 
    CATDftGenContext();
    CATDftGenContext& operator = (const CATDftGenContext &);

    CATLISTP(CATMathPlane) * 	  _Planes;
    CATLISTP(CATMathPlane) * 	  _TransformedPlanes;
    CATIStringList * 		        _Description;
    CATListPV * 	              _IIDs; 
    int                         _Cursor;
    CATMathTransformation *     _Transfo;
    CATIUnknownList *           _GenViewList;
    int                         _MinDim;
    int                         _MaxDim;
    CATIUnknownList *           _LinkList;
    int                         _AxisLineGeneration;
    int                         _3DPointGeneration;  
    CATIUnknownList *           _OperatorList;
    int                         _GenerationStep;
	CATIDftGenParamAccess*		_GenParamAccessPtr;
	CatRepresentationMode		_RepMode;
    int                         _Identifier;
	CATISpecObject * _LastShapeFeature;
    CATIDrawing* _CurrentDrawing;
    double _CurrentViewScale;
    int _CurrentViewVersion;
    IUnknown * _CurrentProduct;
};
#endif
