// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATEAnalysisEntityInit.h
// Provide default implementation of some methods of interface
//    CATISamAnalysisEntityInit for AnalysisEntity
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATEAnalysisEntityInit_H
#define CATEAnalysisEntityInit_H
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CATAnalysisResources.h"

#include "CATISamAnalysisEntityInit.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"
class CATISamAnalysisSet;

//------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamAnalysisEntityInit interface.
 * It can be used for AnalysisEntity.
 * @see CATISamAnalysisEntityInit
 */

class ExportedByCATAnalysisResources CATEAnalysisEntityInit: public CATISamAnalysisEntityInit
{
  
  public:
/**
 * Default constructor.
 */
    CATEAnalysisEntityInit();

/**
 * Destructor.
 */
    virtual ~CATEAnalysisEntityInit();    

 /**
 * Initializes the analysis entity.<br>
 * This Method is systematically called after the entity creation, this means
 * @href CATISamAnalysisModelFactory#CreateAnalysisEntity
 */
		virtual HRESULT Initialize() ;

/**
 * Initializes the analysis entity.<br>
 * This Method is called after the entity is positioned under a set, an entity or a basic component, this means
 * @href CATISamAnalysisSet#AddAnalysisEntity
 */
		virtual HRESULT InitWhenPositioned();

/**
 * Removes the object.
 * @param iForCloseContext
 *      param to specify context of remove. If removes happens while closing a document,
 *      some actions don't need to be execute for example.
 * <br> 1 if remove acts while closing a document ...
 */
		virtual HRESULT Remove(int iForCloseContext) ;

/**
 * Checks if an Analysis set if allowed.<br>
 * Warning : this method will be called on a StartUp and therefor some CATISamExplicit methods will not work.
 * @param ipiAnalysisSet Interface pointer on a CATISamAnalysisSet.
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">0</font color="red"> the set is not valid. 
 * <li><font color="red">1</font color="red"> the set is  valid. 
 * </ul>
  */
		virtual int CheckAnalysisSet(const CATISamAnalysisSet* ipiAnalysisSet) ;

/**
 * Returns analysis set allowed as parent. <br>
 * Warning : this method will be called on a StartUp and therefor some CATISamExplicit methods will not work.
 * @param oAllowedSetType analysis set type .
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">0</font color="red"> no set found. 
 * <li><font color="red">1</font color="red"> 1 set found. 
 * <li><font color="red">2</font color="red"> too many set found. 
 * </ul>
  */
		virtual int GetAnalysisSetType(CATUnicodeString &oAllowedSetType);

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
    virtual CATBoolean AggregateInSet();


  private:
/**
 * Constructors. No implementation provided. Just declared to avoid that 
 * someone could build this class.
 */
    CATEAnalysisEntityInit(const CATEAnalysisEntityInit &);
    CATEAnalysisEntityInit& operator=(const CATEAnalysisEntityInit &);


};   

#endif


