// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATISamAnalysisEntityInit.h
// Define the CATISamAnalysisEntityInit interface
//
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisEntityInit
  */
//===================================================================
#ifndef CATISamAnalysisEntityInit_H
#define CATISamAnalysisEntityInit_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATISamAnalysisSet;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisEntityInit;
#else
extern "C" const IID IID_CATISamAnalysisEntityInit ;
#endif

//------------------------------------------------------------------

/**
 * Customize analysis entity creation.
 * <b>Role</b>:
 * This interface allows to 
 * <ul><li>Insert applicative initialization. This will be called by @href CATISamAnalysisEntity#Initialize <br>
 * after the entity creation. </li>
 * <li>Insert applicative deletion. This will be called by the entity deletion</li>
 * <li>Customize the user interface for the set selection. </li></ul>
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 * @see CATISamAnalysisEntity
 */
class ExportedByCATAnalysisInterface CATISamAnalysisEntityInit: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Initializes the analysis entity.<br>
 * This Method is systematically called after the entity creation, this means
 * @href CATISamAnalysisModelFactory#CreateAnalysisEntity
 * <p> No specific behavoir is associated to the returned HRESULT.
 */
		virtual HRESULT Initialize() = 0;

/**
 * Initializes the analysis entity.<br>
 * This Method is called after the entity is positioned under a set, an entity or a basic component, this means
 * @href CATISamAnalysisSet#AddAnalysisEntity
 * <p> No specific behavoir is associated to the returned HRESULT.
 */
		virtual HRESULT InitWhenPositioned() = 0;

/**
 * Removes the object.
 * @param iForCloseContext
 *      param to specify context of remove. If removes happens while closing a document,
 *      some actions don't need to be execute for example.
 * <br> 1 if remove acts while closing a document ...
 * <p> No specific behavoir is associated to the returned HRESULT.
 * <b>Note:</b> Prefer this method to LifeCycleObject implementation
 */
		virtual HRESULT Remove(int iForCloseContext) = 0;

/**
 * Checks if an Analysis set is allowed.
 * Warning : this method will be called on a StartUp and therefor some CATISamExplicit methods will not work.
 * @param ipiAnalysisSet Interface pointer on a CATISamAnalysisSet.
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">0</font color="red"> the set is not valid. </li>
 * <li><font color="red">1</font color="red"> the set is  valid. </li>
 * </ul>
  */
		virtual int CheckAnalysisSet(const CATISamAnalysisSet* ipiAnalysisSet) = 0;

/**
 * Informs about a compatible set.
 * Dedicated to the interactive command: returns the type of set that needs to be created
 * (if the previous method doesn't find an appropriate set). <p>
 * If a type set is returned a command will be launched in order to create the set.
 * @see CATISamAnalysisSetInit
 * @param oAllowedSetType Late type of the set.
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">0</font color="red"> the set is not valid. </li>
 * <li><font color="red">1</font color="red"> the set is  valid. </li>
 * </ul>
 */
		virtual int GetAnalysisSetType(CATUnicodeString &oAllowedSetType) =0;

/**
 * Informs about the parent of an entity.
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">TRUE</font color="red"> The entity is aggregated by the set. </li>
 * <li><font color="red">FALSE</font color="red"> The entity is  aggregated by the Finite Element Model 
 * <font color="red">Default behavior</font color="red">. </li>
 * </ul>
 */
    virtual CATBoolean AggregateInSet() =0;


// No constructors or destructors on this pure virtual base class
// --------------------------------------------------------------
};
//------------------------------------------------------------------
CATDeclareHandler( CATISamAnalysisEntityInit, CATBaseUnknown );

#endif
