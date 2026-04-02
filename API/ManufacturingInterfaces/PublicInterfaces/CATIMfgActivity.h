#ifndef CATIMfgActivity_H
#define CATIMfgActivity_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
#include "CATIAV5Level.h"

#include "MfgItfEnv.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATBooleanDef.h"

class CATIMfgTransitionPath_var;
class CATIMfgSetup_var;

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivity;
#else
extern "C" const IID IID_CATIMfgActivity;
#endif

/**   
 * Interface dedicated to manufacturing operation management.
 * <b>Role</b>: This interface offers services mainly to manage links with the tool and the manufacturing or design feature <br>
 */

class ExportedByMfgItfEnv CATIMfgActivity : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

	/**
	* @nodoc
	*/
    virtual HRESULT                 AddChild(const CATUnicodeString &iTypeToCreate, CATBaseUnknown_var  &oCreatedOperation)=0;

	/**
	* @nodoc
	*/
    virtual HRESULT                 AddChild(const CATBaseUnknown_var &iOperation)=0;	

    /**
	* @nodoc
	*/
	virtual CATBoolean GetFeatureToCreate(CATUnicodeString& ofeat) const=0 ;

    /**
	* Returns the manufacturing feature or design feature associated with the manufacturing operation.
	*/
    virtual CATBaseUnknown_var GetFeature() =0 ;

	/**
	* Returns the manufacturing feature associated with the manufacturing operation.
	*/
    virtual CATBaseUnknown_var GetFeatureInContext() =0 ;

    /**
	* Assign a feature to a Manufacturing Operation.
    * @param iFeature The feature to be assigned. It can be a design feature, or a Manufacturing feature like Pattern or Machinable feature.
    * @param iContext The product that contains the feature itself (case of a design feature) or the geometry pointed by the Manufacturing Feature.
	*/
	virtual HRESULT SetFeature(const CATBaseUnknown_var &iFeature, const CATBaseUnknown_var &iContext = NULL_var) =0 ;

    /**
	* @nodoc
	*/
	virtual HRESULT                 RemoveFeature(const CATBaseUnknown_var &iFeature = NULL_var) =0 ;

	/**
	* @nodoc
	*/
	virtual HRESULT                 SetDefaultTool (const CATBaseUnknown_var &iTool) =0 ;

	/**
	* @nodoc
	*/
	virtual HRESULT                 GetDefaultTool (CATBaseUnknown_var &oTool) =0;
    
    /**
    * Returns the tool associated with the manufacturing operation.
    */
	virtual CATBaseUnknown_var      GetTool()=0 ;

    /**
    * Associates the tool with the manufacturing operation.
    * @param iTool
    *   The tool 
    * @param iCheckToolChanges
    *   A flag to indicate whether the tool changes should be checked
    *   <br><b>Legal values</b>:
    *   <ul>
    *   <li>TRUE: the check will be performed</li>
    *   <li>FALSE: no check</li>
    *   </ul>
    */
    virtual HRESULT                 SetTool(const CATBaseUnknown_var &iTool,
											const CATBoolean iCheckToolChanges = FALSE) =0 ;

    /**
	* @nodoc
	*/
    virtual HRESULT                 RemoveTool (const CATBaseUnknown_var &iTool) =0 ;
	
	/**
	* @nodoc
	*/
    virtual HRESULT                 ReplaceTool(const CATBaseUnknown_var &iPreviousTool,
												const CATBaseUnknown_var &iNewTool,
												const CATBoolean checkToolChanges = FALSE) =0 ;
	/**
	* @nodoc
	*/
    virtual HRESULT                 ReplaceToolAssembly(const CATBaseUnknown_var &iPreviousToolAssembly,
												                                const CATBaseUnknown_var &iNewToolAssembly,
												                                const CATBoolean checkToolChanges = FALSE) =0 ;
	/**
	* @nodoc
	*/
	virtual HRESULT                 SetCurrentToolType (const CATUnicodeString &iType)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT                 GetCurrentToolType (CATUnicodeString &oType)=0;

	/**
	* @nodoc
	*/
    virtual HRESULT                 CheckToolChanges () =0;

# ifdef CATIAV5R6

	/**
	* @nodoc
	*/
	virtual HRESULT                 GetToolAndAssembly (CATBaseUnknown_var &oTool,
								              		    CATBaseUnknown_var &oAssembly)=0 ;
	/**
	* @nodoc
	*/
	virtual HRESULT                 SetToolAssembly (const CATBaseUnknown_var &iToolAssembly) =0 ;
	
# endif

	/**
	* @nodoc
	*/
	virtual HRESULT                 SetDefaultInsert (const CATBaseUnknown_var &iInsert) =0 ;

	/**
	* @nodoc
	*/
	virtual HRESULT                 GetDefaultInsert (CATBaseUnknown_var &oInsert) =0;

   /**
	* Retrieves the tool requirement associated with the manufacturing operation.
    * @param oToolReq 
	*       the tool requirement if it exists
	*/
	virtual HRESULT                 GetToolRequirement (CATBaseUnknown_var& oToolReq) = 0 ;

	/**
	* Associates the tool requirement with the manufacturing operation.
    * @param iToolReq 
	*         The tool requirement to associate
	*         (If NULL_var (default value), a default tool requirement is associated)
	*/
	virtual HRESULT                 SetToolRequirement (const CATBaseUnknown_var& iToolReq = NULL_var) = 0 ;
	
	/**
	* @nodoc
	*/
	virtual HRESULT                 GetAuthorizedFatherActivity (const CATUnicodeString &iType, 
		                                      CATBaseUnknown_var& oFather, CATBaseUnknown_var& oFatherChild) =0;
	/**
	* @nodoc
	*/
    virtual HRESULT                 GetFather(CATBaseUnknown_var &oFatherActivity)=0;

	/**
	* Retrieves the Program of the Activity.
    *  @param oProgram 
    *   The Program of the activity
	*/
    virtual HRESULT                 GetProgram(CATBaseUnknown_var &oProgram)=0;
	/**
	* @nodoc.
	*/
    virtual HRESULT                 GetSetup(CATIMfgSetup_var &oSetup)=0;

	/**
	* @nodoc
	*/
    virtual HRESULT                 GetProcess(CATBaseUnknown_var  &oProcess)=0;

	/**
	* @nodoc
	*/
    virtual int                     IsAuthorizedFather(const CATBaseUnknown_var & iFatherAct) =0; 

	/**
	* @nodoc
	*/
    virtual HRESULT                 GetChildren (CATListValCATBaseUnknown_var& oChildrenList) = 0;  

	/**
	* @nodoc
	*/
    virtual HRESULT                 GetLastChild (CATBaseUnknown_var& oLastChild) = 0;

	/**
	* @nodoc
	*/
    virtual HRESULT                 GetFirstChild (CATBaseUnknown_var& oFirstChild) = 0;

    /**
	* @nodoc
	*/
	enum Direction {ToNextActivity, ToPreviousActivity};

    /**
	* @nodoc
	*/
	enum BehaviourOfActivity {ToolMoving, Rotation, Unknown};	

	/**
	* @nodoc
	*/
    virtual HRESULT                 ActivityBehaviour(BehaviourOfActivity &Behaviour) = 0;

	/**
	* @nodoc
	*/
    virtual HRESULT                 GetFollowingActivity(Direction Dir, CATBaseUnknown_var& Activity) = 0;
	
	/**
	* @nodoc
	*/
	virtual HRESULT                 GetTransitionPath(Direction Dir, CATIMfgTransitionPath_var &TransitionPath) = 0;

	/**
	* @nodoc
	*/
	virtual int                     IsActive() = 0;

	/**
	* @nodoc
	*/
	virtual int                     IsSequencedInProgram() = 0;

	/**
	* @nodoc
	*/
	virtual int                     IsSequencedInProcess() = 0;    

	/**
	* @nodoc
	*/
	virtual int                     IsComplete() = 0;

	/**
	* @nodoc
	*/
    virtual void                    SetActive (int iIsActive) = 0;

	/**
	* @nodoc
	*/
    virtual int                     IsUpToDate() = 0;

	/**
	* @nodoc
	*/
    virtual int                     Update() = 0;

 	/**
	* @nodoc
	*/   
	enum CreationMode {Undefined=0, Manually=1, FromPreferences=2, Automatically=3, AutomaticallyButModified=4 };

	/**
	* @nodoc
	*/
    virtual HRESULT                 GetCreationMode (int &oCreationMode) = 0;

	/**
	* @nodoc
	*/
    virtual HRESULT                 SetCreationMode (const int iCreationMode) = 0;

	/**
	* @nodoc
	*/
    virtual CATBaseUnknown_var      GetMacro (CATUnicodeString& iType) = 0;

	/**
	* @nodoc
	*/
    virtual HRESULT GetMacroMotion (CATUnicodeString& iType, CATUnicodeString& iGroup,CATBaseUnknown_var &MacroMotion) = 0;

	/**
	* @nodoc
	*/
    virtual void                    SetActive (CATUnicodeString& iType,const int iActiv) = 0;

	/**
	* @nodoc
	*/
    virtual void                    SetClearanceMode(const CATUnicodeString& iType)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT SetRepresentation (const CATUnicodeString &iPath)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT GetRepresentation (CATUnicodeString &oPath)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT SetPatternUsage (const CATBaseUnknown_var &iPatternUsage)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT GetPatternUsage (CATBaseUnknown_var &oPatternUsage)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT ResetTool ()=0;

	/**
	* Retrieves the Setup of the Activity.
    *  @param oSetup 
    *   The Setup of the activity
	*/
    virtual HRESULT                 GetSetup(CATBaseUnknown_var &oSetup)=0;

	/**
	* @nodoc
	*/
	virtual HRESULT GetSpecificStartFeedrate (	CATUnicodeString& oType, 
										CATBaseUnknown_var& oValue, 
										CATBoolean &oStartInRapid)=0;


};

CATDeclareHandler(CATIMfgActivity, CATBaseUnknown) ;
#endif







