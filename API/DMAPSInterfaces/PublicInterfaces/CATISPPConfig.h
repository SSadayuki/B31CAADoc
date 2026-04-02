#ifndef CATISPPConfig_H
#define CATISPPConfig_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "ProcessInterfaces.h"

#include "CATIAV5Level.h"



#include "CATBaseUnknown.h"
#include "CATSPPDeclarations.h"
#include "CATListOfCATUnicodeString.h"

class CATIContainer_var ;
class CATUnicodeString ;




#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPConfig ;
#else
extern "C" const IID IID_CATISPPConfig ;
#endif

/**
*	Interface to manage different behaviors while creating new process. 
*   <br> <b> Role: </b> You can create a new library which is specific for this process
*	or you can reuse a library that you have already created.
*	<br>In the first case, the library is created in the same document as the process.
*	<br>In the second case, it is saved in an external document.
*	<br>CATSession is the only object which can be managed by these interface.
*/

class ExportedByProcessInterfaces CATISPPConfig : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
	/**
	*  Returns list of libraries associated to new process created.
	*/
    virtual CATListOfCATUnicodeString *	GetListOfLibraryFilePath() const = 0 ;
	/**
	*  Sets list of libraries associated to new process created.
	*/
    virtual void			SetListOfLibraryFilePath(const CATListOfCATUnicodeString iPaths) = 0 ;

	/**
	* @nodoc
	*/
    virtual CATSPPLinkMode		GetLinkMode() const = 0 ;

	/**
	* @nodoc
	*/
    virtual CATSPPCreateMode		GetCreateMode() const = 0 ;
	/**
	* @nodoc
	*/
    virtual void			SetCreateMode(const CATSPPCreateMode iMode = Hierarchy) = 0 ;
	
	/**
	* @nodoc
	*/
    virtual CATSPPConditionFilter	GetConditionFilter() const = 0 ;
	/**
	* @nodoc
	*/
    virtual void			SetConditionFilter(const CATSPPConditionFilter iMode = ShowCondition) = 0 ;
 
 	/**
	*  Returns whether assigned resources are visualized or not.
	* @see CATSPPResourceFilter
	*/
    virtual CATSPPResourceFilter	GetResourceFilter() const = 0 ;
 	/**
	*  Sets whether assigned resources are visualized or not.
	* @see CATSPPResourceFilter
	*/
    virtual void			SetResourceFilter(const CATSPPResourceFilter iMode = ShowResource) = 0 ;

	/**
	*  Returns whether assigned attributes are visualized or not.
	* @see CATSPPAttributeFilter
	*/
    virtual CATSPPAttributeFilter	GetAttributeFilter() const = 0 ;
	/**
	*  Sets whether assigned attributes are visualized or not.
	* @see CATSPPAttributeFilter
	*/
    virtual void			SetAttributeFilter(const CATSPPAttributeFilter iMode = ShowAttribute) = 0 ;

	/**
	* @nodoc
	*/
    virtual CATSPPConnectorFilter	GetConnectorFilter() const = 0 ;
	/**
	* @nodoc
	*/
    virtual void			SetConnectorFilter(const CATSPPConnectorFilter iMode = ShowConnector) = 0 ;
 
 
	/**
	*  Returns whether assigned item are visualized or not.
	* @see CATSPPItemFilter
	*/
    virtual CATSPPItemFilter		GetItemFilter() const = 0 ;
  	/**
	*  Sets whether assigned item are visualized or not.
	* @see CATSPPItemFilter
	*/
    virtual void			SetItemFilter(const CATSPPItemFilter iMode = ShowItem) = 0 ;



// Added by gdu, 01-20021, for R9
  /**
	*  Returns whether "First Process Processing" Item are visualized or not.
	* @see CATSPPFirstPPItemFilter
	*/
    virtual CATSPPFirstPPItemFilter		GetFPPItemFilter() const = 0 ;
  	/**
	*  Sets whether "First Process Processing" item are visualized or not.
	* @see CATSPPFirstPPItemFilter
	*/
    virtual void			SetFPPItemFilter(const CATSPPFirstPPItemFilter iMode = ShowFPPItem) = 0 ;



	/**
	*  Returns whether compound containers are visualized or not.
	* @see CATSPPFilter
	*/
    virtual CATSPPFilter		GetCompoundFilter() const = 0 ;
  	/**
	*  Sets whether assigned compound containers are visualized or not.
	* @see CATSPPFilter
	*/
    virtual void			SetCompoundFilter(const CATSPPFilter iMode = ShowFilter) = 0 ;

/**
	*  Returns whether logical activities are visualized or not.
	* @see CATSPPFilter
	*/
    virtual CATSPPLogicalActivitiesFilter		GetLogicalActivitiesFilter() const = 0 ;
  	/**
	*  Sets whether logical activities containers are visualized or not.
	* @see CATSPPFilter
	*/
    virtual void			SetLogicalActivitiesFilter(const CATSPPLogicalActivitiesFilter iMode = ShowLogicalActivities) = 0 ;

// Add by cfo 22/04/03 for R12
/**
	*  Returns whether collapse/expand is actived by double-clicking on activities.
	* @see CATSPPFilter
	*/
    virtual CATSPPExpandCollapseActivation		GetExpandCollapse() const = 0 ;
  	/**
	*  Sets whether collapse/expand is actived by double-clicking on activities.
	* @see CATSPPFilter
	*/
    virtual void			SetExpandCollapse(const CATSPPExpandCollapseActivation iMode = DisableExpandCollapse) = 0 ;

// Add by axt 14/05/07 for R18
/**
	*  Returns whether to display the label or the E5 configured name
	* @see CATSPPDisplayNameMode
	*/
    virtual CATSPPDisplayNameMode		GetDisplayNameMode() const = 0 ;
  	/**
	*  Sets whether to display the label or the E5 configured name
	* @see CATSPPDisplayNameMode
	*/
    virtual void			SetDisplayNameMode(const CATSPPDisplayNameMode iMode = HideConfigName) = 0 ;



};
CATDeclareHandler( CATISPPConfig, CATBaseUnknown) ;

#endif
