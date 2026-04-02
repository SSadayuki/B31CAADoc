//--------------------------------------------------------------------------------------------------
// COPYRIGHT Dassault Systemes 2004
//--------------------------------------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATICafTreeVizManipSettingAtt_H
#define CATICafTreeVizManipSettingAtt_H

#include "CATTreeOptions.h"
#include "CATBaseUnknown.h"

#include "CatTreeTypeEnum.h"
#include "CatTreeSizeTypeEnum.h"
#include "CatTreeOrientationEnum.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTreeOptions IID IID_CATICafTreeVizManipSettingAtt;
#else
extern "C" const IID IID_CATICafTreeVizManipSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

//--------------------------------------------------------------------------------------------------

/**
 * Interface to retrieve and set the information on the specification tree.
 */
class ExportedByCATTreeOptions CATICafTreeVizManipSettingAtt: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
	/**
	* To retrieve the type applied to the specification tree.
	*/
	virtual HRESULT GetType(CatTreeTypeEnum &oType) = 0;
	
	/**
	* To set the type applied to the specification tree.
	*/
	virtual HRESULT SetType(CatTreeTypeEnum &iType) = 0;
	
    /**
	* Retrieves the state of the type parameter.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetTypeInfo(CATSettingInfo* ioTypeInfo) = 0;

	/** 
	* Locks or unlocks the type applied to the specification tree .
	* <br><b>Role</b>: Locks or unlocks the type applied to the specification tree if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetTypeLock( unsigned char      iLocked ) = 0;
	



	/**
	* To retrieve the orientation applied to the specification tree.
	*/
	virtual HRESULT GetOrientation(CatTreeOrientationEnum &oOrientation) = 0;
	
	/**
	* To set the orientation applied to the specification tree.
	*/
	virtual HRESULT SetOrientation(CatTreeOrientationEnum &iOrientation) = 0;
	
     /**
	* Retrieves the state of the orientation parameter.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetOrientationInfo(CATSettingInfo *ioOrientationInfo) = 0;

	/** 
	* Locks or unlocks the orientation applied to the specification tree .
	* <br><b>Role</b>: Locks or unlocks the orientation applied to the specification tree if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetOrientationLock( unsigned char      iLocked ) = 0;



    /**
	* To retrieve the number of characters shown for the text of the specification tree.
	*/
	virtual HRESULT GetSize(CATLONG &oSize) = 0;
	
	/**
	* To set the number of characters shown for the text of the specification tree.
	*/
	virtual HRESULT SetSize(CATLONG &iSize) = 0;
	
	/**
	* To retrieve the type of size applied to the text of the specification tree.
	*/
	virtual HRESULT GetSizeType(CatTreeSizeTypeEnum &oSizeType) = 0;
	
	/**
	* To set the type of size applied to the text of the specification tree.
	*/
	virtual HRESULT SetSizeType(CatTreeSizeTypeEnum &iSizeType) = 0;
	
    /**
	* Retrieves the state of the type of size applied to the text of the specification tree.
	* <br><b>Role</b>: Attributes "size" and "SizeType" are linked together by the same 
	* lock. So there is no function "GetSizeInfo".
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetSizeTypeInfo(CATSettingInfo *ioSizeTypeInfo) = 0;

	/** 
	* Locks or unlocks the type of size applied to the text of the specification tree .
	* <br><b>Role</b>: Locks or unlocks the type of size applied to the text of the specification tree if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* Attributs "size" and "SizeType" are linked together by the same 
	* lock. So there is no function "SetSizeTypeLock".
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetSizeTypeLock( unsigned char      iLocked ) = 0;





   /**
	* To retrieve the visualization Show/NoShow's mode applied to the specification tree.
	*/
	virtual HRESULT GetShowActivation(CATBoolean &oType) = 0;
	
	/**
	* To set the visualization Show/NoShow's mode applied to the specification tree.
	*/
	virtual HRESULT SetShowActivation(CATBoolean &iType) = 0;
	
     /**
	* Retrieves the state of the visualization Show/NoShow's mode applied to the specification tree.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetShowActivationInfo(CATSettingInfo *ioTypeInfo) = 0;

	/** 
	* Locks or unlocks the visualization Show/NoShow's mode applied to the specification tree.
	* <br><b>Role</b>: Locks or unlocks the visualization Show/NoShow's mode applied to the specification tree if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetShowActivationLock( unsigned char      iLocked ) = 0;



	/**
	* To retrieve the "display geometry on scrolling" mode.
	*/
	virtual HRESULT GetDisplayGeomOnScrolling(CATBoolean &oType) = 0;
	
	/**
	* To set the "display geometry on scrolling" mode applied to the specification tree.
	*/
	virtual HRESULT SetDisplayGeomOnScrolling(CATBoolean &iType) = 0;
	
     /**
	* Retrieves the state of the "display geometry on scrolling" mode applied to the specification tree.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetDisplayGeomOnScrollingInfo(CATSettingInfo *ioTypeInfo) = 0;

	/** 
	* Locks or unlocks the "display geometry on scrolling" mode.
	* <br><b>Role</b>: Locks or unlocks the "dislpay geometry on scrolling" mode if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetDisplayGeomOnScrollingLock( unsigned char      iLocked ) = 0;



	/**
	* To retrieve the automatic expand mode applied to the specification tree.
	*/
	virtual HRESULT GetAutoExpandActivation(CATBoolean &oType) = 0;

	/**
	* To set the automatic expand mode applied to the specification tree.
	*/
	virtual HRESULT SetAutoExpandActivation(CATBoolean &iType) = 0;

	 /**
	* Retrieves the state of the automatic expand mode applied to the specification tree.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetAutoExpandActivationInfo(CATSettingInfo *ioTypeInfo) = 0;

		/** 
	* Locks or unlocks the automatic expand mode.
	* <br><b>Role</b>: Locks or unlocks the automatic expand mode if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetAutoExpandActivationLock( unsigned char      iLocked ) = 0;



	/**
	* To retrieve the arc-selection mode applied to the specification tree.
	* <br><b>Role</b>: The "arc selection" mode allows to swap in
	* the tree viewpoint when the user left click, with the mouse, on an arc of the tree.
	*/
	virtual HRESULT GetArcSelectionActivation(CATBoolean &oType) = 0;

	/**
	* To set the arc-selection mode applied to the specification tree.
	*/
	virtual HRESULT SetArcSelectionActivation(CATBoolean &iType) = 0;

	 /**
	* Retrieves the state of the arc-selection mode applied to the specification tree.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetArcSelectionActivationInfo(CATSettingInfo *ioTypeInfo) = 0;

		/** 
	* Locks or unlocks the arc-selection mode applied to the specification tre.
	* <br><b>Role</b>: Locks or unlocks the arc-selection mode applied to the specification tre if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetArcSelectionActivationLock( unsigned char      iLocked ) = 0;




	/**
	* To retrieve the automatic scrolling mode applied to the specification tree.
	* <br><b>Role</b>: The "automatic scrolling" mode allows to scroll automaticaly the tree
	* when a user try to drag and drop an object ont the top or the bottom of the tree.
	*/
	virtual HRESULT GetAutoScrollActivation(CATBoolean &oType) = 0;

	/**
	* To set the automatic scrolling mode applied to the specification tree.
	*/
	virtual HRESULT SetAutoScrollActivation(CATBoolean &iType) = 0;

	 /**
	* Retrieves the state of the automatic scrolling mode applied to the specification tree.
	* @param oInfo
	*	Address of an object CATSettingInfo.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetAutoScrollActivationInfo(CATSettingInfo *ioTypeInfo) = 0;

		/** 
	* Locks or unlocks the automatic scrolling mode applied to the specification tre.
	* <br><b>Role</b>: Locks or unlocks the automatic scrolling mode applied to the specification tre if the
	* operation is allowed in the current administrated environment. In user mode 
	* this method will always return E_FAIL.
	* @param iLocked
	*	the locking operation to be performed
	*	<b>Legal values</b>:
	*	<br><tt>1 :</tt>   to lock the parameter.
	* 	<br><tt>0:</tt>   to unlock the parameter.
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetAutoScrollActivationLock( unsigned char      iLocked ) = 0;
};

#endif
