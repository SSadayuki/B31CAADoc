// COPYRIGHT DASSAULT SYSTEMES 2001
//===================================================================
//
// CATEAnalysisGroup.h
// Provide implementation to interface CATISamGroup 
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATEAnalysisGroup_H
#define CATEAnalysisGroup_H

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
#include "CATAnalysisResources.h"
#include "CATISamGroup.h"
#include "CATBaseUnknown.h"
#include "CATAnalysisExplicitTypes.h"	
#include "CATAnalysisExplicitList.h"
#include "CATAnalysisExplicitChild.h"	
#include "CATSamGroupTypes.h" 

class CATAnalysisEntityCollector;
class CATString;
//-----------------------------------------------------------------------

/**
 * Adaptor for CATISamGroup interface.
 * This adaptor provides some tools for implementing CATISamGroup.
 * This Adaptor should be used in BOA DataExtension.
 * @see CATISamGroup.
 */
class ExportedByCATAnalysisResources CATEAnalysisGroup: public CATISamGroup
{

	public:

// Standard constructors and destructors for an implementation class
// ------------------------------------------------------------------------------------
 		CATEAnalysisGroup();
		virtual ~CATEAnalysisGroup();

//=====================================================================================
// Implementation de l'interface CATISamGroup
// ------------------------------------------------------------------------------------
/**
 * Retrieves the list of the different contents of the group defined by their category.<br>
 * <font color="red">Should be re-implemented.</font>
 * @param oNumber
 *   The number of different categories.
 * @param oContents[oNumber]
 *   A pointer to the table of categories.
 */
		virtual HRESULT GetGroupAvailableContents(int & oNumber,const CATSamValue* & oContents) const = 0;

/**
 * Retrieves the list of the different contents of the group defined by their category and position.<br>
 * <font color="red">Should be re-implemented.</font>
 * @param iContent
 *   The category for which we are looking for different available positions.
 * @param oNumber
 *   The number of different positions.
 * @param oPositions[oNumber]
 *   A pointer to the table of positions.
 */
		virtual HRESULT GetGroupAvailablePositions(const CATSamValue iContent, int & oNumber,const CATString* & oPositions) const = 0;

/**
 * Tests if the group can return a collection of objects defined by a particular category and position.<br>
 * <font color="red">Default implementation based on the previous methods.</font>
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
		virtual HRESULT IsGroupOf(const CATSamValue iContent, const CATString iPosition, boolean &oRes) const ;

/**
 * Gets a collection of objects defined by a particular category and position.<br>
 * <font color="red">Should be re-implemented if the group have no explicit view,<br>
 * else just implement ReComputeContent .</font>
 * @param iContent
 *   The category of the content.
 * @param iPosition
 *   The position of the content.
 * @param oCollector
 *   The Entity Collector.
 * @see CATAnalysisEntityCollector
 */
		virtual HRESULT GetContent(const CATSamValue iContent, const CATString iPosition, const CATAnalysisEntityCollector* & oCollector) const ;

/**
 * Allows to update internal data.
 * <font color="red">Should be re-implemented for your own data members.</font>
 */
		virtual HRESULT Update() = 0;

//=====================================================================================

/**
 * Tools for Get Content implementation.<br>
 * Used if no Explicit view is managed. <font color="red">Should be re-implemented.</font>
 * @param iContent
 *   The category of the content.
 * @param iPosition
 *   The position of the content.
 */

	protected:
    virtual HRESULT ReComputeContent(const CATSamValue iContent, const CATString iPosition,
                                     int &oNbElem,CATSamExplicitPtr* &oPtrList,int*	&oGlobalPositionsList) const = 0;

	private:

		CATEAnalysisGroup(const CATEAnalysisGroup &);
		CATEAnalysisGroup& operator=(const CATEAnalysisGroup &);

//=====================================================================================
/**
 * Tools for Get Content implementation.<br>
 * The GetContent method can be called in several configuration:<br>
 * <ul>
 * <li>The group have an already "UpToDate" entity collector. To Retrieve this Entity Collector, <br>
 * Use @href CATISamExplicit#GetExplicitObject, then @href CATAnalysisExplicitParent#FindEntityCollector.<br>
 * If The entity Collector is UpTodate, you just need to AddRef it before return.</li>
 * <li>The group have an explicit view made of an entity and apply.<br>
 * Find this explicitObject in the ChildrenList of the @href CATISamExplicit#GetExplicitObject <br>
 * and use the GetTheExplicitPtrFromModel method. </li>
 * <li>Nothing is available or data are not up to date. We need to compute data again, for this <br>
 * implement ReComputeContent.</li>
 * </ul>
 */

    HRESULT GetTheExplicitPtrFromModel(CATAnalysisExplicitList &iList,const CATSamValue iContent,const CATString iPosition,
                                       int &oNbElem,CATSamExplicitPtr* &oPtrList,int*	&oGlobalPositionsList) const; 
};
#endif
