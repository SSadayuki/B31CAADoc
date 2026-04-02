// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
//
// CATSamAnalysisEntityAdaptIDL.h
//
//=============================================================================
//
// Usage Notes: this class extends AnalysisEntity feature for 
// CATIAAnalysisEntity interface
// 
//=============================================================================
// Jan. 99   Creation                       GFT
//=============================================================================
#ifndef CATSamAnalysisEntityAdaptIDL_H
#define CATSamAnalysisEntityAdaptIDL_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisToolkit.h"
#include "CATIABasicComponent.h"
#include "CATBaseObject.h"
#include "CATVariant.h"

class CATIABasicComponents;
class CATIAReferences;
class CATIAReference;
class CATIAProduct;
class CATIAPart;
class CATIScriptMethodCall;
class CATBaseDispatch;
class CATIAConstraint;
class CATIAAnalysisImages;
class CATIAAnalysisLocalEntities;
class CATIAPublication;
class CATIAAnalysisSupports;

/**
 * Root object used to implement derived classes of CATIAAnalysisEntity.
 * This class is required for build time consideration. You should not use it directely.
 * <br>
 * @see CATSamAnalysisEntityImpl
 */
class ExportedByCATAnalysisToolkit CATSamAnalysisEntityAdaptIDL : public CATBaseObject
{
	CATDeclareClass;

	public :

/**
 * Default constructor.
 */
		CATSamAnalysisEntityAdaptIDL();
/**
 * Default destructor.
 */
		virtual ~CATSamAnalysisEntityAdaptIDL();

/**
 * Returns the parent of the object.
 * See @href CATIABase#get_Parent for a complete description of this method.
 * <p> All implementations should not override this default implementation.
 * @param oParent
 *   The returned parent
 */
		virtual HRESULT __stdcall get_Parent ( CATBaseDispatch*& oParent ); 
/**
 * Returns the type of the object.
 * <p> All implementations should not override this default implementation.
 */
		HRESULT get_Type(CATBSTR & oType);
/**
 * Returns the name of the object.
 * <p> All implementations should not override this default implementation.
 */
		HRESULT get_Name(CATBSTR & oName);
/**
 * Sets the name of the object.
 * <p> All implementations should not override this default implementation.
 */
		HRESULT put_Name(const CATBSTR & iNameBSTR);

/**
 * Returns the basic components collection associated with an analysis entity.
 * <p> All implementations should not override this default implementation.
 */
		HRESULT get_BasicComponents(CATIABasicComponents *& oComponents);
/**
 * Returns the list of Analysis Supports.
 * <p> All implementations should not override this default implementation.
 */
		HRESULT get_AnalysisSupports(CATIAAnalysisSupports*& oSupports);
		
/**
 * Returns an object from its name.
 * <p> All implementations should not override this default implementation.
 * @param IDName   The searched obect name
 * @return    The searched object
 * <p> All implementations should not override this default implementation.
 */
    HRESULT GetItem(const CATBSTR & iNameBSTR, CATBaseDispatch *& oObject);

 /**
 * Returns the value corresponding to the given component.<br>
 * @param iComponent  The identifier if the basic component.<br>
 * @param iLabel  The label of the block containing the value.<br>
 * @param iLineIndex  The line index of the value.<br>
 * @param iColumnIndex  The column index of the value.<br>
 * @param iLayerIndex  The layer index of the value.<br>
 */
		HRESULT GetValue(const CATBSTR& iComponent, const CATBSTR & iLabel,
                		 const long iLineIndex, const long iColumnIndex, 
                		 const long iLayerIndex,  CATVariant& oValue);

/**
 * Sets the value corresponding to the given component.<br>
 * @param iComponent  The identifier if the basic component.<br>
 * @param iLabel  The label of the block containing the value.<br>
 * @param iLineIndex  The line index of the value.<br>
 * @param iColumnIndex  The column index of the value.<br>
 * @param iLayerIndex  The layer index of the value.<br>
 * If the the component has a single value, assign 0 to the 3 parameters.
 *
 */
		HRESULT SetValue(const CATBSTR& iComponent, const CATBSTR & iLabel,
                     const long iLineIndex,const long iColumnIndex,
                     const long iLayerIndex,const CATVariant & iValue);
		
/**
 * Returns the reference corresponding to the given component.<br>
 * @param iComponent  The identifier if the basic component.<br>
 * @param iLabel  The label of the block containing the value.<br>
 * @param iLineIndex  The line index of the value.<br>
 * @param iColumnIndex  The column index of the value.<br>
 * @param iLayerIndex  The layer index of the value.<br>
 */
    HRESULT GetReference(const CATBSTR& iComponent,const CATBSTR & iLabel,
					               const long iLineIndex,const long iColumnIndex,
                         const long iLayerIndex,CATIAReference*& oValue);
		
/**
 * Sets the reference corresponding to the given component.<br>
 * @param iComponent  The identifier if the basic component.<br>
 * @param iLabel  The label of the block containing the value.<br>
 * @param iLineIndex  The line index of the value.<br>
 * @param iColumnIndex  The column index of the value.<br>
 * @param iLayerIndex  The layer index of the value.<br>
 * If the the component has a single value, assign 0 to the 3 parameters.
 */
   HRESULT SetReference(const CATBSTR& iComponent,const CATBSTR & iLabel,
                         const long iLineIndex,const long iColumnIndex,
                         const long iLayerIndex,CATIAReference* iValue);

/**
  * Creates a new support and add it to the description of the Analysis Entity.
  * @param iReference  the CATIA Reference that represent the object to linked. This identification,
  *  may locate the instance of the object<br>
  * @param iSupport  the CATIA Reference that represent the object to linked.<br>
  * <p> All implementations should not override this default implementation.
  */
		HRESULT AddSupportFromReference(CATIAReference* iReference,        CATIAReference* iSupport);
/**
  * Creates a new support and add it to the description of the Analysis Entity.
  * @param iPartProduct  the CATIA Product of the part.<br>
  * @param iPart the CATIA Part that represent the object to linked.<br>
  * <p> All implementations should not override this default implementation.
  */
		HRESULT AddSupportFromPart(CATIAProduct*        iPartProduct,      CATIAPart  *    iPart);
/**
  * Creates a new support and add it to the description of the Analysis Entity.
  * @param iConstraintProduct  the CATIA Product of the Constraint.<br>
  * @param iConstraint the CATIA Constraint that represent the object to linked.<br>
  * <p> All implementations should not override this default implementation.
  */
		HRESULT AddSupportFromConstraint(CATIAProduct* iConstraintProduct, CATIAConstraint* iConstraint);
/**
  * Creates a new support and add it to the description of the Analysis Entity.
  * @param iProduct  the CATIA Product that represent the object to linked.<br>
  * @param iSupport  the CATIA Reference that represent the object to linked.<br>
  * <p> All implementations should not override this default implementation.
  */
		HRESULT AddSupportFromProduct(CATIAProduct* iProduct,              CATIAReference* iSupport);
/**
  * Creates a new support and add it to the description of the Analysis Entity.
  * @param iProduct  the CATIA Product that represent the object to linked.<br>
  * @param iPublication  the CATIA Publication that represent the object to linked.<br>
  * <p> All implementations should not override this default implementation.
  */
		HRESULT AddSupportFromPublication(CATIAProduct *iPartProduct,      CATIAPublication *iPublication);

/**
 * Returns the analysis images collection associated with an analysis entity.
 * <p> All implementations should not override this default implementation.
 */
    HRESULT get_AnalysisImages(CATIAAnalysisImages*& oAnalysisImages);
/**
 * Returns the analysis local entity collection associated with an analysis entity.
 * <p> All implementations should not override this default implementation.
 */
    HRESULT get_AnalysisLocalEntities(CATIAAnalysisLocalEntities*& oAnalysisLocalEntities);

	
/**
 * Helps the resolution mechanism of the macros generation.
 * <p><b>Role:</b>
 * CATIAutomationResolution must be implemented by objects that want to specify a custom
 * access path in the Automation container-content hierarchy.
 * @see CATIAutomationResolution 
 */
  virtual HRESULT GetResolution(CATIScriptMethodCall *& oResolution, CATBaseDispatch * iObjectToResolve);


	private :
    
    CATIABasicComponent_var GetOpBasicComponent (const CATBSTR& iComponent,int & oIopt);

};   
#endif      
