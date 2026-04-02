#ifndef CATIMechanicalFeature_h
#define CATIMechanicalFeature_h

// COPYRIGHT DASSAULT SYSTEMES 1999


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//#include "MF0STARTUP.h"
#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include <CATISpecObject.h>
#include <CATUnicodeString.h>
 
class CATIMechanicalFeature_var;
class CATPathElement;
#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByMecModItfCPP IID IID_CATIMechanicalFeature;
#else
extern "C" const IID IID_CATIMechanicalFeature;
#endif


/**
 * Interface to recognize a mechanical feature.
 * <br><b>Role</b>: This interface is available for any mechanical feature.
 *
 */
class  ExportedByMecModItfCPP CATIMechanicalFeature : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

/**
 * @nodoc
 * Returns the next component.
 * @see CATIDescendants,CATIMechanicalRoot
 */
  virtual CATIMechanicalFeature_var  GetNext() = 0 ;

/**
 * @nodoc
 * Returns the previous component.
 * @see CATIDescendants,CATIMechanicalRoot
 */
  virtual CATIMechanicalFeature_var  GetPrevious() = 0 ;

/**
 * @nodoc
 * Inserts the current feature after the specified mechanical feature.
 * @param Destination
 *   The feature after which the current feature is inserted.
 */
  virtual void InsertAfter(CATIMechanicalFeature_var Destination) = 0 ;

/**
 * Returns the composite object if it is a mechanical feature.
 * @see CATIDescendants
 */
  virtual CATIMechanicalFeature_var GetMechanicalFather()  = 0 ;

/**
 * @nodoc
 * Returns a list of all the composite objects that are mechanical features.
 * @see CATIDescendants
 */
  virtual CATLISTV(CATISpecObject_var) ListMechanicalFathers() = 0 ;

/**
 * Reassigns the composite object of the current feature.
 *
 * <br><b>Role:</b>This method enables to define a new father for the current feature aggregation
 * if it is already aggregated. If it is not, use @href CATIDescendants to aggregate the feature. <br>
 * The <tt>ChangeMechanicalFather</tt> method will throw @href CATInternalError exceptions if the new father
 * is not in the same document as the current one.
 *
 * @param iTheNewFather
 *   The new composite object.
 *
 */
  virtual void ChangeMechanicalFather(CATIMechanicalFeature_var iTheNewFather ) = 0 ;
  
  
/**
 * @nodoc
 * Searches feature according to their name.
 * @see CATIAlias
 */
  virtual void SearchByName(const CATUnicodeString& iName, CATListValCATISpecObject_var& iLst ) = 0 ;  
  
/**
 * @nodoc
 * do not use
 * @see CATIStructureAnalyse
 */
  virtual void AnalyseParents ( CATClassId intfName, CATListValCATInterfaceObject_var& iLst) = 0 ;

/**
 * @nodoc
 * do not use
 * @see CATIStructureAnalyse
 */
  virtual void AnalyseChildren( CATClassId intfName, CATListValCATInterfaceObject_var& iLst) = 0 ;

/**
 * @nodoc
 * @see CATIStructureAnalyse
 */
  virtual void AnalyseDirectParents ( CATClassId intfName, CATListValCATInterfaceObject_var& iLst) = 0 ;

/**
 * @nodoc
 * do not use
 * @see CATIStructureAnalyse
 */
  virtual void AnalyseDirectChildren( CATClassId intfName, CATListValCATInterfaceObject_var& iLst) = 0 ;

/** 
 * @nodoc. Do Not Use.
 */
  virtual CATListValCATISpecObject_var* GetLastParents(CATClassId intfName, const CATListValCATInterfaceObject_var& lst ) = 0 ;

/** 
 * @nodoc. Do Not Use.
 */
  virtual CATListValCATISpecObject_var* GetFirstChildren(CATClassId intfName, const CATListValCATInterfaceObject_var& lst ) = 0 ;

/**
 * @nodoc
 * Do Not Use.
 */
  virtual void Analyse( CATClassId intfName, CATListValCATInterfaceObject_var& lst, int SearchKey) = 0 ;

/** 
 * @nodoc.
 */
    virtual void UnsetImplementationValue() = 0 ;

/**
 * @nodoc
 * @see CATIStructureAnalyse
 */    
  virtual CATLISTV(CATISpecObject_var ) ListParents()  = 0 ;

/**
 * @nodoc
 * @see CATIStructureAnalyse
 */
  virtual CATLISTV(CATISpecObject_var ) ListChildren() = 0 ;

/**
 * @nodoc
 * Do not use
 * @see CATIStructureAnalyse
 */
  virtual void Analyse( CATClassId intfName, CATListValCATInterfaceObject_var& iLst, int iSearchKey, int iLevel) = 0;

/**
 * @nodoc
 * Builds a path element from an object.
 */
  virtual CATPathElement *BuildPathElement(CATPathElement *iHead = 0, CATBaseUnknown *iLeaf = 0) = 0;


/**
 * @nodoc. Do Not Use.
 */
  virtual void GetFamily(CATListValCATISpecObject_var &lst ) = 0;

/**
 * @nodoc
 * Gets the input specifications.
 */
  virtual void GetExternalSpecifications(CATListValCATISpecObject_var &iContextList, CATListValCATISpecObject_var &oExtSpecList) = 0;

/**
 * @nodoc
 * Resets the external specifications.
 */
  virtual void ResetAllExternalSpecifications(CATListValCATISpecObject_var &iLst) = 0;

/**
 * Returns the mechanical part to which belongs the current feature.
 */
  virtual CATISpecObject_var GetPart() const = 0;

};

CATDeclareHandler(CATIMechanicalFeature,CATBaseUnknown);

#endif

