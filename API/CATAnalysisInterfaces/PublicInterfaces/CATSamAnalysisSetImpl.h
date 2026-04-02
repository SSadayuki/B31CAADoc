// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATSamAnalysisSetImpl
//
//=============================================================================
//
// Usage Notes: this class extends AnalysisSet feature for CATIAAnalysisSet
//=============================================================================
// Mar. 99   Creation                       
//=============================================================================
#ifndef CATSamAnalysisSetImpl_H
#define CATSamAnalysisSetImpl_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisToolkit.h"
#include "CATBaseObject.h"

class CATIAAnalysisEntities;
class CATIAAnalysisOutputEntities;
class CATIAAnalysisSets;
class CATIAAnalysisImages;
class CATIScriptMethodCall;
class CATBaseDispatch;
class CATIABasicComponents;

/**
 * Root object used to implement derived classes of CATIAAnalysisSet.
 * Declare your interface as <b>interface MyInterface : CATIAAnalysisSet</b><br>
 * Implement it as <b>class MyImplementation : public CATSamAnalysisSetImpl</b>.
 */
class ExportedByCATAnalysisToolkit CATSamAnalysisSetImpl : public CATBaseObject
{
	CATDeclareClass;
  
	public :
/**
 * Default Constructor.
 */
    CATSamAnalysisSetImpl();
/**
 * Default Destructor.
 */
		virtual ~CATSamAnalysisSetImpl();

/**
 * Returns the parent object.
 * <br><b>Role</b>:
 * The parent object of a given object is the object just above
 * in the object structure, usually the object that created this
 * object and that aggregates it.
 * In the case of an object part of a collection, the parent object
 * is not the collection object itself, but the object that 
 * aggregates the collection object.
 */
    virtual HRESULT __stdcall get_Parent ( CATBaseDispatch*& oParent ); 

/**
 * Returns the type of the analysis Set.
 * All implementations should not override this default implementation.
 */
    HRESULT get_Type(CATBSTR & oType);
/**
 * Returns the name of the analysis Set.
 * All implementations should not override this default implementation.
 */
  	HRESULT put_Name(const CATBSTR & iNameBSTR);
/**
 * Sets the name of the analysis Set.
 * All implementations should not override this default implementation.
 */
		HRESULT get_Name(CATBSTR & oName);

/**
 * Update an Analysis Set.
 * All implementations should not override this default implementation.
 */
    virtual HRESULT Update();

  /**
 * Returns the analysis entities collection associated to a set.
 * All implementations should not override this default implementation.
 */
    HRESULT get_AnalysisEntities(CATIAAnalysisEntities*& oAnalysisEntities);	
/**
 * Returns the analysis output entities collection associated to a set.
 * All implementations should not override this default implementation.
 */
    HRESULT get_AnalysisOutputEntities(CATIAAnalysisOutputEntities*& oAnalysisEntities);

/**
 * Returns the analysis sets collection associated with an analysis set.
 * All implementations should not override this default implementation.
 */
    HRESULT get_AnalysisSets(CATIAAnalysisSets*& oAnalysisSets);
/**
 * Returns the analysis image collection associated with an analysis set.
 * All implementations should not override this default implementation.
 */
    HRESULT get_AnalysisImages(CATIAAnalysisImages*& oAnalysisImages);
/**
 * Returns the BasicComponent collection associated with an analysis set.
 * All implementations should not override this default implementation.
 */
    HRESULT get_BasicComponents(CATIABasicComponents*& oBasicComponents);
/**
 * Returns an object from its name.
 * All implementations should not override this default implementation.
 * @param IDName   The searched obect name
 * @return    The searched object
 * All implementations should not override this default implementation.
 */
    HRESULT GetItem(const CATBSTR & iNameBSTR, CATBaseDispatch *& oObject);

/**
 * Helps the resolution mechanism of the macros generation.
 * <b>Role:</b>
 * This interface must be implemented by objects that want to specify a custom
 * access path in the Automation container-content hierarchy.
 * <br>
 * It contains a single method which generates a <tt>CATIScriptMethodCall</tt>.
 * This generated object describes how to access the object from its container.
 * @see CATIAutomationResolution 
 */
    virtual HRESULT GetResolution(CATIScriptMethodCall *& oResolution, CATBaseDispatch * iObjectToResolve);
/**
 * Retrieve the accurate CATBaseDispatch or CATIABase interface on a component.
 * Returns with this methode Your VB Interface build by derivation of CATIAAnalysisSet.
 * @see CATIBaseAccess
 */
    virtual HRESULT GiveAccurateExposedInterface(CATBaseDispatch** oBasePointer);

	private :
// ...Structors. No implementation provided. Just declared to avoid that 
// someone could build this class.
		CATSamAnalysisSetImpl(const CATSamAnalysisSetImpl &);
		CATSamAnalysisSetImpl& operator=(const CATSamAnalysisSetImpl &);
};   

#endif      
