/**
* @quickReview DVR 05:04:15
*/
/**
* @quickReview DVR 05:03:23
*/
// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATIDftGenSymbolicRep_H
#define CATIDftGenSymbolicRep_H
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#include "IUnknown.h"

#include "CATDftGenEnum.h"
#include "CATBoolean.h"
#include "CATBaseUnknown.h"

class CATString;
class CATIDftGenView;
class CATIUnknownList;
class CATILinkableObject;
class CATDftGenContext;
class CATDftListOfOperatorType;
class CATVisPropertiesValues;
class CATUnicodeString;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftGenSymbolicRep ;
#else
extern "C" const IID IID_CATIDftGenSymbolicRep ;
#endif

/**
* Definition of interface which describes generic behaviors of symbolic representations 
*/

class ExportedByDraftingItfCPP CATIDftGenSymbolicRep : public IUnknown
{
public:
    
    /**
    * Compares this symbolic representation to another one.
    * @param iSR
    *   the symbolic representation to be compared with
    * @param oStatus
    *   comparaison's result
    */
    virtual HRESULT Compare (CATIDftGenSymbolicRep * iSR, DftGenSRCompareStatus * oStatus) const = 0;
    
    /**
    * Defines if a symbolic representation is updatable or not.
    * If not, it will be remove at each update.
    */
    virtual HRESULT SetUpdatable(DftGenUpdatableStatus iStatus) = 0;
    
    /**
    * Returns the updatable status of the symbolic representation.
    */
    virtual HRESULT IsUpdatable(DftGenUpdatableStatus * oStatus) const = 0;

    /**
    * Defines if the symbolic representation can be correctly connected to the generated geometry of the View
    */
    virtual HRESULT CanBeConnectedTo2DGeometry(CATIDftGenView * iView, DftGenConnectionStatus * oStatus) = 0;
    
    /**
    * Modifies a pre-existing synbolic representation.
    */
    virtual HRESULT Modify(CATIDftGenSymbolicRep * iSR) = 0;
    /**
    * Stores the SR in one or several views.
	*@param iViewlist
	*	a list of pointer to CATIDftGenView
    */
    virtual HRESULT Store(CATIUnknownList * iViewlist) = 0;

    /** 
    * Sets the application which created this symbolic representation.
    */
    virtual HRESULT SetApplication(const CATString * iString) = 0;

    /**
    * Returns the application which created this symbolic representation.
    */
    virtual HRESULT GetApplication(CATString * oString) const = 0;

    /** 
    * Sets the matrix transformation linked to the context of the symbolic representation creation.
    */
    virtual HRESULT SetTransfo(const CATMathTransformation * iTransfo) = 0;

    /**
    * Returns the matrix transformation linked to the context of the symbolic representation creation.
    */
    virtual HRESULT GetTransfo(CATMathTransformation ** oTransfo) const = 0;
    
    /**
    * Set the product in which the SR has been extracted
    */
    virtual HRESULT SetProduct(IUnknown * iProduct) = 0;
    
    /**
    * Returns the product in which the SR has been extracted
    */
    virtual HRESULT GetProduct(const IID & iIID, IUnknown ** oProduct) const = 0;
    /**
    *  Adds a link between a 3D feature and the extacted SR
    *
    */
    virtual HRESULT SetFeature(CATILinkableObject* iLinkable) = 0;
    /**
    *  Adds a link between a 3D feature and the extacted SR
    *
    */
    virtual HRESULT GetFeature(CATILinkableObject** oLinkable) = 0;
    
    /**
    * Set the context of the generation
    */
    virtual HRESULT SetContext(CATDftGenContext * iContext) = 0;
    
    /**
    * Returns the context of the generation
    */
    virtual HRESULT GetContext(CATDftGenContext ** oContext) const = 0;
    	
	virtual HRESULT DefineOperatorSensitivity(CATBoolean OperatorSensitive=TRUE, CATDftListOfOperatorType* ListOfOperators = NULL) = 0;
	
	virtual HRESULT DefineVisualProperties(CATVisPropertiesValues& iVisProperties) = 0;

  /**
  * Enables to associated a key with the eventually generated symbolic rep
  *	The key can be retrieved later on through CATIDftGenSRAccess
  *	WARNING : Only applicable to Updatable SRs
  */
	virtual HRESULT SetApplicativeKey(CATUnicodeString* iKey) const = 0;

};

#endif
