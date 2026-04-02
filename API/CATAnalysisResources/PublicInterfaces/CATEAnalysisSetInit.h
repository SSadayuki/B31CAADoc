// COPYRIGHT DASSAULT SYSTEMES 2002
//===================================================================
//
// CATEAnalysisSetInit.h
// Provide default implementation of some methods of interface
//    CATISamAnalysisSetInit for AnalysisSets
//
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
//===================================================================
#ifndef CATEAnalysisSetInit_H
#define CATEAnalysisSetInit_H
#include "CATAnalysisResources.h"

#include "CATISamAnalysisSetInit.h"
#include "CATUnicodeString.h"
#include "CATSamDefs.h"

class CATISamAnalysisSet;
class CATISamAnalysisScan;
class CATIContainer;

//------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamAnalysisSetInit interface.
 * It can be used for AnalysisSet.
 * @see CATISamAnalysisSetInit
 */

class ExportedByCATAnalysisResources CATEAnalysisSetInit: public CATISamAnalysisSetInit
{
  
  public:
/**
 * Default constructor.
 */
    CATEAnalysisSetInit();

/**
 * Destructor.
 */
    virtual ~CATEAnalysisSetInit();    


/**
 * Initializes the analysis set.<br>
 * (This Method is systematically called after the entity creation).
 */
		virtual HRESULT Initialize();

/**
 * Checks if an Analysis feature is allowed.<br>
 * Warning : this method will be called on a StartUp and therefor some CATISamExplicit methods will not work.
 * @param ipiAnalysisSet Interface pointer on the candidate parent.
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">0</font color="red"> the parent is not valid. 
 * <li><font color="red">1</font color="red"> the parent is  valid. 
 * </ul>
  */
		virtual int CheckAnalysisParent(const CATBaseUnknown* ipiAnalysisParent, SAM_Quality &oQuality) ;

/**
 *  Change the position of an AnalysisSet inside the list of references.
 *  @param ipiScan         The CATISamAnalysisScan Object in wich the set is defined.
 */
		virtual HRESULT ReorderInScan(const CATISamAnalysisScan * ipiScan);

/**
 * Initializes the analysis set.
 * This Method is called after the set is positioned under it's parent.
 * @param oQuality ipiAnalysisParent The parent.
 */
		virtual HRESULT InitWhenPositioned(const CATBaseUnknown* ipiAnalysisParent);

/**
 * Removes the object.
 * @param iForCloseContext
 *      param to specify context of remove. If removes happens while closing a document,
 *      some actions don't need to be execute for example.
 * <br> 1 if remove acts while closing a document ...
 * <b>Note:</b> Prefer this method to reimplementing a LifeCycleObject implementation
 */
		virtual HRESULT Remove(int iForCloseContext);

  private:
/**
 * Constructors. No implementation provided. Just declared to avoid that 
 * someone could build this class.
 */
    CATEAnalysisSetInit(const CATEAnalysisSetInit &);
    CATEAnalysisSetInit& operator=(const CATEAnalysisSetInit &);
};   

#endif


