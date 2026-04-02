// COPYRIGHT Dassault Systemes 2000
//===================================================================
//
// CATISamGroup.h 
// Define the CATISamGroup interface
//
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisGroup
  */
//===================================================================
#ifndef CATISamGroup_H
#define CATISamGroup_H

#include "CATBaseUnknown.h"
#include "CATSamGroupTypes.h"
#include "CATAnalysisInterface.h"  
#include "CATAnalysisExplicitDefinitions.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamGroup ;
#else
extern "C" const IID IID_CATISamGroup
#endif

class CATString;
class CATUnicodeString;
class CATAnalysisEntityCollector;
//------------------------------------------------------------------

/**
 * Provides methods to manipulate groups of finite element entities.
 * This interface provides simple methods for Grouping (nodes, edge, face, element) behaviour.
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATAnalysisInterface CATISamGroup: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the type of the Group.
 * @param oType The type of the Group.
 *		CATSamGroupTypeImplicit
 *		CATSamGroupTypeSpecified
 *		CATSamGroupTypeFiltered
 *		CATSamGroupTypeFree
 *		CATSamGroupTypeAssembly
 *		CATSamGroupTypeCombined
 */
		virtual HRESULT GetGroupType(CATSamGroupType &oType) const = 0;

/**
 * Retrieves the list of the different contents of the group defined by their category.<br>
 * @param oNumber
 *   The number of different categories.
 * @param oContents[oNumber]
 *   A pointer to the table of categories.
 */
		virtual HRESULT GetGroupAvailableContents(int & oNumber,const CATSamValue* & oContents) const = 0;

/**
 * Retrieves the list of the different contents of the group defined by their category and position.<br>
 * @param iContent
 *   The category for which we are looking for different available positions.0
 * @param oNumber
 *   The number of different positions.
 * @param oPositions[oNumber]
 *   A pointer to the table of positions.
 */
		virtual HRESULT GetGroupAvailablePositions(const CATSamValue iContent, int & oNumber,const CATString* & oPositions) const = 0;

/**
 * Tests if the group can return a collection of objects defined by a particular category and position.<br>
 * @param iContent
 *   The category of the content.
 * @param iPosition
 *   The position of the content.
 * @param oRes
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">TRUE</font color="red"> if the group can return objects.
 * <li><font color="red">FALSE</font color="red"> otherwise. 
 * </ul>
 */
		virtual HRESULT IsGroupOf(const CATSamValue iContent, const CATString iPosition, CATBoolean &oRes) const = 0;
		
/**
 * Gets a collection of objects defined by a particular category and position.<br>
 * @param iContent
 *   The category of the content.
 * @param iPosition
 *   The position of the content.
 * @param oCollector  [out , CATBaseUnknown#Release]
 * The entity collector
 * @see CATAnalysisEntityCollector
 */
		virtual HRESULT GetContent(const CATSamValue iContent, const CATString iPosition, const CATAnalysisEntityCollector* & oCollector) const = 0;

/**
 * Allows to update internal data.
 */
		virtual HRESULT Update() = 0 ;


};

//------------------------------------------------------------------
CATDeclareHandler(CATISamGroup,CATBaseUnknown);

#endif
