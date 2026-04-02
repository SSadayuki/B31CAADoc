#ifndef CATISamAnalysisScan_H
#define CATISamAnalysisScan_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=================================================================================

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATSamDefs.h"

class CATISamAnalysisSet_var;
class CATISamAnalysisSet;
class CATUnicodeString;
class CATISpecObject;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisScan ;
#else
extern "C" const IID IID_CATISamAnalysisScan ;
#endif
//------------------------------------------------------------------
/**
 * Interface for scanning the Analysis features.
 * <b>Role:</b> Interface designed to <b>scan</b> the Analysis Feature model 
 * in order to find sets and <b>allow</b> a set to be referenced by a Case.<br>
 * This interface is implemented by the feature AnalysisCase and AnalysisModel.<br>
 * The search criterion can take the Legal values:
 *	<ul><li> Sam_IN It will impact as an input the update mechanism
 *	    <li> Sam_OUT It will be considered as an output the update mechanism
 *	    <li> Sam_NEUTRAL It will have no impact for the update mechanism
 * </ul>
 * @see SAM_Quality , SAM_QualitySearch, CATISamAnalysisSet
 */
class ExportedByCATAnalysisInterface CATISamAnalysisScan: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 *  Adds a previously created set under a AnalysisCase or AnalysisModel.
 * <br><b> Note </b>: These method needs that the implementing feature and the set  
 * are defined <font color="red">in the same document</font>.
 *  @param iSet     The set to  add.
 *  @param iQuality The quality of the Set for the update. Default value is no impact.
*/
		virtual HRESULT AddSet(const CATISamAnalysisSet* iSet,
                           SAM_Quality iQuality = Sam_NEUTRAL) = 0;
/**
 *  Retrieves a set with a given name referenced under a AnalysisCase.
 *  @param iName      The name of the Set to retrieve.
 *  @param oFoundSet  The set Found.
 *  @param iSearch    The search criterion.
*/
		virtual HRESULT GetNamedSet(const CATUnicodeString& iName,
                                CATISamAnalysisSet_var& oFoundSet,
                                SAM_QualitySearch iSearch = Sam_SearchEverywhere) const = 0;
/**
*  Retrieves a set with a given type referenced under a AnalysisCase.
*  @param iType      The type of the set to retrieve.
*  @param oSetsList  The collection of the sets Found.
*  @param iSearch    The search criterion.
*/
		virtual HRESULT GetTypedSet(const CATUnicodeString& iType,
                                CATLISTV(CATBaseUnknown_var)& oSetsList,
                                SAM_QualitySearch iSearch = Sam_SearchEverywhere) const = 0;
/**
 *  Retrieves all sets under a AnalysisCase.
 *  @param oSetsList  The collection  of the sets Found.
 *  @param iSearch    The search criterion.
 */
		virtual HRESULT GetAllSets(CATLISTV(CATBaseUnknown_var)& oSetsList,
                               SAM_QualitySearch iSearch = Sam_SearchEverywhere) const = 0;

/**
 *  Removes a set reference under a AnalysisCase or AnalysisModel.
 *  @param iSet       The set to be added.
 *  @param iQuality   The quality of the Set for the update. Default value is Everywhere.
*/
		virtual HRESULT RemoveSet(const CATISamAnalysisSet* iSet,
                              SAM_QualitySearch iSearch = Sam_SearchEverywhere) const = 0;

/**
 *  Change the position of an AnalysisSet inside the list of references.
 *  @param iSet         The set to be positionned.
 *  @param iPositionSet The positionning set. If NULL, the first position will be choosen <br>
 *  and iBeforeAfter will not be used.
 *  @param iQuality The quality of the Set for the update.
 *  @param iBeforeAfter The kind of positionning.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">1</font color="red"> Before iPositionSet. </li>
 * <li><font color="red">2</font color="red"> After iPositionSet.</li></ul>
*/
		virtual HRESULT ChangePosition(const CATISamAnalysisSet* iSet,
                                   const CATISpecObject* iPositionSet,
                                   SAM_Quality iQuality,
                                   int iBeforeAfter) = 0;
};
//------------------------------------------------------------------

CATDeclareHandler( CATISamAnalysisScan, CATBaseUnknown );

#endif
